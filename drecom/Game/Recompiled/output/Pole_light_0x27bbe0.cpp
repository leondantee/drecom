#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Pole_light
// Address: 0x27bbe0 - 0x27c12c
void Pole_light_0x27bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pole_light_0x27bbe0");
#endif

    switch (ctx->pc) {
        case 0x27bbe0u: goto label_27bbe0;
        case 0x27bbe4u: goto label_27bbe4;
        case 0x27bbe8u: goto label_27bbe8;
        case 0x27bbecu: goto label_27bbec;
        case 0x27bbf0u: goto label_27bbf0;
        case 0x27bbf4u: goto label_27bbf4;
        case 0x27bbf8u: goto label_27bbf8;
        case 0x27bbfcu: goto label_27bbfc;
        case 0x27bc00u: goto label_27bc00;
        case 0x27bc04u: goto label_27bc04;
        case 0x27bc08u: goto label_27bc08;
        case 0x27bc0cu: goto label_27bc0c;
        case 0x27bc10u: goto label_27bc10;
        case 0x27bc14u: goto label_27bc14;
        case 0x27bc18u: goto label_27bc18;
        case 0x27bc1cu: goto label_27bc1c;
        case 0x27bc20u: goto label_27bc20;
        case 0x27bc24u: goto label_27bc24;
        case 0x27bc28u: goto label_27bc28;
        case 0x27bc2cu: goto label_27bc2c;
        case 0x27bc30u: goto label_27bc30;
        case 0x27bc34u: goto label_27bc34;
        case 0x27bc38u: goto label_27bc38;
        case 0x27bc3cu: goto label_27bc3c;
        case 0x27bc40u: goto label_27bc40;
        case 0x27bc44u: goto label_27bc44;
        case 0x27bc48u: goto label_27bc48;
        case 0x27bc4cu: goto label_27bc4c;
        case 0x27bc50u: goto label_27bc50;
        case 0x27bc54u: goto label_27bc54;
        case 0x27bc58u: goto label_27bc58;
        case 0x27bc5cu: goto label_27bc5c;
        case 0x27bc60u: goto label_27bc60;
        case 0x27bc64u: goto label_27bc64;
        case 0x27bc68u: goto label_27bc68;
        case 0x27bc6cu: goto label_27bc6c;
        case 0x27bc70u: goto label_27bc70;
        case 0x27bc74u: goto label_27bc74;
        case 0x27bc78u: goto label_27bc78;
        case 0x27bc7cu: goto label_27bc7c;
        case 0x27bc80u: goto label_27bc80;
        case 0x27bc84u: goto label_27bc84;
        case 0x27bc88u: goto label_27bc88;
        case 0x27bc8cu: goto label_27bc8c;
        case 0x27bc90u: goto label_27bc90;
        case 0x27bc94u: goto label_27bc94;
        case 0x27bc98u: goto label_27bc98;
        case 0x27bc9cu: goto label_27bc9c;
        case 0x27bca0u: goto label_27bca0;
        case 0x27bca4u: goto label_27bca4;
        case 0x27bca8u: goto label_27bca8;
        case 0x27bcacu: goto label_27bcac;
        case 0x27bcb0u: goto label_27bcb0;
        case 0x27bcb4u: goto label_27bcb4;
        case 0x27bcb8u: goto label_27bcb8;
        case 0x27bcbcu: goto label_27bcbc;
        case 0x27bcc0u: goto label_27bcc0;
        case 0x27bcc4u: goto label_27bcc4;
        case 0x27bcc8u: goto label_27bcc8;
        case 0x27bcccu: goto label_27bccc;
        case 0x27bcd0u: goto label_27bcd0;
        case 0x27bcd4u: goto label_27bcd4;
        case 0x27bcd8u: goto label_27bcd8;
        case 0x27bcdcu: goto label_27bcdc;
        case 0x27bce0u: goto label_27bce0;
        case 0x27bce4u: goto label_27bce4;
        case 0x27bce8u: goto label_27bce8;
        case 0x27bcecu: goto label_27bcec;
        case 0x27bcf0u: goto label_27bcf0;
        case 0x27bcf4u: goto label_27bcf4;
        case 0x27bcf8u: goto label_27bcf8;
        case 0x27bcfcu: goto label_27bcfc;
        case 0x27bd00u: goto label_27bd00;
        case 0x27bd04u: goto label_27bd04;
        case 0x27bd08u: goto label_27bd08;
        case 0x27bd0cu: goto label_27bd0c;
        case 0x27bd10u: goto label_27bd10;
        case 0x27bd14u: goto label_27bd14;
        case 0x27bd18u: goto label_27bd18;
        case 0x27bd1cu: goto label_27bd1c;
        case 0x27bd20u: goto label_27bd20;
        case 0x27bd24u: goto label_27bd24;
        case 0x27bd28u: goto label_27bd28;
        case 0x27bd2cu: goto label_27bd2c;
        case 0x27bd30u: goto label_27bd30;
        case 0x27bd34u: goto label_27bd34;
        case 0x27bd38u: goto label_27bd38;
        case 0x27bd3cu: goto label_27bd3c;
        case 0x27bd40u: goto label_27bd40;
        case 0x27bd44u: goto label_27bd44;
        case 0x27bd48u: goto label_27bd48;
        case 0x27bd4cu: goto label_27bd4c;
        case 0x27bd50u: goto label_27bd50;
        case 0x27bd54u: goto label_27bd54;
        case 0x27bd58u: goto label_27bd58;
        case 0x27bd5cu: goto label_27bd5c;
        case 0x27bd60u: goto label_27bd60;
        case 0x27bd64u: goto label_27bd64;
        case 0x27bd68u: goto label_27bd68;
        case 0x27bd6cu: goto label_27bd6c;
        case 0x27bd70u: goto label_27bd70;
        case 0x27bd74u: goto label_27bd74;
        case 0x27bd78u: goto label_27bd78;
        case 0x27bd7cu: goto label_27bd7c;
        case 0x27bd80u: goto label_27bd80;
        case 0x27bd84u: goto label_27bd84;
        case 0x27bd88u: goto label_27bd88;
        case 0x27bd8cu: goto label_27bd8c;
        case 0x27bd90u: goto label_27bd90;
        case 0x27bd94u: goto label_27bd94;
        case 0x27bd98u: goto label_27bd98;
        case 0x27bd9cu: goto label_27bd9c;
        case 0x27bda0u: goto label_27bda0;
        case 0x27bda4u: goto label_27bda4;
        case 0x27bda8u: goto label_27bda8;
        case 0x27bdacu: goto label_27bdac;
        case 0x27bdb0u: goto label_27bdb0;
        case 0x27bdb4u: goto label_27bdb4;
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdbcu: goto label_27bdbc;
        case 0x27bdc0u: goto label_27bdc0;
        case 0x27bdc4u: goto label_27bdc4;
        case 0x27bdc8u: goto label_27bdc8;
        case 0x27bdccu: goto label_27bdcc;
        case 0x27bdd0u: goto label_27bdd0;
        case 0x27bdd4u: goto label_27bdd4;
        case 0x27bdd8u: goto label_27bdd8;
        case 0x27bddcu: goto label_27bddc;
        case 0x27bde0u: goto label_27bde0;
        case 0x27bde4u: goto label_27bde4;
        case 0x27bde8u: goto label_27bde8;
        case 0x27bdecu: goto label_27bdec;
        case 0x27bdf0u: goto label_27bdf0;
        case 0x27bdf4u: goto label_27bdf4;
        case 0x27bdf8u: goto label_27bdf8;
        case 0x27bdfcu: goto label_27bdfc;
        case 0x27be00u: goto label_27be00;
        case 0x27be04u: goto label_27be04;
        case 0x27be08u: goto label_27be08;
        case 0x27be0cu: goto label_27be0c;
        case 0x27be10u: goto label_27be10;
        case 0x27be14u: goto label_27be14;
        case 0x27be18u: goto label_27be18;
        case 0x27be1cu: goto label_27be1c;
        case 0x27be20u: goto label_27be20;
        case 0x27be24u: goto label_27be24;
        case 0x27be28u: goto label_27be28;
        case 0x27be2cu: goto label_27be2c;
        case 0x27be30u: goto label_27be30;
        case 0x27be34u: goto label_27be34;
        case 0x27be38u: goto label_27be38;
        case 0x27be3cu: goto label_27be3c;
        case 0x27be40u: goto label_27be40;
        case 0x27be44u: goto label_27be44;
        case 0x27be48u: goto label_27be48;
        case 0x27be4cu: goto label_27be4c;
        case 0x27be50u: goto label_27be50;
        case 0x27be54u: goto label_27be54;
        case 0x27be58u: goto label_27be58;
        case 0x27be5cu: goto label_27be5c;
        case 0x27be60u: goto label_27be60;
        case 0x27be64u: goto label_27be64;
        case 0x27be68u: goto label_27be68;
        case 0x27be6cu: goto label_27be6c;
        case 0x27be70u: goto label_27be70;
        case 0x27be74u: goto label_27be74;
        case 0x27be78u: goto label_27be78;
        case 0x27be7cu: goto label_27be7c;
        case 0x27be80u: goto label_27be80;
        case 0x27be84u: goto label_27be84;
        case 0x27be88u: goto label_27be88;
        case 0x27be8cu: goto label_27be8c;
        case 0x27be90u: goto label_27be90;
        case 0x27be94u: goto label_27be94;
        case 0x27be98u: goto label_27be98;
        case 0x27be9cu: goto label_27be9c;
        case 0x27bea0u: goto label_27bea0;
        case 0x27bea4u: goto label_27bea4;
        case 0x27bea8u: goto label_27bea8;
        case 0x27beacu: goto label_27beac;
        case 0x27beb0u: goto label_27beb0;
        case 0x27beb4u: goto label_27beb4;
        case 0x27beb8u: goto label_27beb8;
        case 0x27bebcu: goto label_27bebc;
        case 0x27bec0u: goto label_27bec0;
        case 0x27bec4u: goto label_27bec4;
        case 0x27bec8u: goto label_27bec8;
        case 0x27beccu: goto label_27becc;
        case 0x27bed0u: goto label_27bed0;
        case 0x27bed4u: goto label_27bed4;
        case 0x27bed8u: goto label_27bed8;
        case 0x27bedcu: goto label_27bedc;
        case 0x27bee0u: goto label_27bee0;
        case 0x27bee4u: goto label_27bee4;
        case 0x27bee8u: goto label_27bee8;
        case 0x27beecu: goto label_27beec;
        case 0x27bef0u: goto label_27bef0;
        case 0x27bef4u: goto label_27bef4;
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        default: break;
    }

    ctx->pc = 0x27bbe0u;

label_27bbe0:
    // 0x27bbe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27bbe4:
    // 0x27bbe4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_27bbe8:
    // 0x27bbe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27bbec:
    // 0x27bbec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27bbf0:
    // 0x27bbf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bbf4:
    // 0x27bbf4: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 6980)));
label_27bbf8:
    // 0x27bbf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bbfc:
    // 0x27bbfc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x27bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27bc00:
    // 0x27bc00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc04:
    // 0x27bc04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27bc08:
    // 0x27bc08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_27bc0c:
    // 0x27bc0c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x27bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
label_27bc10:
    // 0x27bc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc14:
    // 0x27bc14: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x27bc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_27bc18:
    // 0x27bc18: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bc1c:
    // 0x27bc1c: 0xa0201b48  sb          $zero, 0x1B48($at)
    ctx->pc = 0x27bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6984), (uint8_t)GPR_U32(ctx, 0));
label_27bc20:
    // 0x27bc20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bc24:
    // 0x27bc24: 0xa0201b49  sb          $zero, 0x1B49($at)
    ctx->pc = 0x27bc24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6985), (uint8_t)GPR_U32(ctx, 0));
label_27bc28:
    // 0x27bc28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27bc2c:
    // 0x27bc2c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_27bc30:
    // 0x27bc30: 0x2445c130  addiu       $a1, $v0, -0x3ED0
    ctx->pc = 0x27bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951216));
label_27bc34:
    // 0x27bc34: 0xc0848cc  jal         func_212330
label_27bc38:
    if (ctx->pc == 0x27BC38u) {
        ctx->pc = 0x27BC3Cu;
        goto label_27bc3c;
    }
    ctx->pc = 0x27BC34u;
    SET_GPR_U32(ctx, 31, 0x27BC3Cu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27BC34u, 0x27BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BC3Cu;
label_27bc3c:
    // 0x27bc3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bc40:
    // 0x27bc40: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27bc44:
    // 0x27bc44: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27bc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bc48:
    // 0x27bc48: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x27bc48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27bc4c:
    // 0x27bc4c: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
label_27bc50:
    if (ctx->pc == 0x27BC50u) {
        ctx->pc = 0x27BC54u;
        goto label_27bc54;
    }
    ctx->pc = 0x27BC4Cu;
    {
        const bool branch_taken_0x27bc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bc4c) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BC54u;
label_27bc54:
    // 0x27bc54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27bc58:
    // 0x27bc58: 0x244315a0  addiu       $v1, $v0, 0x15A0
    ctx->pc = 0x27bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
label_27bc5c:
    // 0x27bc5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27bc60:
    // 0x27bc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bc64:
    // 0x27bc64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bc68:
    // 0x27bc68: 0x400008  jr          $v0
label_27bc6c:
    if (ctx->pc == 0x27BC6Cu) {
        ctx->pc = 0x27BC70u;
        goto label_27bc70;
    }
    ctx->pc = 0x27BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BC68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27BC70u;
label_27bc70:
    // 0x27bc70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bc70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bc74:
    // 0x27bc74: 0x0  nop
    ctx->pc = 0x27bc74u;
    // NOP
label_27bc78:
    // 0x27bc78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x27bc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_27bc7c:
    // 0x27bc7c: 0x3c024694  lui         $v0, 0x4694
    ctx->pc = 0x27bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18068 << 16));
label_27bc80:
    // 0x27bc80: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x27bc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
label_27bc84:
    // 0x27bc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bc88:
    // 0x27bc88: 0x0  nop
    ctx->pc = 0x27bc88u;
    // NOP
label_27bc8c:
    // 0x27bc8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27bc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27bc90:
    // 0x27bc90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bc94:
    // 0x27bc94: 0x0  nop
    ctx->pc = 0x27bc94u;
    // NOP
label_27bc98:
    // 0x27bc98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27bc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27bc9c:
    // 0x27bc9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27bca0:
    // 0x27bca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bca4:
    // 0x27bca4: 0x0  nop
    ctx->pc = 0x27bca4u;
    // NOP
label_27bca8:
    // 0x27bca8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27bca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_27bcac:
    // 0x27bcac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bcb0:
    // 0x27bcb0: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bcb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 6980)));
label_27bcb4:
    // 0x27bcb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bcb8:
    // 0x27bcb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x27bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_27bcbc:
    // 0x27bcbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_27bcc0:
    // 0x27bcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27bcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27bcc4:
    // 0x27bcc4: 0xc05db74  jal         func_176DD0
label_27bcc8:
    if (ctx->pc == 0x27BCC8u) {
        ctx->pc = 0x27BCCCu;
        goto label_27bccc;
    }
    ctx->pc = 0x27BCC4u;
    SET_GPR_U32(ctx, 31, 0x27BCCCu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x27BCC4u, 0x27BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BCCCu;
label_27bccc:
    // 0x27bccc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_27bcd0:
    // 0x27bcd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bcd4:
    // 0x27bcd4: 0x0  nop
    ctx->pc = 0x27bcd4u;
    // NOP
label_27bcd8:
    // 0x27bcd8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x27bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_27bcdc:
    // 0x27bcdc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x27bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_27bce0:
    // 0x27bce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bce4:
    // 0x27bce4: 0x0  nop
    ctx->pc = 0x27bce4u;
    // NOP
label_27bce8:
    // 0x27bce8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x27bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_27bcec:
    // 0x27bcec: 0x3c024344  lui         $v0, 0x4344
    ctx->pc = 0x27bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
label_27bcf0:
    // 0x27bcf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bcf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bcf4:
    // 0x27bcf4: 0x0  nop
    ctx->pc = 0x27bcf4u;
    // NOP
label_27bcf8:
    // 0x27bcf8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x27bcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_27bcfc:
    // 0x27bcfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_27bd00:
    // 0x27bd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bd04:
    // 0x27bd04: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x27bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd08:
    // 0x27bd08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27bd0c:
    // 0x27bd0c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x27bd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_27bd10:
    // 0x27bd10: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_27bd14:
    // 0x27bd14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bd18:
    // 0x27bd18: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd1c:
    // 0x27bd1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27bd20:
    // 0x27bd20: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x27bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_27bd24:
    // 0x27bd24: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_27bd28:
    // 0x27bd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bd2c:
    // 0x27bd2c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x27bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bd30:
    // 0x27bd30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27bd30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27bd34:
    // 0x27bd34: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x27bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_27bd38:
    // 0x27bd38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27bd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bd3c:
    // 0x27bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd40:
    // 0x27bd40: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27bd44:
    // 0x27bd44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd48:
    // 0x27bd48: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27bd4c:
    // 0x27bd4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bd50:
    // 0x27bd50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd54:
    // 0x27bd54: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27bd54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6984), (uint8_t)GPR_U32(ctx, 2));
label_27bd58:
    // 0x27bd58: 0x10000051  b           . + 4 + (0x51 << 2)
label_27bd5c:
    if (ctx->pc == 0x27BD5Cu) {
        ctx->pc = 0x27BD60u;
        goto label_27bd60;
    }
    ctx->pc = 0x27BD58u;
    {
        const bool branch_taken_0x27bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bd58) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BD60u;
label_27bd60:
    // 0x27bd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd64:
    // 0x27bd64: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bd68:
    // 0x27bd68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27bd6c:
    // 0x27bd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bd70:
    // 0x27bd70: 0x0  nop
    ctx->pc = 0x27bd70u;
    // NOP
label_27bd74:
    // 0x27bd74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27bd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bd78:
    // 0x27bd78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd7c:
    // 0x27bd7c: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27bd80:
    // 0x27bd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bd84:
    // 0x27bd84: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bd88:
    // 0x27bd88: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_27bd8c:
    // 0x27bd8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bd90:
    // 0x27bd90: 0x0  nop
    ctx->pc = 0x27bd90u;
    // NOP
label_27bd94:
    // 0x27bd94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27bd94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27bd98:
    // 0x27bd98: 0x0  nop
    ctx->pc = 0x27bd98u;
    // NOP
label_27bd9c:
    // 0x27bd9c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
label_27bda0:
    if (ctx->pc == 0x27BDA0u) {
        ctx->pc = 0x27BDA4u;
        goto label_27bda4;
    }
    ctx->pc = 0x27BD9Cu;
    {
        const bool branch_taken_0x27bd9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27bd9c) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BDA4u;
label_27bda4:
    // 0x27bda4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_27bda8:
    // 0x27bda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bdac:
    // 0x27bdac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdb0:
    // 0x27bdb0: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27bdb4:
    // 0x27bdb4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdb8:
    // 0x27bdb8: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27bdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27bdbc:
    // 0x27bdbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27bdc0:
    // 0x27bdc0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdc4:
    // 0x27bdc4: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27bdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6984), (uint8_t)GPR_U32(ctx, 2));
label_27bdc8:
    // 0x27bdc8: 0x10000035  b           . + 4 + (0x35 << 2)
label_27bdcc:
    if (ctx->pc == 0x27BDCCu) {
        ctx->pc = 0x27BDD0u;
        goto label_27bdd0;
    }
    ctx->pc = 0x27BDC8u;
    {
        const bool branch_taken_0x27bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bdc8) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BDD0u;
label_27bdd0:
    // 0x27bdd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdd4:
    // 0x27bdd4: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bdd8:
    // 0x27bdd8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_27bddc:
    // 0x27bddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bde0:
    // 0x27bde0: 0x0  nop
    ctx->pc = 0x27bde0u;
    // NOP
label_27bde4:
    // 0x27bde4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27bde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27bde8:
    // 0x27bde8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdec:
    // 0x27bdec: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27bdf0:
    // 0x27bdf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bdf4:
    // 0x27bdf4: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27bdf8:
    // 0x27bdf8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x27bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_27bdfc:
    // 0x27bdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27be00:
    // 0x27be00: 0x0  nop
    ctx->pc = 0x27be00u;
    // NOP
label_27be04:
    // 0x27be04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27be04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27be08:
    // 0x27be08: 0x0  nop
    ctx->pc = 0x27be08u;
    // NOP
label_27be0c:
    // 0x27be0c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_27be10:
    if (ctx->pc == 0x27BE10u) {
        ctx->pc = 0x27BE14u;
        goto label_27be14;
    }
    ctx->pc = 0x27BE0Cu;
    {
        const bool branch_taken_0x27be0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be0c) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BE14u;
label_27be14:
    // 0x27be14: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_27be18:
    // 0x27be18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27be1c:
    // 0x27be1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be20:
    // 0x27be20: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27be24:
    // 0x27be24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be28:
    // 0x27be28: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27be28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27be2c:
    // 0x27be2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27be30:
    // 0x27be30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be34:
    // 0x27be34: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27be34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6984), (uint8_t)GPR_U32(ctx, 2));
label_27be38:
    // 0x27be38: 0x10000019  b           . + 4 + (0x19 << 2)
label_27be3c:
    if (ctx->pc == 0x27BE3Cu) {
        ctx->pc = 0x27BE40u;
        goto label_27be40;
    }
    ctx->pc = 0x27BE38u;
    {
        const bool branch_taken_0x27be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27be38) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BE40u;
label_27be40:
    // 0x27be40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be44:
    // 0x27be44: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27be48:
    // 0x27be48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27be48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27be4c:
    // 0x27be4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27be4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27be50:
    // 0x27be50: 0x0  nop
    ctx->pc = 0x27be50u;
    // NOP
label_27be54:
    // 0x27be54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27be54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27be58:
    // 0x27be58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be5c:
    // 0x27be5c: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27be60:
    // 0x27be60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be64:
    // 0x27be64: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27be68:
    // 0x27be68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27be68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27be6c:
    // 0x27be6c: 0x0  nop
    ctx->pc = 0x27be6cu;
    // NOP
label_27be70:
    // 0x27be70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27be70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27be74:
    // 0x27be74: 0x0  nop
    ctx->pc = 0x27be74u;
    // NOP
label_27be78:
    // 0x27be78: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_27be7c:
    if (ctx->pc == 0x27BE7Cu) {
        ctx->pc = 0x27BE80u;
        goto label_27be80;
    }
    ctx->pc = 0x27BE78u;
    {
        const bool branch_taken_0x27be78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be78) {
            ctx->pc = 0x27BEA0u;
            goto label_27bea0;
        }
    }
    ctx->pc = 0x27BE80u;
label_27be80:
    // 0x27be80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27be80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27be84:
    // 0x27be84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be88:
    // 0x27be88: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 6976), bits); }
label_27be8c:
    // 0x27be8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be90:
    // 0x27be90: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27be90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6984)));
label_27be94:
    // 0x27be94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27be98:
    // 0x27be98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27be9c:
    // 0x27be9c: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27be9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6984), (uint8_t)GPR_U32(ctx, 2));
label_27bea0:
    // 0x27bea0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bea4:
    // 0x27bea4: 0x8c31f9ec  lw          $s1, -0x614($at)
    ctx->pc = 0x27bea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965740)));
label_27bea8:
    // 0x27bea8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27beac:
    // 0x27beac: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27beacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6986)));
label_27beb0:
    // 0x27beb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27beb4:
    // 0x27beb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27beb8:
    // 0x27beb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_27bebc:
    // 0x27bebc: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x27bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
label_27bec0:
    // 0x27bec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bec4:
    // 0x27bec4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_27bec8:
    // 0x27bec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27becc:
    // 0x27becc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27beccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bed0:
    // 0x27bed0: 0xc4201b40  lwc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bed4:
    // 0x27bed4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x27bed4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_27bed8:
    // 0x27bed8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bedc:
    // 0x27bedc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27bee0:
    // 0x27bee0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bee4:
    // 0x27bee4: 0xc4201b40  lwc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bee8:
    // 0x27bee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27beec:
    // 0x27beec: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x27beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_27bef0:
    // 0x27bef0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_27bef4:
    // 0x27bef4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_27bef8:
    // 0x27bef8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27befc:
    // 0x27befc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27befcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27bf00:
    // 0x27bf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bf04:
    // 0x27bf04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bf08:
    // 0x27bf08: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_27bf0c:
    // 0x27bf0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_27bf10:
    // 0x27bf10: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29960)));
label_27bf14:
    // 0x27bf14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bf18:
    // 0x27bf18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27bf1c:
    // 0x27bf1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bf20:
    // 0x27bf20: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_27bf24:
    // 0x27bf24: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_27bf28:
    // 0x27bf28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27bf2c:
    // 0x27bf2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
label_27bf30:
    // 0x27bf30: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 2));
label_27bf34:
    // 0x27bf34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bf38:
    // 0x27bf38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x27bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27bf3c:
    // 0x27bf3c: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_27bf40:
    // 0x27bf40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27bf44:
    // 0x27bf44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bf48:
    // 0x27bf48: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6986)));
label_27bf4c:
    // 0x27bf4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bf50:
    // 0x27bf50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bf54:
    // 0x27bf54: 0xa0221b4a  sb          $v0, 0x1B4A($at)
    ctx->pc = 0x27bf54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6986), (uint8_t)GPR_U32(ctx, 2));
label_27bf58:
    // 0x27bf58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bf5c:
    // 0x27bf5c: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bf5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 6980)));
label_27bf60:
    // 0x27bf60: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bf60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bf64:
    // 0x27bf64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_27bf68:
    // 0x27bf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bf6c:
    // 0x27bf6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x27bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bf70:
    // 0x27bf70: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27bf70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27bf74:
    // 0x27bf74: 0xc05db4c  jal         func_176D30
label_27bf78:
    if (ctx->pc == 0x27BF78u) {
        ctx->pc = 0x27BF7Cu;
        goto label_27bf7c;
    }
    ctx->pc = 0x27BF74u;
    SET_GPR_U32(ctx, 31, 0x27BF7Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x27BF74u, 0x27BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF7Cu;
label_27bf7c:
    // 0x27bf7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27bf80:
    // 0x27bf80: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 6980)));
label_27bf84:
    // 0x27bf84: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27bf88:
    // 0x27bf88: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x27bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_27bf8c:
    // 0x27bf8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27bf90:
    // 0x27bf90: 0xc05db20  jal         func_176C80
label_27bf94:
    if (ctx->pc == 0x27BF94u) {
        ctx->pc = 0x27BF98u;
        goto label_27bf98;
    }
    ctx->pc = 0x27BF90u;
    SET_GPR_U32(ctx, 31, 0x27BF98u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x27BF90u, 0x27BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF98u;
label_27bf98:
    // 0x27bf98: 0xc06766c  jal         func_19D9B0
label_27bf9c:
    if (ctx->pc == 0x27BF9Cu) {
        ctx->pc = 0x27BFA0u;
        goto label_27bfa0;
    }
    ctx->pc = 0x27BF98u;
    SET_GPR_U32(ctx, 31, 0x27BFA0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27BF98u, 0x27BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFA0u;
label_27bfa0:
    // 0x27bfa0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_27bfa4:
    // 0x27bfa4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27bfa8:
    // 0x27bfa8: 0xc0675a4  jal         func_19D690
label_27bfac:
    if (ctx->pc == 0x27BFACu) {
        ctx->pc = 0x27BFB0u;
        goto label_27bfb0;
    }
    ctx->pc = 0x27BFA8u;
    SET_GPR_U32(ctx, 31, 0x27BFB0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27BFA8u, 0x27BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFB0u;
label_27bfb0:
    // 0x27bfb0: 0x3c024692  lui         $v0, 0x4692
    ctx->pc = 0x27bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18066 << 16));
label_27bfb4:
    // 0x27bfb4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_27bfb8:
    // 0x27bfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bfbc:
    // 0x27bfbc: 0x0  nop
    ctx->pc = 0x27bfbcu;
    // NOP
label_27bfc0:
    // 0x27bfc0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_27bfc4:
    // 0x27bfc4: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x27bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
label_27bfc8:
    // 0x27bfc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27bfcc:
    // 0x27bfcc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bfd0:
    // 0x27bfd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27bfd4:
    // 0x27bfd4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27bfd8:
    // 0x27bfd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bfd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27bfdc:
    // 0x27bfdc: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x27bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
label_27bfe0:
    // 0x27bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27bfe4:
    // 0x27bfe4: 0x0  nop
    ctx->pc = 0x27bfe4u;
    // NOP
label_27bfe8:
    // 0x27bfe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27bfe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_27bfec:
    // 0x27bfec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_27bff0:
    // 0x27bff0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27bff4:
    // 0x27bff4: 0xc040cbc  jal         func_1032F0
label_27bff8:
    if (ctx->pc == 0x27BFF8u) {
        ctx->pc = 0x27BFFCu;
        goto label_27bffc;
    }
    ctx->pc = 0x27BFF4u;
    SET_GPR_U32(ctx, 31, 0x27BFFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27BFFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27BFFCu) { return; }
    ctx->pc = 0x27BFFCu;
label_27bffc:
    // 0x27bffc: 0xc06765c  jal         func_19D970
label_27c000:
    if (ctx->pc == 0x27C000u) {
        ctx->pc = 0x27C004u;
        goto label_27c004;
    }
    ctx->pc = 0x27BFFCu;
    SET_GPR_U32(ctx, 31, 0x27C004u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27BFFCu, 0x27C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C004u;
label_27c004:
    // 0x27c004: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_27c008:
    // 0x27c008: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_27c00c:
    // 0x27c00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c010:
    // 0x27c010: 0x0  nop
    ctx->pc = 0x27c010u;
    // NOP
label_27c014:
    // 0x27c014: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27c014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c018:
    // 0x27c018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27c01c:
    // 0x27c01c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27c020:
    // 0x27c020: 0xc040d38  jal         func_1034E0
label_27c024:
    if (ctx->pc == 0x27C024u) {
        ctx->pc = 0x27C028u;
        goto label_27c028;
    }
    ctx->pc = 0x27C020u;
    SET_GPR_U32(ctx, 31, 0x27C028u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27C028u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27C028u) { return; }
    ctx->pc = 0x27C028u;
label_27c028:
    // 0x27c028: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27c02c:
    // 0x27c02c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27c030:
    // 0x27c030: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27c034:
    // 0x27c034: 0xc040bf4  jal         func_102FD0
label_27c038:
    if (ctx->pc == 0x27C038u) {
        ctx->pc = 0x27C03Cu;
        goto label_27c03c;
    }
    ctx->pc = 0x27C034u;
    SET_GPR_U32(ctx, 31, 0x27C03Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27C03Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27C03Cu) { return; }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x27c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_27c040:
    // 0x27c040: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27c040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27c044:
    // 0x27c044: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27c048:
    // 0x27c048: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27c048u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_27c04c:
    // 0x27c04c: 0x3c0246e1  lui         $v0, 0x46E1
    ctx->pc = 0x27c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18145 << 16));
label_27c050:
    // 0x27c050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c054:
    // 0x27c054: 0x0  nop
    ctx->pc = 0x27c054u;
    // NOP
label_27c058:
    // 0x27c058: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27c058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27c05c:
    // 0x27c05c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c060:
    // 0x27c060: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6989)));
label_27c064:
    // 0x27c064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_27c068:
    if (ctx->pc == 0x27C068u) {
        ctx->pc = 0x27C06Cu;
        goto label_27c06c;
    }
    ctx->pc = 0x27C064u;
    {
        const bool branch_taken_0x27c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c064) {
            ctx->pc = 0x27C0E0u;
            goto label_27c0e0;
        }
    }
    ctx->pc = 0x27C06Cu;
label_27c06c:
    // 0x27c06c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c070:
    // 0x27c070: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6989)));
label_27c074:
    // 0x27c074: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_27c078:
    if (ctx->pc == 0x27C078u) {
        ctx->pc = 0x27C07Cu;
        goto label_27c07c;
    }
    ctx->pc = 0x27C074u;
    {
        const bool branch_taken_0x27c074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27c074) {
            ctx->pc = 0x27C090u;
            goto label_27c090;
        }
    }
    ctx->pc = 0x27C07Cu;
label_27c07c:
    // 0x27c07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c080:
    // 0x27c080: 0x0  nop
    ctx->pc = 0x27c080u;
    // NOP
label_27c084:
    // 0x27c084: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c088:
    // 0x27c088: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c08c:
    if (ctx->pc == 0x27C08Cu) {
        ctx->pc = 0x27C090u;
        goto label_27c090;
    }
    ctx->pc = 0x27C088u;
    {
        const bool branch_taken_0x27c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c088) {
            ctx->pc = 0x27C0ACu;
            goto label_27c0ac;
        }
    }
    ctx->pc = 0x27C090u;
label_27c090:
    // 0x27c090: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x27c090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_27c094:
    // 0x27c094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27c098:
    // 0x27c098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c09c:
    // 0x27c09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c0a0:
    // 0x27c0a0: 0x0  nop
    ctx->pc = 0x27c0a0u;
    // NOP
label_27c0a4:
    // 0x27c0a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_27c0a8:
    // 0x27c0a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27c0a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27c0ac:
    // 0x27c0ac: 0x3c0246c3  lui         $v0, 0x46C3
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18115 << 16));
label_27c0b0:
    // 0x27c0b0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x27c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_27c0b4:
    // 0x27c0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c0b8:
    // 0x27c0b8: 0x0  nop
    ctx->pc = 0x27c0b8u;
    // NOP
label_27c0bc:
    // 0x27c0bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c0bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27c0c0:
    // 0x27c0c0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x27c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_27c0c4:
    // 0x27c0c4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27c0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_27c0c8:
    // 0x27c0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c0cc:
    // 0x27c0cc: 0x0  nop
    ctx->pc = 0x27c0ccu;
    // NOP
label_27c0d0:
    // 0x27c0d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27c0d4:
    // 0x27c0d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_27c0d8:
    // 0x27c0d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_27c0dc:
    if (ctx->pc == 0x27C0DCu) {
        ctx->pc = 0x27C0E0u;
        goto label_27c0e0;
    }
    ctx->pc = 0x27C0D8u;
    {
        const bool branch_taken_0x27c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c0d8) {
            ctx->pc = 0x27C0F8u;
            goto label_27c0f8;
        }
    }
    ctx->pc = 0x27C0E0u;
label_27c0e0:
    // 0x27c0e0: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x27c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_27c0e4:
    // 0x27c0e4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_27c0e8:
    // 0x27c0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c0ec:
    // 0x27c0ec: 0x0  nop
    ctx->pc = 0x27c0ecu;
    // NOP
label_27c0f0:
    // 0x27c0f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_27c0f4:
    // 0x27c0f4: 0x0  nop
    ctx->pc = 0x27c0f4u;
    // NOP
label_27c0f8:
    // 0x27c0f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c0fc:
    // 0x27c0fc: 0xc084964  jal         func_212590
label_27c100:
    if (ctx->pc == 0x27C100u) {
        ctx->pc = 0x27C104u;
        goto label_27c104;
    }
    ctx->pc = 0x27C0FCu;
    SET_GPR_U32(ctx, 31, 0x27C104u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C0FCu, 0x27C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C104u;
label_27c104:
    // 0x27c104: 0x1000fecd  b           . + 4 + (-0x133 << 2)
label_27c108:
    if (ctx->pc == 0x27C108u) {
        ctx->pc = 0x27C10Cu;
        goto label_27c10c;
    }
    ctx->pc = 0x27C104u;
    {
        const bool branch_taken_0x27c104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c104) {
            ctx->pc = 0x27BC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27bc3c;
        }
    }
    ctx->pc = 0x27C10Cu;
label_27c10c:
    // 0x27c10c: 0xc084934  jal         func_2124D0
label_27c110:
    if (ctx->pc == 0x27C110u) {
        ctx->pc = 0x27C114u;
        goto label_27c114;
    }
    ctx->pc = 0x27C10Cu;
    SET_GPR_U32(ctx, 31, 0x27C114u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C10Cu, 0x27C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C114u;
label_27c114:
    // 0x27c114: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27c114u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27c118:
    // 0x27c118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c11c:
    // 0x27c11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27c120:
    // 0x27c120: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x27c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_27c124:
    // 0x27c124: 0x3e00008  jr          $ra
label_27c128:
    if (ctx->pc == 0x27C128u) {
        ctx->pc = 0x27C12Cu;
        goto label_fallthrough_0x27c124;
    }
    ctx->pc = 0x27C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27c124:
    ctx->pc = 0x27C12Cu;
}
