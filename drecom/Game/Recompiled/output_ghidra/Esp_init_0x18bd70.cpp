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

// Function: Esp_init
// Address: 0x18bd70 - 0x18c294
void Esp_init_0x18bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Esp_init_0x18bd70");
#endif

    switch (ctx->pc) {
        case 0x18bd70u: goto label_18bd70;
        case 0x18bd74u: goto label_18bd74;
        case 0x18bd78u: goto label_18bd78;
        case 0x18bd7cu: goto label_18bd7c;
        case 0x18bd80u: goto label_18bd80;
        case 0x18bd84u: goto label_18bd84;
        case 0x18bd88u: goto label_18bd88;
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bd90u: goto label_18bd90;
        case 0x18bd94u: goto label_18bd94;
        case 0x18bd98u: goto label_18bd98;
        case 0x18bd9cu: goto label_18bd9c;
        case 0x18bda0u: goto label_18bda0;
        case 0x18bda4u: goto label_18bda4;
        case 0x18bda8u: goto label_18bda8;
        case 0x18bdacu: goto label_18bdac;
        case 0x18bdb0u: goto label_18bdb0;
        case 0x18bdb4u: goto label_18bdb4;
        case 0x18bdb8u: goto label_18bdb8;
        case 0x18bdbcu: goto label_18bdbc;
        case 0x18bdc0u: goto label_18bdc0;
        case 0x18bdc4u: goto label_18bdc4;
        case 0x18bdc8u: goto label_18bdc8;
        case 0x18bdccu: goto label_18bdcc;
        case 0x18bdd0u: goto label_18bdd0;
        case 0x18bdd4u: goto label_18bdd4;
        case 0x18bdd8u: goto label_18bdd8;
        case 0x18bddcu: goto label_18bddc;
        case 0x18bde0u: goto label_18bde0;
        case 0x18bde4u: goto label_18bde4;
        case 0x18bde8u: goto label_18bde8;
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        case 0x18be10u: goto label_18be10;
        case 0x18be14u: goto label_18be14;
        case 0x18be18u: goto label_18be18;
        case 0x18be1cu: goto label_18be1c;
        case 0x18be20u: goto label_18be20;
        case 0x18be24u: goto label_18be24;
        case 0x18be28u: goto label_18be28;
        case 0x18be2cu: goto label_18be2c;
        case 0x18be30u: goto label_18be30;
        case 0x18be34u: goto label_18be34;
        case 0x18be38u: goto label_18be38;
        case 0x18be3cu: goto label_18be3c;
        case 0x18be40u: goto label_18be40;
        case 0x18be44u: goto label_18be44;
        case 0x18be48u: goto label_18be48;
        case 0x18be4cu: goto label_18be4c;
        case 0x18be50u: goto label_18be50;
        case 0x18be54u: goto label_18be54;
        case 0x18be58u: goto label_18be58;
        case 0x18be5cu: goto label_18be5c;
        case 0x18be60u: goto label_18be60;
        case 0x18be64u: goto label_18be64;
        case 0x18be68u: goto label_18be68;
        case 0x18be6cu: goto label_18be6c;
        case 0x18be70u: goto label_18be70;
        case 0x18be74u: goto label_18be74;
        case 0x18be78u: goto label_18be78;
        case 0x18be7cu: goto label_18be7c;
        case 0x18be80u: goto label_18be80;
        case 0x18be84u: goto label_18be84;
        case 0x18be88u: goto label_18be88;
        case 0x18be8cu: goto label_18be8c;
        case 0x18be90u: goto label_18be90;
        case 0x18be94u: goto label_18be94;
        case 0x18be98u: goto label_18be98;
        case 0x18be9cu: goto label_18be9c;
        case 0x18bea0u: goto label_18bea0;
        case 0x18bea4u: goto label_18bea4;
        case 0x18bea8u: goto label_18bea8;
        case 0x18beacu: goto label_18beac;
        case 0x18beb0u: goto label_18beb0;
        case 0x18beb4u: goto label_18beb4;
        case 0x18beb8u: goto label_18beb8;
        case 0x18bebcu: goto label_18bebc;
        case 0x18bec0u: goto label_18bec0;
        case 0x18bec4u: goto label_18bec4;
        case 0x18bec8u: goto label_18bec8;
        case 0x18beccu: goto label_18becc;
        case 0x18bed0u: goto label_18bed0;
        case 0x18bed4u: goto label_18bed4;
        case 0x18bed8u: goto label_18bed8;
        case 0x18bedcu: goto label_18bedc;
        case 0x18bee0u: goto label_18bee0;
        case 0x18bee4u: goto label_18bee4;
        case 0x18bee8u: goto label_18bee8;
        case 0x18beecu: goto label_18beec;
        case 0x18bef0u: goto label_18bef0;
        case 0x18bef4u: goto label_18bef4;
        case 0x18bef8u: goto label_18bef8;
        case 0x18befcu: goto label_18befc;
        case 0x18bf00u: goto label_18bf00;
        case 0x18bf04u: goto label_18bf04;
        case 0x18bf08u: goto label_18bf08;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf10u: goto label_18bf10;
        case 0x18bf14u: goto label_18bf14;
        case 0x18bf18u: goto label_18bf18;
        case 0x18bf1cu: goto label_18bf1c;
        case 0x18bf20u: goto label_18bf20;
        case 0x18bf24u: goto label_18bf24;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf2cu: goto label_18bf2c;
        case 0x18bf30u: goto label_18bf30;
        case 0x18bf34u: goto label_18bf34;
        case 0x18bf38u: goto label_18bf38;
        case 0x18bf3cu: goto label_18bf3c;
        case 0x18bf40u: goto label_18bf40;
        case 0x18bf44u: goto label_18bf44;
        case 0x18bf48u: goto label_18bf48;
        case 0x18bf4cu: goto label_18bf4c;
        case 0x18bf50u: goto label_18bf50;
        case 0x18bf54u: goto label_18bf54;
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf5cu: goto label_18bf5c;
        case 0x18bf60u: goto label_18bf60;
        case 0x18bf64u: goto label_18bf64;
        case 0x18bf68u: goto label_18bf68;
        case 0x18bf6cu: goto label_18bf6c;
        case 0x18bf70u: goto label_18bf70;
        case 0x18bf74u: goto label_18bf74;
        case 0x18bf78u: goto label_18bf78;
        case 0x18bf7cu: goto label_18bf7c;
        case 0x18bf80u: goto label_18bf80;
        case 0x18bf84u: goto label_18bf84;
        case 0x18bf88u: goto label_18bf88;
        case 0x18bf8cu: goto label_18bf8c;
        case 0x18bf90u: goto label_18bf90;
        case 0x18bf94u: goto label_18bf94;
        case 0x18bf98u: goto label_18bf98;
        case 0x18bf9cu: goto label_18bf9c;
        case 0x18bfa0u: goto label_18bfa0;
        case 0x18bfa4u: goto label_18bfa4;
        case 0x18bfa8u: goto label_18bfa8;
        case 0x18bfacu: goto label_18bfac;
        case 0x18bfb0u: goto label_18bfb0;
        case 0x18bfb4u: goto label_18bfb4;
        case 0x18bfb8u: goto label_18bfb8;
        case 0x18bfbcu: goto label_18bfbc;
        case 0x18bfc0u: goto label_18bfc0;
        case 0x18bfc4u: goto label_18bfc4;
        case 0x18bfc8u: goto label_18bfc8;
        case 0x18bfccu: goto label_18bfcc;
        case 0x18bfd0u: goto label_18bfd0;
        case 0x18bfd4u: goto label_18bfd4;
        case 0x18bfd8u: goto label_18bfd8;
        case 0x18bfdcu: goto label_18bfdc;
        case 0x18bfe0u: goto label_18bfe0;
        case 0x18bfe4u: goto label_18bfe4;
        case 0x18bfe8u: goto label_18bfe8;
        case 0x18bfecu: goto label_18bfec;
        case 0x18bff0u: goto label_18bff0;
        case 0x18bff4u: goto label_18bff4;
        case 0x18bff8u: goto label_18bff8;
        case 0x18bffcu: goto label_18bffc;
        case 0x18c000u: goto label_18c000;
        case 0x18c004u: goto label_18c004;
        case 0x18c008u: goto label_18c008;
        case 0x18c00cu: goto label_18c00c;
        case 0x18c010u: goto label_18c010;
        case 0x18c014u: goto label_18c014;
        case 0x18c018u: goto label_18c018;
        case 0x18c01cu: goto label_18c01c;
        case 0x18c020u: goto label_18c020;
        case 0x18c024u: goto label_18c024;
        case 0x18c028u: goto label_18c028;
        case 0x18c02cu: goto label_18c02c;
        case 0x18c030u: goto label_18c030;
        case 0x18c034u: goto label_18c034;
        case 0x18c038u: goto label_18c038;
        case 0x18c03cu: goto label_18c03c;
        case 0x18c040u: goto label_18c040;
        case 0x18c044u: goto label_18c044;
        case 0x18c048u: goto label_18c048;
        case 0x18c04cu: goto label_18c04c;
        case 0x18c050u: goto label_18c050;
        case 0x18c054u: goto label_18c054;
        case 0x18c058u: goto label_18c058;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c060u: goto label_18c060;
        case 0x18c064u: goto label_18c064;
        case 0x18c068u: goto label_18c068;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c070u: goto label_18c070;
        case 0x18c074u: goto label_18c074;
        case 0x18c078u: goto label_18c078;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c080u: goto label_18c080;
        case 0x18c084u: goto label_18c084;
        case 0x18c088u: goto label_18c088;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c090u: goto label_18c090;
        case 0x18c094u: goto label_18c094;
        case 0x18c098u: goto label_18c098;
        case 0x18c09cu: goto label_18c09c;
        case 0x18c0a0u: goto label_18c0a0;
        case 0x18c0a4u: goto label_18c0a4;
        case 0x18c0a8u: goto label_18c0a8;
        case 0x18c0acu: goto label_18c0ac;
        case 0x18c0b0u: goto label_18c0b0;
        case 0x18c0b4u: goto label_18c0b4;
        case 0x18c0b8u: goto label_18c0b8;
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0c0u: goto label_18c0c0;
        case 0x18c0c4u: goto label_18c0c4;
        case 0x18c0c8u: goto label_18c0c8;
        case 0x18c0ccu: goto label_18c0cc;
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0d4u: goto label_18c0d4;
        case 0x18c0d8u: goto label_18c0d8;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0e0u: goto label_18c0e0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c0e8u: goto label_18c0e8;
        case 0x18c0ecu: goto label_18c0ec;
        case 0x18c0f0u: goto label_18c0f0;
        case 0x18c0f4u: goto label_18c0f4;
        case 0x18c0f8u: goto label_18c0f8;
        case 0x18c0fcu: goto label_18c0fc;
        case 0x18c100u: goto label_18c100;
        case 0x18c104u: goto label_18c104;
        case 0x18c108u: goto label_18c108;
        case 0x18c10cu: goto label_18c10c;
        case 0x18c110u: goto label_18c110;
        case 0x18c114u: goto label_18c114;
        case 0x18c118u: goto label_18c118;
        case 0x18c11cu: goto label_18c11c;
        case 0x18c120u: goto label_18c120;
        case 0x18c124u: goto label_18c124;
        case 0x18c128u: goto label_18c128;
        case 0x18c12cu: goto label_18c12c;
        case 0x18c130u: goto label_18c130;
        case 0x18c134u: goto label_18c134;
        case 0x18c138u: goto label_18c138;
        case 0x18c13cu: goto label_18c13c;
        case 0x18c140u: goto label_18c140;
        case 0x18c144u: goto label_18c144;
        case 0x18c148u: goto label_18c148;
        case 0x18c14cu: goto label_18c14c;
        case 0x18c150u: goto label_18c150;
        case 0x18c154u: goto label_18c154;
        case 0x18c158u: goto label_18c158;
        case 0x18c15cu: goto label_18c15c;
        case 0x18c160u: goto label_18c160;
        case 0x18c164u: goto label_18c164;
        case 0x18c168u: goto label_18c168;
        case 0x18c16cu: goto label_18c16c;
        case 0x18c170u: goto label_18c170;
        case 0x18c174u: goto label_18c174;
        case 0x18c178u: goto label_18c178;
        case 0x18c17cu: goto label_18c17c;
        case 0x18c180u: goto label_18c180;
        case 0x18c184u: goto label_18c184;
        case 0x18c188u: goto label_18c188;
        case 0x18c18cu: goto label_18c18c;
        case 0x18c190u: goto label_18c190;
        case 0x18c194u: goto label_18c194;
        case 0x18c198u: goto label_18c198;
        case 0x18c19cu: goto label_18c19c;
        case 0x18c1a0u: goto label_18c1a0;
        case 0x18c1a4u: goto label_18c1a4;
        case 0x18c1a8u: goto label_18c1a8;
        case 0x18c1acu: goto label_18c1ac;
        case 0x18c1b0u: goto label_18c1b0;
        case 0x18c1b4u: goto label_18c1b4;
        case 0x18c1b8u: goto label_18c1b8;
        case 0x18c1bcu: goto label_18c1bc;
        case 0x18c1c0u: goto label_18c1c0;
        case 0x18c1c4u: goto label_18c1c4;
        case 0x18c1c8u: goto label_18c1c8;
        case 0x18c1ccu: goto label_18c1cc;
        case 0x18c1d0u: goto label_18c1d0;
        case 0x18c1d4u: goto label_18c1d4;
        case 0x18c1d8u: goto label_18c1d8;
        case 0x18c1dcu: goto label_18c1dc;
        case 0x18c1e0u: goto label_18c1e0;
        case 0x18c1e4u: goto label_18c1e4;
        case 0x18c1e8u: goto label_18c1e8;
        case 0x18c1ecu: goto label_18c1ec;
        case 0x18c1f0u: goto label_18c1f0;
        case 0x18c1f4u: goto label_18c1f4;
        case 0x18c1f8u: goto label_18c1f8;
        case 0x18c1fcu: goto label_18c1fc;
        case 0x18c200u: goto label_18c200;
        case 0x18c204u: goto label_18c204;
        case 0x18c208u: goto label_18c208;
        case 0x18c20cu: goto label_18c20c;
        case 0x18c210u: goto label_18c210;
        case 0x18c214u: goto label_18c214;
        case 0x18c218u: goto label_18c218;
        case 0x18c21cu: goto label_18c21c;
        case 0x18c220u: goto label_18c220;
        case 0x18c224u: goto label_18c224;
        case 0x18c228u: goto label_18c228;
        case 0x18c22cu: goto label_18c22c;
        case 0x18c230u: goto label_18c230;
        case 0x18c234u: goto label_18c234;
        case 0x18c238u: goto label_18c238;
        case 0x18c23cu: goto label_18c23c;
        case 0x18c240u: goto label_18c240;
        case 0x18c244u: goto label_18c244;
        case 0x18c248u: goto label_18c248;
        case 0x18c24cu: goto label_18c24c;
        case 0x18c250u: goto label_18c250;
        case 0x18c254u: goto label_18c254;
        case 0x18c258u: goto label_18c258;
        case 0x18c25cu: goto label_18c25c;
        case 0x18c260u: goto label_18c260;
        case 0x18c264u: goto label_18c264;
        case 0x18c268u: goto label_18c268;
        case 0x18c26cu: goto label_18c26c;
        case 0x18c270u: goto label_18c270;
        case 0x18c274u: goto label_18c274;
        case 0x18c278u: goto label_18c278;
        case 0x18c27cu: goto label_18c27c;
        case 0x18c280u: goto label_18c280;
        case 0x18c284u: goto label_18c284;
        case 0x18c288u: goto label_18c288;
        case 0x18c28cu: goto label_18c28c;
        case 0x18c290u: goto label_18c290;
        default: break;
    }

    ctx->pc = 0x18bd70u;

label_18bd70:
    // 0x18bd70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_18bd74:
    // 0x18bd74: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x18bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
label_18bd78:
    // 0x18bd78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_18bd7c:
    // 0x18bd7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18bd80:
    // 0x18bd80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18bd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18bd84:
    // 0x18bd84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18bd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18bd88:
    // 0x18bd88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18bd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18bd8c:
    // 0x18bd8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18bd90:
    // 0x18bd90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18bd94:
    // 0x18bd94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18bd98:
    // 0x18bd98: 0xa7a400b0  sh          $a0, 0xB0($sp)
    ctx->pc = 0x18bd98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 4));
label_18bd9c:
    // 0x18bd9c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x18bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_18bda0:
    // 0x18bda0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x18bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_18bda4:
    // 0x18bda4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x18bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
label_18bda8:
    // 0x18bda8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18bdac:
    // 0x18bdac: 0x2450e740  addiu       $s0, $v0, -0x18C0
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
label_18bdb0:
    // 0x18bdb0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18bdb4:
    // 0x18bdb4: 0x2456a630  addiu       $s6, $v0, -0x59D0
    ctx->pc = 0x18bdb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
label_18bdb8:
    // 0x18bdb8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18bdbc:
    // 0x18bdbc: 0x2457e890  addiu       $s7, $v0, -0x1770
    ctx->pc = 0x18bdbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_18bdc0:
    // 0x18bdc0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18bdc0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18bdc4:
    // 0x18bdc4: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x18bdc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_18bdc8:
    // 0x18bdc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18bdcc:
    // 0x18bdcc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_18bdd0:
    // 0x18bdd0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x18bdd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18bdd4:
    // 0x18bdd4: 0x97a200b0  lhu         $v0, 0xB0($sp)
    ctx->pc = 0x18bdd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_18bdd8:
    // 0x18bdd8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18bddc:
    // 0x18bddc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x18bddcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18bde0:
    // 0x18bde0: 0xdfa200c8  ld          $v0, 0xC8($sp)
    ctx->pc = 0x18bde0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_18bde4:
    // 0x18bde4: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18bde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_18bde8:
    // 0x18bde8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18bdec:
    // 0x18bdec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18bdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18bdf0:
    // 0x18bdf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18bdf4:
    // 0x18bdf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18bdf8:
    // 0x18bdf8: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x18bdf8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_18bdfc:
    // 0x18bdfc: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x18bdfcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_18be00:
    // 0x18be00: 0xdfa300c8  ld          $v1, 0xC8($sp)
    ctx->pc = 0x18be00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_18be04:
    // 0x18be04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18be04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_18be08:
    // 0x18be08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18be0c:
    // 0x18be0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18be0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18be10:
    // 0x18be10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18be14:
    // 0x18be14: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x18be14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
label_18be18:
    // 0x18be18: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x18be18u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
label_18be1c:
    // 0x18be1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18be1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18be20:
    // 0x18be20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18be20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18be24:
    // 0x18be24: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_18be28:
    // 0x18be28: 0xc046314  jal         func_118C50
label_18be2c:
    if (ctx->pc == 0x18BE2Cu) {
        ctx->pc = 0x18BE30u;
        goto label_18be30;
    }
    ctx->pc = 0x18BE28u;
    SET_GPR_U32(ctx, 31, 0x18BE30u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x18BE30u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18BE30u) { return; }
    ctx->pc = 0x18BE30u;
label_18be30:
    // 0x18be30: 0xae110120  sw          $s1, 0x120($s0)
    ctx->pc = 0x18be30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
label_18be34:
    // 0x18be34: 0xae130124  sw          $s3, 0x124($s0)
    ctx->pc = 0x18be34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 19));
label_18be38:
    // 0x18be38: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18be3c:
    // 0x18be3c: 0xc0675a4  jal         func_19D690
label_18be40:
    if (ctx->pc == 0x18BE40u) {
        ctx->pc = 0x18BE44u;
        goto label_18be44;
    }
    ctx->pc = 0x18BE3Cu;
    SET_GPR_U32(ctx, 31, 0x18BE44u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BE3Cu, 0x18BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE44u;
label_18be44:
    // 0x18be44: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x18be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18be48:
    // 0x18be48: 0xc0675a4  jal         func_19D690
label_18be4c:
    if (ctx->pc == 0x18BE4Cu) {
        ctx->pc = 0x18BE50u;
        goto label_18be50;
    }
    ctx->pc = 0x18BE48u;
    SET_GPR_U32(ctx, 31, 0x18BE50u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BE48u, 0x18BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE50u;
label_18be50:
    // 0x18be50: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_18be54:
    // 0x18be54: 0xc0675a4  jal         func_19D690
label_18be58:
    if (ctx->pc == 0x18BE58u) {
        ctx->pc = 0x18BE5Cu;
        goto label_18be5c;
    }
    ctx->pc = 0x18BE54u;
    SET_GPR_U32(ctx, 31, 0x18BE5Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BE54u, 0x18BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE5Cu;
label_18be5c:
    // 0x18be5c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18be60:
    // 0x18be60: 0xc0675a4  jal         func_19D690
label_18be64:
    if (ctx->pc == 0x18BE64u) {
        ctx->pc = 0x18BE68u;
        goto label_18be68;
    }
    ctx->pc = 0x18BE60u;
    SET_GPR_U32(ctx, 31, 0x18BE68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BE60u, 0x18BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE68u;
label_18be68:
    // 0x18be68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18be6c:
    // 0x18be6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18be6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18be70:
    // 0x18be70: 0x0  nop
    ctx->pc = 0x18be70u;
    // NOP
label_18be74:
    // 0x18be74: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x18be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_18be78:
    // 0x18be78: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x18be78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_18be7c:
    // 0x18be7c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x18be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_18be80:
    // 0x18be80: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x18be80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_18be84:
    // 0x18be84: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x18be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_18be88:
    // 0x18be88: 0xc0675a4  jal         func_19D690
label_18be8c:
    if (ctx->pc == 0x18BE8Cu) {
        ctx->pc = 0x18BE90u;
        goto label_18be90;
    }
    ctx->pc = 0x18BE88u;
    SET_GPR_U32(ctx, 31, 0x18BE90u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BE88u, 0x18BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BE90u;
label_18be90:
    // 0x18be90: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x18be90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_18be94:
    // 0x18be94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18be94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18be98:
    // 0x18be98: 0x0  nop
    ctx->pc = 0x18be98u;
    // NOP
label_18be9c:
    // 0x18be9c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x18be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_18bea0:
    // 0x18bea0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x18bea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_18bea4:
    // 0x18bea4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x18bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_18bea8:
    // 0x18bea8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x18bea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_18beac:
    // 0x18beac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18beb0:
    // 0x18beb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18beb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18beb4:
    // 0x18beb4: 0x0  nop
    ctx->pc = 0x18beb4u;
    // NOP
label_18beb8:
    // 0x18beb8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x18beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
label_18bebc:
    // 0x18bebc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x18bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_18bec0:
    // 0x18bec0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x18bec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
label_18bec4:
    // 0x18bec4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x18bec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_18bec8:
    // 0x18bec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18becc:
    // 0x18becc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18beccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bed0:
    // 0x18bed0: 0x0  nop
    ctx->pc = 0x18bed0u;
    // NOP
label_18bed4:
    // 0x18bed4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x18bed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_18bed8:
    // 0x18bed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18bedc:
    // 0x18bedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bee0:
    // 0x18bee0: 0x0  nop
    ctx->pc = 0x18bee0u;
    // NOP
label_18bee4:
    // 0x18bee4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x18bee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_18bee8:
    // 0x18bee8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18beec:
    // 0x18beec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18beecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bef0:
    // 0x18bef0: 0x0  nop
    ctx->pc = 0x18bef0u;
    // NOP
label_18bef4:
    // 0x18bef4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x18bef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_18bef8:
    // 0x18bef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18befc:
    // 0x18befc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18befcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf00:
    // 0x18bf00: 0x0  nop
    ctx->pc = 0x18bf00u;
    // NOP
label_18bf04:
    // 0x18bf04: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x18bf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_18bf08:
    // 0x18bf08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18bf0c:
    // 0x18bf0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf10:
    // 0x18bf10: 0x0  nop
    ctx->pc = 0x18bf10u;
    // NOP
label_18bf14:
    // 0x18bf14: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x18bf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_18bf18:
    // 0x18bf18: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_18bf1c:
    // 0x18bf1c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_18bf20:
    // 0x18bf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf24:
    // 0x18bf24: 0x0  nop
    ctx->pc = 0x18bf24u;
    // NOP
label_18bf28:
    // 0x18bf28: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18bf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_18bf2c:
    // 0x18bf2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_18bf30:
    // 0x18bf30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18bf34:
    if (ctx->pc == 0x18BF34u) {
        ctx->pc = 0x18BF38u;
        goto label_18bf38;
    }
    ctx->pc = 0x18BF30u;
    {
        const bool branch_taken_0x18bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf30) {
            ctx->pc = 0x18BF9Cu;
            goto label_18bf9c;
        }
    }
    ctx->pc = 0x18BF38u;
label_18bf38:
    // 0x18bf38: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_18bf3c:
    // 0x18bf3c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x18bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18bf40:
    // 0x18bf40: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_18bf44:
    // 0x18bf44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_18bf48:
    // 0x18bf48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bf48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18bf4c:
    // 0x18bf4c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18bf50:
    // 0x18bf50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18bf54:
    // 0x18bf54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18bf58:
    // 0x18bf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bf5c:
    // 0x18bf5c: 0x0  nop
    ctx->pc = 0x18bf5cu;
    // NOP
label_18bf60:
    // 0x18bf60: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18bf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18bf64:
    // 0x18bf64: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18bf68:
    // 0x18bf68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bf68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18bf6c:
    // 0x18bf6c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_18bf70:
    // 0x18bf70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18bf74:
    // 0x18bf74: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18bf78:
    // 0x18bf78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bf78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18bf7c:
    // 0x18bf7c: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x18bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_18bf80:
    // 0x18bf80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18bf84:
    // 0x18bf84: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x18bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18bf88:
    // 0x18bf88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bf88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18bf8c:
    // 0x18bf8c: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_18bf90:
    // 0x18bf90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18bf94:
    // 0x18bf94: 0x1000000a  b           . + 4 + (0xA << 2)
label_18bf98:
    if (ctx->pc == 0x18BF98u) {
        ctx->pc = 0x18BF9Cu;
        goto label_18bf9c;
    }
    ctx->pc = 0x18BF94u;
    {
        const bool branch_taken_0x18bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf94) {
            ctx->pc = 0x18BFC0u;
            goto label_18bfc0;
        }
    }
    ctx->pc = 0x18BF9Cu;
label_18bf9c:
    // 0x18bf9c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_18bfa0:
    // 0x18bfa0: 0xc0675a4  jal         func_19D690
label_18bfa4:
    if (ctx->pc == 0x18BFA4u) {
        ctx->pc = 0x18BFA8u;
        goto label_18bfa8;
    }
    ctx->pc = 0x18BFA0u;
    SET_GPR_U32(ctx, 31, 0x18BFA8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFA0u, 0x18BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFA8u;
label_18bfa8:
    // 0x18bfa8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x18bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_18bfac:
    // 0x18bfac: 0xc0675a4  jal         func_19D690
label_18bfb0:
    if (ctx->pc == 0x18BFB0u) {
        ctx->pc = 0x18BFB4u;
        goto label_18bfb4;
    }
    ctx->pc = 0x18BFACu;
    SET_GPR_U32(ctx, 31, 0x18BFB4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFACu, 0x18BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFB4u;
label_18bfb4:
    // 0x18bfb4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x18bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_18bfb8:
    // 0x18bfb8: 0xc0675a4  jal         func_19D690
label_18bfbc:
    if (ctx->pc == 0x18BFBCu) {
        ctx->pc = 0x18BFC0u;
        goto label_18bfc0;
    }
    ctx->pc = 0x18BFB8u;
    SET_GPR_U32(ctx, 31, 0x18BFC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFB8u, 0x18BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFC0u;
label_18bfc0:
    // 0x18bfc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_18bfc4:
    // 0x18bfc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_18bfc8:
    if (ctx->pc == 0x18BFC8u) {
        ctx->pc = 0x18BFCCu;
        goto label_18bfcc;
    }
    ctx->pc = 0x18BFC4u;
    {
        const bool branch_taken_0x18bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfc4) {
            ctx->pc = 0x18BFF0u;
            goto label_18bff0;
        }
    }
    ctx->pc = 0x18BFCCu;
label_18bfcc:
    // 0x18bfcc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x18bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_18bfd0:
    // 0x18bfd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18bfd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18bfd4:
    // 0x18bfd4: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x18bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_18bfd8:
    // 0x18bfd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18bfdc:
    // 0x18bfdc: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18bfdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18bfe0:
    // 0x18bfe0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_18bfe4:
    // 0x18bfe4: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18bfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18bfe8:
    // 0x18bfe8: 0x10000004  b           . + 4 + (0x4 << 2)
label_18bfec:
    if (ctx->pc == 0x18BFECu) {
        ctx->pc = 0x18BFF0u;
        goto label_18bff0;
    }
    ctx->pc = 0x18BFE8u;
    {
        const bool branch_taken_0x18bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfe8) {
            ctx->pc = 0x18BFFCu;
            goto label_18bffc;
        }
    }
    ctx->pc = 0x18BFF0u;
label_18bff0:
    // 0x18bff0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_18bff4:
    // 0x18bff4: 0xc0675a4  jal         func_19D690
label_18bff8:
    if (ctx->pc == 0x18BFF8u) {
        ctx->pc = 0x18BFFCu;
        goto label_18bffc;
    }
    ctx->pc = 0x18BFF4u;
    SET_GPR_U32(ctx, 31, 0x18BFFCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18BFF4u, 0x18BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFFCu;
label_18bffc:
    // 0x18bffc: 0xae150114  sw          $s5, 0x114($s0)
    ctx->pc = 0x18bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 21));
label_18c000:
    // 0x18c000: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
label_18c004:
    if (ctx->pc == 0x18C004u) {
        ctx->pc = 0x18C008u;
        goto label_18c008;
    }
    ctx->pc = 0x18C000u;
    {
        const bool branch_taken_0x18c000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c000) {
            ctx->pc = 0x18C034u;
            goto label_18c034;
        }
    }
    ctx->pc = 0x18C008u;
label_18c008:
    // 0x18c008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c00c:
    // 0x18c00c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x18c00cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c010:
    // 0x18c010: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c014:
    // 0x18c014: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_18c018:
    // 0x18c018: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c01c:
    // 0x18c01c: 0xae140110  sw          $s4, 0x110($s0)
    ctx->pc = 0x18c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 20));
label_18c020:
    // 0x18c020: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_18c024:
    if (ctx->pc == 0x18C024u) {
        ctx->pc = 0x18C028u;
        goto label_18c028;
    }
    ctx->pc = 0x18C020u;
    {
        const bool branch_taken_0x18c020 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c020) {
            ctx->pc = 0x18C034u;
            goto label_18c034;
        }
    }
    ctx->pc = 0x18C028u;
label_18c028:
    // 0x18c028: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c02c:
    // 0x18c02c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x18c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_18c030:
    // 0x18c030: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c034:
    // 0x18c034: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c038:
    // 0x18c038: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c03c:
    // 0x18c03c: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c040:
    // 0x18c040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c044:
    // 0x18c044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c048:
    // 0x18c048: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_18c04c:
    if (ctx->pc == 0x18C04Cu) {
        ctx->pc = 0x18C050u;
        goto label_18c050;
    }
    ctx->pc = 0x18C048u;
    {
        const bool branch_taken_0x18c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c048) {
            ctx->pc = 0x18C258u;
            goto label_18c258;
        }
    }
    ctx->pc = 0x18C050u;
label_18c050:
    // 0x18c050: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c054:
    // 0x18c054: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c058:
    // 0x18c058: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c05c:
    // 0x18c05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c060:
    // 0x18c060: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18c064:
    // 0x18c064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c068:
    // 0x18c068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c06c:
    // 0x18c06c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c070:
    // 0x18c070: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_18c074:
    if (ctx->pc == 0x18C074u) {
        ctx->pc = 0x18C078u;
        goto label_18c078;
    }
    ctx->pc = 0x18C070u;
    {
        const bool branch_taken_0x18c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c070) {
            ctx->pc = 0x18C258u;
            goto label_18c258;
        }
    }
    ctx->pc = 0x18C078u;
label_18c078:
    // 0x18c078: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c078u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c07c:
    // 0x18c07c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18c080:
    // 0x18c080: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18c084:
    // 0x18c084: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x18c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_18c088:
    // 0x18c088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c08c:
    // 0x18c08c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_18c090:
    // 0x18c090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c094:
    // 0x18c094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c098:
    // 0x18c098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c09c:
    // 0x18c09c: 0x40f809  jalr        $v0
label_18c0a0:
    if (ctx->pc == 0x18C0A0u) {
        ctx->pc = 0x18C0A4u;
        goto label_18c0a4;
    }
    ctx->pc = 0x18C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C09Cu, 0x18C0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C0A4u;
label_18c0a4:
    // 0x18c0a4: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_18c0a8:
    // 0x18c0a8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_18c0ac:
    // 0x18c0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c0b0:
    // 0x18c0b0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c0b4:
    // 0x18c0b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18c0b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c0b8:
    // 0x18c0b8: 0x0  nop
    ctx->pc = 0x18c0b8u;
    // NOP
label_18c0bc:
    // 0x18c0bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_18c0c0:
    if (ctx->pc == 0x18C0C0u) {
        ctx->pc = 0x18C0C4u;
        goto label_18c0c4;
    }
    ctx->pc = 0x18C0BCu;
    {
        const bool branch_taken_0x18c0bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c0bc) {
            ctx->pc = 0x18C0CCu;
            goto label_18c0cc;
        }
    }
    ctx->pc = 0x18C0C4u;
label_18c0c4:
    // 0x18c0c4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c0c8:
    // 0x18c0c8: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x18c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_18c0cc:
    // 0x18c0cc: 0x9202013b  lbu         $v0, 0x13B($s0)
    ctx->pc = 0x18c0ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 315)));
label_18c0d0:
    // 0x18c0d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c0d4:
    // 0x18c0d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c0d8:
    // 0x18c0d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_18c0dc:
    if (ctx->pc == 0x18C0DCu) {
        ctx->pc = 0x18C0E0u;
        goto label_18c0e0;
    }
    ctx->pc = 0x18C0D8u;
    {
        const bool branch_taken_0x18c0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c0d8) {
            ctx->pc = 0x18C100u;
            goto label_18c100;
        }
    }
    ctx->pc = 0x18C0E0u;
label_18c0e0:
    // 0x18c0e0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_18c0e4:
    // 0x18c0e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_18c0e8:
    if (ctx->pc == 0x18C0E8u) {
        ctx->pc = 0x18C0ECu;
        goto label_18c0ec;
    }
    ctx->pc = 0x18C0E4u;
    {
        const bool branch_taken_0x18c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0e4) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C0ECu;
label_18c0ec:
    // 0x18c0ec: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c0f0:
    // 0x18c0f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18c0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18c0f4:
    // 0x18c0f4: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c0f8:
    // 0x18c0f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_18c0fc:
    if (ctx->pc == 0x18C0FCu) {
        ctx->pc = 0x18C100u;
        goto label_18c100;
    }
    ctx->pc = 0x18C0F8u;
    {
        const bool branch_taken_0x18c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0f8) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C100u;
label_18c100:
    // 0x18c100: 0x9202013b  lbu         $v0, 0x13B($s0)
    ctx->pc = 0x18c100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 315)));
label_18c104:
    // 0x18c104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c108:
    // 0x18c108: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18c10c:
    if (ctx->pc == 0x18C10Cu) {
        ctx->pc = 0x18C110u;
        goto label_18c110;
    }
    ctx->pc = 0x18C108u;
    {
        const bool branch_taken_0x18c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c108) {
            ctx->pc = 0x18C13Cu;
            goto label_18c13c;
        }
    }
    ctx->pc = 0x18C110u;
label_18c110:
    // 0x18c110: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_18c114:
    // 0x18c114: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c118:
    if (ctx->pc == 0x18C118u) {
        ctx->pc = 0x18C11Cu;
        goto label_18c11c;
    }
    ctx->pc = 0x18C114u;
    {
        const bool branch_taken_0x18c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c114) {
            ctx->pc = 0x18C130u;
            goto label_18c130;
        }
    }
    ctx->pc = 0x18C11Cu;
label_18c11c:
    // 0x18c11c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18c120:
    // 0x18c120: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_18c124:
    // 0x18c124: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c124u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c128:
    // 0x18c128: 0x1000004e  b           . + 4 + (0x4E << 2)
label_18c12c:
    if (ctx->pc == 0x18C12Cu) {
        ctx->pc = 0x18C130u;
        goto label_18c130;
    }
    ctx->pc = 0x18C128u;
    {
        const bool branch_taken_0x18c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c128) {
            ctx->pc = 0x18C264u;
            goto label_18c264;
        }
    }
    ctx->pc = 0x18C130u;
label_18c130:
    // 0x18c130: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c134:
    // 0x18c134: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18c138:
    // 0x18c138: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c13c:
    // 0x18c13c: 0x9202013c  lbu         $v0, 0x13C($s0)
    ctx->pc = 0x18c13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 316)));
label_18c140:
    // 0x18c140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c144:
    // 0x18c144: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18c148:
    if (ctx->pc == 0x18C148u) {
        ctx->pc = 0x18C14Cu;
        goto label_18c14c;
    }
    ctx->pc = 0x18C144u;
    {
        const bool branch_taken_0x18c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c144) {
            ctx->pc = 0x18C178u;
            goto label_18c178;
        }
    }
    ctx->pc = 0x18C14Cu;
label_18c14c:
    // 0x18c14c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_18c150:
    // 0x18c150: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18c154:
    if (ctx->pc == 0x18C154u) {
        ctx->pc = 0x18C158u;
        goto label_18c158;
    }
    ctx->pc = 0x18C150u;
    {
        const bool branch_taken_0x18c150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c150) {
            ctx->pc = 0x18C16Cu;
            goto label_18c16c;
        }
    }
    ctx->pc = 0x18C158u;
label_18c158:
    // 0x18c158: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18c15c:
    // 0x18c15c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_18c160:
    // 0x18c160: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c160u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c164:
    // 0x18c164: 0x1000003f  b           . + 4 + (0x3F << 2)
label_18c168:
    if (ctx->pc == 0x18C168u) {
        ctx->pc = 0x18C16Cu;
        goto label_18c16c;
    }
    ctx->pc = 0x18C164u;
    {
        const bool branch_taken_0x18c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c164) {
            ctx->pc = 0x18C264u;
            goto label_18c264;
        }
    }
    ctx->pc = 0x18C16Cu;
label_18c16c:
    // 0x18c16c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c170:
    // 0x18c170: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_18c174:
    // 0x18c174: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c178:
    // 0x18c178: 0x9202013d  lbu         $v0, 0x13D($s0)
    ctx->pc = 0x18c178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 317)));
label_18c17c:
    // 0x18c17c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c180:
    // 0x18c180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c184:
    if (ctx->pc == 0x18C184u) {
        ctx->pc = 0x18C188u;
        goto label_18c188;
    }
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C194u;
            goto label_18c194;
        }
    }
    ctx->pc = 0x18C188u;
label_18c188:
    // 0x18c188: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c18c:
    // 0x18c18c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_18c190:
    // 0x18c190: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c194:
    // 0x18c194: 0x9202013e  lbu         $v0, 0x13E($s0)
    ctx->pc = 0x18c194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 318)));
label_18c198:
    // 0x18c198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c19c:
    // 0x18c19c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c1a0:
    if (ctx->pc == 0x18C1A0u) {
        ctx->pc = 0x18C1A4u;
        goto label_18c1a4;
    }
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1B0u;
            goto label_18c1b0;
        }
    }
    ctx->pc = 0x18C1A4u;
label_18c1a4:
    // 0x18c1a4: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c1a8:
    // 0x18c1a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18c1ac:
    // 0x18c1ac: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c1acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c1b0:
    // 0x18c1b0: 0x9202013f  lbu         $v0, 0x13F($s0)
    ctx->pc = 0x18c1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 319)));
label_18c1b4:
    // 0x18c1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c1b8:
    // 0x18c1b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18c1bc:
    if (ctx->pc == 0x18C1BCu) {
        ctx->pc = 0x18C1C0u;
        goto label_18c1c0;
    }
    ctx->pc = 0x18C1B8u;
    {
        const bool branch_taken_0x18c1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c1b8) {
            ctx->pc = 0x18C1FCu;
            goto label_18c1fc;
        }
    }
    ctx->pc = 0x18C1C0u;
label_18c1c0:
    // 0x18c1c0: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c1c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c1c4:
    // 0x18c1c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18c1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_18c1c8:
    // 0x18c1c8: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c1cc:
    // 0x18c1cc: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x18c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c1d0:
    // 0x18c1d0: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x18c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
label_18c1d4:
    // 0x18c1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1d8:
    // 0x18c1d8: 0x0  nop
    ctx->pc = 0x18c1d8u;
    // NOP
label_18c1dc:
    // 0x18c1dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18c1e0:
    // 0x18c1e0: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x18c1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_18c1e4:
    // 0x18c1e4: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x18c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c1e8:
    // 0x18c1e8: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x18c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
label_18c1ec:
    // 0x18c1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c1f0:
    // 0x18c1f0: 0x0  nop
    ctx->pc = 0x18c1f0u;
    // NOP
label_18c1f4:
    // 0x18c1f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18c1f8:
    // 0x18c1f8: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x18c1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_18c1fc:
    // 0x18c1fc: 0x92020140  lbu         $v0, 0x140($s0)
    ctx->pc = 0x18c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
label_18c200:
    // 0x18c200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c204:
    // 0x18c204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c208:
    if (ctx->pc == 0x18C208u) {
        ctx->pc = 0x18C20Cu;
        goto label_18c20c;
    }
    ctx->pc = 0x18C204u;
    {
        const bool branch_taken_0x18c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c204) {
            ctx->pc = 0x18C218u;
            goto label_18c218;
        }
    }
    ctx->pc = 0x18C20Cu;
label_18c20c:
    // 0x18c20c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c210:
    // 0x18c210: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_18c214:
    // 0x18c214: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c218:
    // 0x18c218: 0x92020141  lbu         $v0, 0x141($s0)
    ctx->pc = 0x18c218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 321)));
label_18c21c:
    // 0x18c21c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c220:
    // 0x18c220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18c224:
    if (ctx->pc == 0x18C224u) {
        ctx->pc = 0x18C228u;
        goto label_18c228;
    }
    ctx->pc = 0x18C220u;
    {
        const bool branch_taken_0x18c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c220) {
            ctx->pc = 0x18C234u;
            goto label_18c234;
        }
    }
    ctx->pc = 0x18C228u;
label_18c228:
    // 0x18c228: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c22c:
    // 0x18c22c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x18c22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_18c230:
    // 0x18c230: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c234:
    // 0x18c234: 0x92020142  lbu         $v0, 0x142($s0)
    ctx->pc = 0x18c234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 322)));
label_18c238:
    // 0x18c238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18c23c:
    // 0x18c23c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18c240:
    if (ctx->pc == 0x18C240u) {
        ctx->pc = 0x18C244u;
        goto label_18c244;
    }
    ctx->pc = 0x18C23Cu;
    {
        const bool branch_taken_0x18c23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c23c) {
            ctx->pc = 0x18C260u;
            goto label_18c260;
        }
    }
    ctx->pc = 0x18C244u;
label_18c244:
    // 0x18c244: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
label_18c248:
    // 0x18c248: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x18c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_18c24c:
    // 0x18c24c: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
label_18c250:
    // 0x18c250: 0x10000003  b           . + 4 + (0x3 << 2)
label_18c254:
    if (ctx->pc == 0x18C254u) {
        ctx->pc = 0x18C258u;
        goto label_18c258;
    }
    ctx->pc = 0x18C250u;
    {
        const bool branch_taken_0x18c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c250) {
            ctx->pc = 0x18C260u;
            goto label_18c260;
        }
    }
    ctx->pc = 0x18C258u;
label_18c258:
    // 0x18c258: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18c25c:
    // 0x18c25c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_18c260:
    // 0x18c260: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c260u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c264:
    // 0x18c264: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18c264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18c268:
    // 0x18c268: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18c268u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18c26c:
    // 0x18c26c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18c26cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18c270:
    // 0x18c270: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18c270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18c274:
    // 0x18c274: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18c278:
    // 0x18c278: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c27c:
    // 0x18c27c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c27cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c280:
    // 0x18c280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c284:
    // 0x18c284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c288:
    // 0x18c288: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x18c288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_18c28c:
    // 0x18c28c: 0x3e00008  jr          $ra
label_18c290:
    if (ctx->pc == 0x18C290u) {
        ctx->pc = 0x18C294u;
        goto label_fallthrough_0x18c28c;
    }
    ctx->pc = 0x18C28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c28c:
    ctx->pc = 0x18C294u;
}
