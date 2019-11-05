package com.github.mestrace.mycallapk;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.telephony.SmsManager;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private EditText enterPhoneEditText;
    private Button dialPhoneButton;
    private Button sendSMSButton;
    private EditText enterSMSEditText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        enterPhoneEditText = (EditText) findViewById(R.id.entry_phone);
        dialPhoneButton = (Button) findViewById(R.id.dial_phone);

        sendSMSButton = (Button) findViewById(R.id.send_sms);
        enterSMSEditText = (EditText) findViewById(R.id.entry_sms);

        dialPhoneButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(Intent.ACTION_DIAL, Uri.parse("tel:" + enterPhoneEditText.getText().toString()));
                intent.setClassName("com.android.phone", "com.android.phone.OutgoingCallBroadcaster");
                intent.setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
                startActivity(intent);
            }
        });

        sendSMSButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                SmsManager smsManager = SmsManager.getDefault();
                smsManager.sendTextMessage(enterPhoneEditText.getText().toString(), null, enterSMSEditText.getText().toString(), null, null);
            }
        });


    }
}
