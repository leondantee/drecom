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

// Function: Set_effect_em05_denki03
// Address: 0x2ee220 - 0x2ee538
void Set_effect_em05_denki03_0x2ee220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_denki03_0x2ee220");
#endif

    switch (ctx->pc) {
        case 0x2ee220u: goto label_2ee220;
        case 0x2ee224u: goto label_2ee224;
        case 0x2ee228u: goto label_2ee228;
        case 0x2ee22cu: goto label_2ee22c;
        case 0x2ee230u: goto label_2ee230;
        case 0x2ee234u: goto label_2ee234;
        case 0x2ee238u: goto label_2ee238;
        case 0x2ee23cu: goto label_2ee23c;
        case 0x2ee240u: goto label_2ee240;
        case 0x2ee244u: goto label_2ee244;
        case 0x2ee248u: goto label_2ee248;
        case 0x2ee24cu: goto label_2ee24c;
        case 0x2ee250u: goto label_2ee250;
        case 0x2ee254u: goto label_2ee254;
        case 0x2ee258u: goto label_2ee258;
        case 0x2ee25cu: goto label_2ee25c;
        case 0x2ee260u: goto label_2ee260;
        case 0x2ee264u: goto label_2ee264;
        case 0x2ee268u: goto label_2ee268;
        case 0x2ee26cu: goto label_2ee26c;
        case 0x2ee270u: goto label_2ee270;
        case 0x2ee274u: goto label_2ee274;
        case 0x2ee278u: goto label_2ee278;
        case 0x2ee27cu: goto label_2ee27c;
        case 0x2ee280u: goto label_2ee280;
        case 0x2ee284u: goto label_2ee284;
        case 0x2ee288u: goto label_2ee288;
        case 0x2ee28cu: goto label_2ee28c;
        case 0x2ee290u: goto label_2ee290;
        case 0x2ee294u: goto label_2ee294;
        case 0x2ee298u: goto label_2ee298;
        case 0x2ee29cu: goto label_2ee29c;
        case 0x2ee2a0u: goto label_2ee2a0;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2a8u: goto label_2ee2a8;
        case 0x2ee2acu: goto label_2ee2ac;
        case 0x2ee2b0u: goto label_2ee2b0;
        case 0x2ee2b4u: goto label_2ee2b4;
        case 0x2ee2b8u: goto label_2ee2b8;
        case 0x2ee2bcu: goto label_2ee2bc;
        case 0x2ee2c0u: goto label_2ee2c0;
        case 0x2ee2c4u: goto label_2ee2c4;
        case 0x2ee2c8u: goto label_2ee2c8;
        case 0x2ee2ccu: goto label_2ee2cc;
        case 0x2ee2d0u: goto label_2ee2d0;
        case 0x2ee2d4u: goto label_2ee2d4;
        case 0x2ee2d8u: goto label_2ee2d8;
        case 0x2ee2dcu: goto label_2ee2dc;
        case 0x2ee2e0u: goto label_2ee2e0;
        case 0x2ee2e4u: goto label_2ee2e4;
        case 0x2ee2e8u: goto label_2ee2e8;
        case 0x2ee2ecu: goto label_2ee2ec;
        case 0x2ee2f0u: goto label_2ee2f0;
        case 0x2ee2f4u: goto label_2ee2f4;
        case 0x2ee2f8u: goto label_2ee2f8;
        case 0x2ee2fcu: goto label_2ee2fc;
        case 0x2ee300u: goto label_2ee300;
        case 0x2ee304u: goto label_2ee304;
        case 0x2ee308u: goto label_2ee308;
        case 0x2ee30cu: goto label_2ee30c;
        case 0x2ee310u: goto label_2ee310;
        case 0x2ee314u: goto label_2ee314;
        case 0x2ee318u: goto label_2ee318;
        case 0x2ee31cu: goto label_2ee31c;
        case 0x2ee320u: goto label_2ee320;
        case 0x2ee324u: goto label_2ee324;
        case 0x2ee328u: goto label_2ee328;
        case 0x2ee32cu: goto label_2ee32c;
        case 0x2ee330u: goto label_2ee330;
        case 0x2ee334u: goto label_2ee334;
        case 0x2ee338u: goto label_2ee338;
        case 0x2ee33cu: goto label_2ee33c;
        case 0x2ee340u: goto label_2ee340;
        case 0x2ee344u: goto label_2ee344;
        case 0x2ee348u: goto label_2ee348;
        case 0x2ee34cu: goto label_2ee34c;
        case 0x2ee350u: goto label_2ee350;
        case 0x2ee354u: goto label_2ee354;
        case 0x2ee358u: goto label_2ee358;
        case 0x2ee35cu: goto label_2ee35c;
        case 0x2ee360u: goto label_2ee360;
        case 0x2ee364u: goto label_2ee364;
        case 0x2ee368u: goto label_2ee368;
        case 0x2ee36cu: goto label_2ee36c;
        case 0x2ee370u: goto label_2ee370;
        case 0x2ee374u: goto label_2ee374;
        case 0x2ee378u: goto label_2ee378;
        case 0x2ee37cu: goto label_2ee37c;
        case 0x2ee380u: goto label_2ee380;
        case 0x2ee384u: goto label_2ee384;
        case 0x2ee388u: goto label_2ee388;
        case 0x2ee38cu: goto label_2ee38c;
        case 0x2ee390u: goto label_2ee390;
        case 0x2ee394u: goto label_2ee394;
        case 0x2ee398u: goto label_2ee398;
        case 0x2ee39cu: goto label_2ee39c;
        case 0x2ee3a0u: goto label_2ee3a0;
        case 0x2ee3a4u: goto label_2ee3a4;
        case 0x2ee3a8u: goto label_2ee3a8;
        case 0x2ee3acu: goto label_2ee3ac;
        case 0x2ee3b0u: goto label_2ee3b0;
        case 0x2ee3b4u: goto label_2ee3b4;
        case 0x2ee3b8u: goto label_2ee3b8;
        case 0x2ee3bcu: goto label_2ee3bc;
        case 0x2ee3c0u: goto label_2ee3c0;
        case 0x2ee3c4u: goto label_2ee3c4;
        case 0x2ee3c8u: goto label_2ee3c8;
        case 0x2ee3ccu: goto label_2ee3cc;
        case 0x2ee3d0u: goto label_2ee3d0;
        case 0x2ee3d4u: goto label_2ee3d4;
        case 0x2ee3d8u: goto label_2ee3d8;
        case 0x2ee3dcu: goto label_2ee3dc;
        case 0x2ee3e0u: goto label_2ee3e0;
        case 0x2ee3e4u: goto label_2ee3e4;
        case 0x2ee3e8u: goto label_2ee3e8;
        case 0x2ee3ecu: goto label_2ee3ec;
        case 0x2ee3f0u: goto label_2ee3f0;
        case 0x2ee3f4u: goto label_2ee3f4;
        case 0x2ee3f8u: goto label_2ee3f8;
        case 0x2ee3fcu: goto label_2ee3fc;
        case 0x2ee400u: goto label_2ee400;
        case 0x2ee404u: goto label_2ee404;
        case 0x2ee408u: goto label_2ee408;
        case 0x2ee40cu: goto label_2ee40c;
        case 0x2ee410u: goto label_2ee410;
        case 0x2ee414u: goto label_2ee414;
        case 0x2ee418u: goto label_2ee418;
        case 0x2ee41cu: goto label_2ee41c;
        case 0x2ee420u: goto label_2ee420;
        case 0x2ee424u: goto label_2ee424;
        case 0x2ee428u: goto label_2ee428;
        case 0x2ee42cu: goto label_2ee42c;
        case 0x2ee430u: goto label_2ee430;
        case 0x2ee434u: goto label_2ee434;
        case 0x2ee438u: goto label_2ee438;
        case 0x2ee43cu: goto label_2ee43c;
        case 0x2ee440u: goto label_2ee440;
        case 0x2ee444u: goto label_2ee444;
        case 0x2ee448u: goto label_2ee448;
        case 0x2ee44cu: goto label_2ee44c;
        case 0x2ee450u: goto label_2ee450;
        case 0x2ee454u: goto label_2ee454;
        case 0x2ee458u: goto label_2ee458;
        case 0x2ee45cu: goto label_2ee45c;
        case 0x2ee460u: goto label_2ee460;
        case 0x2ee464u: goto label_2ee464;
        case 0x2ee468u: goto label_2ee468;
        case 0x2ee46cu: goto label_2ee46c;
        case 0x2ee470u: goto label_2ee470;
        case 0x2ee474u: goto label_2ee474;
        case 0x2ee478u: goto label_2ee478;
        case 0x2ee47cu: goto label_2ee47c;
        case 0x2ee480u: goto label_2ee480;
        case 0x2ee484u: goto label_2ee484;
        case 0x2ee488u: goto label_2ee488;
        case 0x2ee48cu: goto label_2ee48c;
        case 0x2ee490u: goto label_2ee490;
        case 0x2ee494u: goto label_2ee494;
        case 0x2ee498u: goto label_2ee498;
        case 0x2ee49cu: goto label_2ee49c;
        case 0x2ee4a0u: goto label_2ee4a0;
        case 0x2ee4a4u: goto label_2ee4a4;
        case 0x2ee4a8u: goto label_2ee4a8;
        case 0x2ee4acu: goto label_2ee4ac;
        case 0x2ee4b0u: goto label_2ee4b0;
        case 0x2ee4b4u: goto label_2ee4b4;
        case 0x2ee4b8u: goto label_2ee4b8;
        case 0x2ee4bcu: goto label_2ee4bc;
        case 0x2ee4c0u: goto label_2ee4c0;
        case 0x2ee4c4u: goto label_2ee4c4;
        case 0x2ee4c8u: goto label_2ee4c8;
        case 0x2ee4ccu: goto label_2ee4cc;
        case 0x2ee4d0u: goto label_2ee4d0;
        case 0x2ee4d4u: goto label_2ee4d4;
        case 0x2ee4d8u: goto label_2ee4d8;
        case 0x2ee4dcu: goto label_2ee4dc;
        case 0x2ee4e0u: goto label_2ee4e0;
        case 0x2ee4e4u: goto label_2ee4e4;
        case 0x2ee4e8u: goto label_2ee4e8;
        case 0x2ee4ecu: goto label_2ee4ec;
        case 0x2ee4f0u: goto label_2ee4f0;
        case 0x2ee4f4u: goto label_2ee4f4;
        case 0x2ee4f8u: goto label_2ee4f8;
        case 0x2ee4fcu: goto label_2ee4fc;
        case 0x2ee500u: goto label_2ee500;
        case 0x2ee504u: goto label_2ee504;
        case 0x2ee508u: goto label_2ee508;
        case 0x2ee50cu: goto label_2ee50c;
        case 0x2ee510u: goto label_2ee510;
        case 0x2ee514u: goto label_2ee514;
        case 0x2ee518u: goto label_2ee518;
        case 0x2ee51cu: goto label_2ee51c;
        case 0x2ee520u: goto label_2ee520;
        case 0x2ee524u: goto label_2ee524;
        case 0x2ee528u: goto label_2ee528;
        case 0x2ee52cu: goto label_2ee52c;
        case 0x2ee530u: goto label_2ee530;
        case 0x2ee534u: goto label_2ee534;
        default: break;
    }

    ctx->pc = 0x2ee220u;

label_2ee220:
    // 0x2ee220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ee220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ee224:
    // 0x2ee224: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2ee224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_2ee228:
    // 0x2ee228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ee22c:
    // 0x2ee22c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ee230:
    // 0x2ee230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ee234:
    // 0x2ee234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ee238:
    // 0x2ee238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ee23c:
    // 0x2ee23c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2ee23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2ee240:
    // 0x2ee240: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2ee240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2ee244:
    // 0x2ee244: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2ee244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2ee248:
    // 0x2ee248: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2ee248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_2ee24c:
    // 0x2ee24c: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2ee24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_2ee250:
    // 0x2ee250: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2ee250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
label_2ee254:
    // 0x2ee254: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2ee254u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2ee258:
    // 0x2ee258: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2ee258u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2ee25c:
    // 0x2ee25c: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2ee25cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ee260:
    // 0x2ee260: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2ee260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
label_2ee264:
    // 0x2ee264: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2ee264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
label_2ee268:
    // 0x2ee268: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ee268u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ee26c:
    // 0x2ee26c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ee26cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ee270:
    // 0x2ee270: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ee274:
    // 0x2ee274: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2ee278:
    if (ctx->pc == 0x2EE278u) {
        ctx->pc = 0x2EE27Cu;
        goto label_2ee27c;
    }
    ctx->pc = 0x2EE274u;
    {
        const bool branch_taken_0x2ee274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee274) {
            ctx->pc = 0x2EE2A4u;
            goto label_2ee2a4;
        }
    }
    ctx->pc = 0x2EE27Cu;
label_2ee27c:
    // 0x2ee27c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee280:
    // 0x2ee280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ee284:
    if (ctx->pc == 0x2EE284u) {
        ctx->pc = 0x2EE288u;
        goto label_2ee288;
    }
    ctx->pc = 0x2EE280u;
    {
        const bool branch_taken_0x2ee280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee280) {
            ctx->pc = 0x2EE294u;
            goto label_2ee294;
        }
    }
    ctx->pc = 0x2EE288u;
label_2ee288:
    // 0x2ee288: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ee288u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ee28c:
    // 0x2ee28c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ee290:
    if (ctx->pc == 0x2EE290u) {
        ctx->pc = 0x2EE294u;
        goto label_2ee294;
    }
    ctx->pc = 0x2EE28Cu;
    {
        const bool branch_taken_0x2ee28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee28c) {
            ctx->pc = 0x2EE2C8u;
            goto label_2ee2c8;
        }
    }
    ctx->pc = 0x2EE294u;
label_2ee294:
    // 0x2ee294: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee298:
    // 0x2ee298: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ee298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee29c:
    // 0x2ee29c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ee2a0:
    if (ctx->pc == 0x2EE2A0u) {
        ctx->pc = 0x2EE2A4u;
        goto label_2ee2a4;
    }
    ctx->pc = 0x2EE29Cu;
    {
        const bool branch_taken_0x2ee29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee29c) {
            ctx->pc = 0x2EE2C8u;
            goto label_2ee2c8;
        }
    }
    ctx->pc = 0x2EE2A4u;
label_2ee2a4:
    // 0x2ee2a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ee2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee2a8:
    // 0x2ee2a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee2ac:
    // 0x2ee2ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ee2b0:
    if (ctx->pc == 0x2EE2B0u) {
        ctx->pc = 0x2EE2B4u;
        goto label_2ee2b4;
    }
    ctx->pc = 0x2EE2ACu;
    {
        const bool branch_taken_0x2ee2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2ac) {
            ctx->pc = 0x2EE2C0u;
            goto label_2ee2c0;
        }
    }
    ctx->pc = 0x2EE2B4u;
label_2ee2b4:
    // 0x2ee2b4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2ee2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee2b8:
    // 0x2ee2b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ee2bc:
    if (ctx->pc == 0x2EE2BCu) {
        ctx->pc = 0x2EE2C0u;
        goto label_2ee2c0;
    }
    ctx->pc = 0x2EE2B8u;
    {
        const bool branch_taken_0x2ee2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2b8) {
            ctx->pc = 0x2EE2C8u;
            goto label_2ee2c8;
        }
    }
    ctx->pc = 0x2EE2C0u;
label_2ee2c0:
    // 0x2ee2c0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2ee2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ee2c4:
    // 0x2ee2c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ee2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee2c8:
    // 0x2ee2c8: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2ee2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
label_2ee2cc:
    // 0x2ee2cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee2d0:
    // 0x2ee2d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ee2d4:
    if (ctx->pc == 0x2EE2D4u) {
        ctx->pc = 0x2EE2D8u;
        goto label_2ee2d8;
    }
    ctx->pc = 0x2EE2D0u;
    {
        const bool branch_taken_0x2ee2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2d0) {
            ctx->pc = 0x2EE2E4u;
            goto label_2ee2e4;
        }
    }
    ctx->pc = 0x2EE2D8u;
label_2ee2d8:
    // 0x2ee2d8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ee2d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ee2dc:
    // 0x2ee2dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ee2e0:
    if (ctx->pc == 0x2EE2E0u) {
        ctx->pc = 0x2EE2E4u;
        goto label_2ee2e4;
    }
    ctx->pc = 0x2EE2DCu;
    {
        const bool branch_taken_0x2ee2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2dc) {
            ctx->pc = 0x2EE2E8u;
            goto label_2ee2e8;
        }
    }
    ctx->pc = 0x2EE2E4u;
label_2ee2e4:
    // 0x2ee2e4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ee2e4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2ee2e8:
    // 0x2ee2e8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2ee2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2ee2ec:
    // 0x2ee2ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee2f0:
    // 0x2ee2f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2ee2f4:
    // 0x2ee2f4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2ee2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2ee2f8:
    // 0x2ee2f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee2fc:
    // 0x2ee2fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee2fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee300:
    // 0x2ee300: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ee300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2ee304:
    // 0x2ee304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee308:
    // 0x2ee308: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2ee30c:
    // 0x2ee30c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2ee30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2ee310:
    // 0x2ee310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee314:
    // 0x2ee314: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee318:
    // 0x2ee318: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x2ee318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_2ee31c:
    // 0x2ee31c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2ee31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee320:
    // 0x2ee320: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2ee320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2ee324:
    // 0x2ee324: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2ee324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2ee328:
    // 0x2ee328: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ee32c:
    // 0x2ee32c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee330:
    // 0x2ee330: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee334:
    // 0x2ee334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee338:
    // 0x2ee338: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ee338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee33c:
    // 0x2ee33c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ee340:
    // 0x2ee340: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee344:
    // 0x2ee344: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee348:
    // 0x2ee348: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee34c:
    // 0x2ee34c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee350:
    // 0x2ee350: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee354:
    // 0x2ee354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee358:
    // 0x2ee358: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ee358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2ee35c:
    // 0x2ee35c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ee35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ee360:
    // 0x2ee360: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee364:
    // 0x2ee364: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee368:
    // 0x2ee368: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee36c:
    // 0x2ee36c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee370:
    // 0x2ee370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee374:
    // 0x2ee374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee378:
    // 0x2ee378: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ee378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ee37c:
    // 0x2ee37c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ee37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ee380:
    // 0x2ee380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee384:
    // 0x2ee384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee388:
    // 0x2ee388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee38c:
    // 0x2ee38c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee390:
    // 0x2ee390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee394:
    // 0x2ee394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee398:
    // 0x2ee398: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ee398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_2ee39c:
    // 0x2ee39c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee3a0:
    // 0x2ee3a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3a4:
    // 0x2ee3a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2ee3a8:
    // 0x2ee3a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2ee3ac:
    // 0x2ee3ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2ee3b0:
    // 0x2ee3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2ee3b4:
    // 0x2ee3b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ee3b8:
    // 0x2ee3b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ee3b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2ee3bc:
    // 0x2ee3bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2ee3c0:
    // 0x2ee3c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3c4:
    // 0x2ee3c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3c8:
    // 0x2ee3c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ee3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2ee3cc:
    // 0x2ee3cc: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2ee3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2ee3d0:
    // 0x2ee3d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ee3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee3d4:
    // 0x2ee3d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3d8:
    // 0x2ee3d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3dc:
    // 0x2ee3dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee3dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee3e0:
    // 0x2ee3e0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ee3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2ee3e4:
    // 0x2ee3e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ee3e8:
    // 0x2ee3e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ee3ec:
    // 0x2ee3ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee3f0:
    // 0x2ee3f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ee3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ee3f4:
    // 0x2ee3f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ee3f8:
    // 0x2ee3f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee3fc:
    // 0x2ee3fc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_2ee400:
    // 0x2ee400: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ee400u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_2ee404:
    // 0x2ee404: 0xc0634c8  jal         func_18D320
label_2ee408:
    if (ctx->pc == 0x2EE408u) {
        ctx->pc = 0x2EE40Cu;
        goto label_2ee40c;
    }
    ctx->pc = 0x2EE404u;
    SET_GPR_U32(ctx, 31, 0x2EE40Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EE404u, 0x2EE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE40Cu;
label_2ee40c:
    // 0x2ee40c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ee40cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2ee410:
    // 0x2ee410: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2ee414:
    // 0x2ee414: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ee414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
label_2ee418:
    // 0x2ee418: 0x1203003c  beq         $s0, $v1, . + 4 + (0x3C << 2)
label_2ee41c:
    if (ctx->pc == 0x2EE41Cu) {
        ctx->pc = 0x2EE420u;
        goto label_2ee420;
    }
    ctx->pc = 0x2EE418u;
    {
        const bool branch_taken_0x2ee418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee418) {
            ctx->pc = 0x2EE50Cu;
            goto label_2ee50c;
        }
    }
    ctx->pc = 0x2EE420u;
label_2ee420:
    // 0x2ee420: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2ee420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2ee424:
    // 0x2ee424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ee428:
    // 0x2ee428: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ee428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
label_2ee42c:
    // 0x2ee42c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee430:
    // 0x2ee430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee434:
    // 0x2ee434: 0x0  nop
    ctx->pc = 0x2ee434u;
    // NOP
label_2ee438:
    // 0x2ee438: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ee438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
label_2ee43c:
    // 0x2ee43c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee440:
    // 0x2ee440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee444:
    // 0x2ee444: 0x0  nop
    ctx->pc = 0x2ee444u;
    // NOP
label_2ee448:
    // 0x2ee448: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ee448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
label_2ee44c:
    // 0x2ee44c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2ee450:
    // 0x2ee450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee454:
    // 0x2ee454: 0x0  nop
    ctx->pc = 0x2ee454u;
    // NOP
label_2ee458:
    // 0x2ee458: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ee458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ee45c:
    // 0x2ee45c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2ee45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_2ee460:
    // 0x2ee460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee464:
    // 0x2ee464: 0x0  nop
    ctx->pc = 0x2ee464u;
    // NOP
label_2ee468:
    // 0x2ee468: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2ee468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_2ee46c:
    // 0x2ee46c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ee46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ee470:
    // 0x2ee470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ee474:
    // 0x2ee474: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee478:
    // 0x2ee478: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ee478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ee47c:
    // 0x2ee47c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2ee47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_2ee480:
    // 0x2ee480: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee484:
    // 0x2ee484: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2ee484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_2ee488:
    // 0x2ee488: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee48c:
    // 0x2ee48c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2ee48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_2ee490:
    // 0x2ee490: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee494:
    // 0x2ee494: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2ee494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
label_2ee498:
    // 0x2ee498: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee49c:
    // 0x2ee49c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ee49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4a0:
    // 0x2ee4a0: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2ee4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_2ee4a4:
    // 0x2ee4a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee4a8:
    // 0x2ee4a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2ee4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4ac:
    // 0x2ee4ac: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2ee4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_2ee4b0:
    // 0x2ee4b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee4b4:
    // 0x2ee4b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ee4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4b8:
    // 0x2ee4b8: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2ee4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
label_2ee4bc:
    // 0x2ee4bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ee4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ee4c0:
    // 0x2ee4c0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2ee4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_2ee4c4:
    // 0x2ee4c4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2ee4c8:
    // 0x2ee4c8: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2ee4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_2ee4cc:
    // 0x2ee4cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2ee4d0:
    // 0x2ee4d0: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2ee4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2ee4d4:
    // 0x2ee4d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ee4d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2ee4d8:
    // 0x2ee4d8: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2ee4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2ee4dc:
    // 0x2ee4dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ee4e0:
    // 0x2ee4e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2ee4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2ee4e4:
    // 0x2ee4e4: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2ee4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2ee4e8:
    // 0x2ee4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ee4ec:
    // 0x2ee4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee4f0:
    // 0x2ee4f0: 0x40f809  jalr        $v0
label_2ee4f4:
    if (ctx->pc == 0x2EE4F4u) {
        ctx->pc = 0x2EE4F8u;
        goto label_2ee4f8;
    }
    ctx->pc = 0x2EE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4F0u, 0x2EE4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE4F8u;
label_2ee4f8:
    // 0x2ee4f8: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2ee4fc:
    // 0x2ee4fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ee500:
    // 0x2ee500: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2ee500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2ee504:
    // 0x2ee504: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ee508:
    if (ctx->pc == 0x2EE508u) {
        ctx->pc = 0x2EE50Cu;
        goto label_2ee50c;
    }
    ctx->pc = 0x2EE504u;
    {
        const bool branch_taken_0x2ee504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee504) {
            ctx->pc = 0x2EE514u;
            goto label_2ee514;
        }
    }
    ctx->pc = 0x2EE50Cu;
label_2ee50c:
    // 0x2ee50c: 0x10000001  b           . + 4 + (0x1 << 2)
label_2ee510:
    if (ctx->pc == 0x2EE510u) {
        ctx->pc = 0x2EE514u;
        goto label_2ee514;
    }
    ctx->pc = 0x2EE50Cu;
    {
        const bool branch_taken_0x2ee50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee50c) {
            ctx->pc = 0x2EE514u;
            goto label_2ee514;
        }
    }
    ctx->pc = 0x2EE514u;
label_2ee514:
    // 0x2ee514: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2ee514u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee518:
    // 0x2ee518: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee51c:
    // 0x2ee51c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ee51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee520:
    // 0x2ee520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee524:
    // 0x2ee524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee528:
    // 0x2ee528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee52c:
    // 0x2ee52c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2ee530:
    // 0x2ee530: 0x3e00008  jr          $ra
label_2ee534:
    if (ctx->pc == 0x2EE534u) {
        ctx->pc = 0x2EE538u;
        goto label_fallthrough_0x2ee530;
    }
    ctx->pc = 0x2EE530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ee530:
    ctx->pc = 0x2EE538u;
}
