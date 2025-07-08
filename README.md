# ESP32 Mini Drone (In Progress)

## Description

This project uses the **ESP32 microcontroller** combined with mini DC motors, a lithium-ion battery, and an accelerometer/gyroscope to create a functioning mini drone. The drone currently measures approximately 145x145x25 (mm) and weighs around 160 grams.

The purpose of this project is to gain a better understanding of microcontroller programming and basic circuit design. The drone's flight is controlled using an **Xbox One controller** via the **Bluetooth** capability of the ESP32. The controller's buttons and joysticks were manually mapped, and sensitivity boundaries were defined to ensure smooth flight performance and a quick learning curve for users.

This project is currently a work in progress.

## Project Specs

All Components were purchased through Ebay, new purchasing options are provided in the table below.

| **Component**      | **Details**              | **Link**            |
|--------------------|--------------------------|---------------------|
|Microcontroller     |ESP32                     |**[Amazon](https://www.amazon.com/ELEGOO-ESP-WROOM-32-Development-Bluetooth-Microcontroller/dp/B0D8T53CQ5/ref=sr_1_4?crid=8B36UIBF7NLE&dib=eyJ2IjoiMSJ9.KNIYFtXS4T1N7lNbcldU5TZMLABy3y0V00ME9yq1mYbMYUub-A1GOALt3HxF_ltfwmsF1huTZqdb_GPfN7YgqCBPR3qAhnuZ-6-tNewAZz_8qfFPe7SS9BxBxxkp_ahu2NLEae_adQ5cPJYStbdjmb4Z5PM2A6lnW6H8jXO6gGaeQcQmiDxX-0OXmmGN0q52rJg3K47he09FK4HaRxcloTOfc_oBpVzyvMXfnjzOwTI.Po5r8JbJOlA2pHh6oCFJ_P2w-v2LDkgoftKTvw5pl4c&dib_tag=se&keywords=esp32&qid=1750100966&sprefix=esp3%2Caps%2C170&sr=8-4)**                     |
|Motors              |4x Mini brushed DC motors |**[Amazon](https://www.amazon.com/dp/B0BV6P4XYX?ref=ppx_yo2ov_dt_b_fed_asin_title)**                     |
|Battery, Connection |3.7V Lipo Battery         |**[Amazon](https://www.amazon.com/dp/B0CQ71ZS1X?ref=ppx_yo2ov_dt_b_fed_asin_title)**, **[Amazon](https://www.amazon.com/dp/B07YQY9V6F?ref=ppx_yo2ov_dt_b_fed_asin_title)**                    |
|Gyro Sensor         |MPU6050                   |**[Amazon](https://www.amazon.com/HiLetgo-MPU-6050-Accelerometer-Gyroscope-Converter/dp/B00LP25V1A/ref=sr_1_3_pp?crid=3BWJXTMO4D63M&dib=eyJ2IjoiMSJ9.DoMAWgZdKOENeBPp0nuxo0QBnKmT21IRHnxbDDhsugpB3OTUi0tDjaebrAG3zQ-HcPNCVZ2tusNi-U3q3n5cMC4fS4_jUMTjbEHqIKHmCJIB4WJkasbu_7b5TkEH_BpV6JNNmsvm98Ll8-juFouFhyXhvLvlA2RNhPxXEw4XpgLOsxQ2hVRD1NnhMCVhCBOME0ffdBJAneXnQilMZFZov4tKK2HaHNXc4K8tkJ6tSEY.W9XD9N7fpx99r0VnOl6zoDTG49dPYv2-kJk1sRi7BRo&dib_tag=se&keywords=MPU6050&qid=1750101091&sprefix=mpu6050%2Caps%2C150&sr=8-3&th=1)**                     |
|Controller          |Xbox One Controller       |                     |
|Drone Frame         |Custom Designed (PLA)     |**[Github]()**                     |
|Size (mm)           |~145 x 145 x 25           |                    |
|Total Weight        |~160 grams                |                    |
