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

// Function: Pole_light_model
// Address: 0x27c130 - 0x27c43c
void Pole_light_model_0x27c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pole_light_model_0x27c130");
#endif

    switch (ctx->pc) {
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        default: break;
    }

    ctx->pc = 0x27c130u;

label_27c130:
    // 0x27c130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27c134:
    // 0x27c134: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x27c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_27c138:
    // 0x27c138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27c13c:
    // 0x27c13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27c140:
    // 0x27c140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27c144:
    // 0x27c144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27c148:
    // 0x27c148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27c14c:
    // 0x27c14c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c150:
    // 0x27c150: 0x8c32f9f0  lw          $s2, -0x610($at)
    ctx->pc = 0x27c150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965744)));
label_27c154:
    // 0x27c154: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c154u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c158:
    // 0x27c158: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c15c:
    // 0x27c15c: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c160:
    // 0x27c160: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x27c160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c164:
    // 0x27c164: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x27c164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_27c168:
    // 0x27c168: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
label_27c16c:
    if (ctx->pc == 0x27C16Cu) {
        ctx->pc = 0x27C170u;
        goto label_27c170;
    }
    ctx->pc = 0x27C168u;
    {
        const bool branch_taken_0x27c168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c168) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C170u;
label_27c170:
    // 0x27c170: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27c174:
    // 0x27c174: 0x244315c0  addiu       $v1, $v0, 0x15C0
    ctx->pc = 0x27c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
label_27c178:
    // 0x27c178: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_27c17c:
    // 0x27c17c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27c180:
    // 0x27c180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27c184:
    // 0x27c184: 0x400008  jr          $v0
label_27c188:
    if (ctx->pc == 0x27C188u) {
        ctx->pc = 0x27C18Cu;
        goto label_27c18c;
    }
    ctx->pc = 0x27C184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C18Cu;
label_27c18c:
    // 0x27c18c: 0x0  nop
    ctx->pc = 0x27c18cu;
    // NOP
label_27c190:
    // 0x27c190: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_27c194:
    // 0x27c194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c198:
    // 0x27c198: 0x0  nop
    ctx->pc = 0x27c198u;
    // NOP
label_27c19c:
    // 0x27c19c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_27c1a0:
    // 0x27c1a0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c1a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c1a4:
    // 0x27c1a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c1a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c1a8:
    // 0x27c1a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c1ac:
    // 0x27c1ac: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c1b0:
    // 0x27c1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c1b4:
    // 0x27c1b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c1b8:
    // 0x27c1b8: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6985), (uint8_t)GPR_U32(ctx, 2));
label_27c1bc:
    // 0x27c1bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c1c0:
    // 0x27c1c0: 0xa0201b4d  sb          $zero, 0x1B4D($at)
    ctx->pc = 0x27c1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6989), (uint8_t)GPR_U32(ctx, 0));
label_27c1c4:
    // 0x27c1c4: 0x10000075  b           . + 4 + (0x75 << 2)
label_27c1c8:
    if (ctx->pc == 0x27C1C8u) {
        ctx->pc = 0x27C1CCu;
        goto label_27c1cc;
    }
    ctx->pc = 0x27C1C4u;
    {
        const bool branch_taken_0x27c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1c4) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C1CCu;
label_27c1cc:
    // 0x27c1cc: 0x2e210064  sltiu       $at, $s1, 0x64
    ctx->pc = 0x27c1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_27c1d0:
    // 0x27c1d0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_27c1d4:
    if (ctx->pc == 0x27C1D4u) {
        ctx->pc = 0x27C1D8u;
        goto label_27c1d8;
    }
    ctx->pc = 0x27C1D0u;
    {
        const bool branch_taken_0x27c1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c1d0) {
            ctx->pc = 0x27C210u;
            goto label_27c210;
        }
    }
    ctx->pc = 0x27C1D8u;
label_27c1d8:
    // 0x27c1d8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x27c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_27c1dc:
    // 0x27c1dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_27c1e0:
    // 0x27c1e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27c1e4:
    // 0x27c1e4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27c1e8:
    // 0x27c1e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_27c1ec:
    // 0x27c1ec: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x27c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_27c1f0:
    // 0x27c1f0: 0x430019  multu       $v0, $v1
    ctx->pc = 0x27c1f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_27c1f4:
    // 0x27c1f4: 0x0  nop
    ctx->pc = 0x27c1f4u;
    // NOP
label_27c1f8:
    // 0x27c1f8: 0x0  nop
    ctx->pc = 0x27c1f8u;
    // NOP
label_27c1fc:
    // 0x27c1fc: 0x1010  mfhi        $v0
    ctx->pc = 0x27c1fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27c200:
    // 0x27c200: 0x28142  srl         $s0, $v0, 5
    ctx->pc = 0x27c200u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_27c204:
    // 0x27c204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27c208:
    // 0x27c208: 0x10000064  b           . + 4 + (0x64 << 2)
label_27c20c:
    if (ctx->pc == 0x27C20Cu) {
        ctx->pc = 0x27C210u;
        goto label_27c210;
    }
    ctx->pc = 0x27C208u;
    {
        const bool branch_taken_0x27c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c208) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C210u;
label_27c210:
    // 0x27c210: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x27c210u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c214:
    // 0x27c214: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27c214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27c218:
    // 0x27c218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c21c:
    // 0x27c21c: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c220:
    // 0x27c220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c224:
    // 0x27c224: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c228:
    // 0x27c228: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c228u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6985), (uint8_t)GPR_U32(ctx, 2));
label_27c22c:
    // 0x27c22c: 0x1000005b  b           . + 4 + (0x5B << 2)
label_27c230:
    if (ctx->pc == 0x27C230u) {
        ctx->pc = 0x27C234u;
        goto label_27c234;
    }
    ctx->pc = 0x27C22Cu;
    {
        const bool branch_taken_0x27c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c22c) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C234u;
label_27c234:
    // 0x27c234: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c238:
    // 0x27c238: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27c238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6986)));
label_27c23c:
    // 0x27c23c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27c23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c240:
    // 0x27c240: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_27c244:
    // 0x27c244: 0x24427610  addiu       $v0, $v0, 0x7610
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30224));
label_27c248:
    // 0x27c248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27c24c:
    // 0x27c24c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27c250:
    // 0x27c250: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x27c250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_27c254:
    // 0x27c254: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27c254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_27c258:
    // 0x27c258: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27c25c:
    // 0x27c25c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_27c260:
    // 0x27c260: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_27c264:
    // 0x27c264: 0x1000004d  b           . + 4 + (0x4D << 2)
label_27c268:
    if (ctx->pc == 0x27C268u) {
        ctx->pc = 0x27C26Cu;
        goto label_27c26c;
    }
    ctx->pc = 0x27C264u;
    {
        const bool branch_taken_0x27c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c264) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C26Cu;
label_27c26c:
    // 0x27c26c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c26cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c270:
    // 0x27c270: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x27c270u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_27c274:
    // 0x27c274: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c278:
    // 0x27c278: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c27c:
    // 0x27c27c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c280:
    // 0x27c280: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c284:
    // 0x27c284: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c284u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6985), (uint8_t)GPR_U32(ctx, 2));
label_27c288:
    // 0x27c288: 0x10000044  b           . + 4 + (0x44 << 2)
label_27c28c:
    if (ctx->pc == 0x27C28Cu) {
        ctx->pc = 0x27C290u;
        goto label_27c290;
    }
    ctx->pc = 0x27C288u;
    {
        const bool branch_taken_0x27c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c288) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C290u;
label_27c290:
    // 0x27c290: 0x2e210064  sltiu       $at, $s1, 0x64
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_27c294:
    // 0x27c294: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
label_27c298:
    if (ctx->pc == 0x27C298u) {
        ctx->pc = 0x27C29Cu;
        goto label_27c29c;
    }
    ctx->pc = 0x27C294u;
    {
        const bool branch_taken_0x27c294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c294) {
            ctx->pc = 0x27C350u;
            goto label_27c350;
        }
    }
    ctx->pc = 0x27C29Cu;
label_27c29c:
    // 0x27c29c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c2a0:
    // 0x27c2a0: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6989)));
label_27c2a4:
    // 0x27c2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c2a8:
    // 0x27c2a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c2ac:
    // 0x27c2ac: 0xa0221b4d  sb          $v0, 0x1B4D($at)
    ctx->pc = 0x27c2acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6989), (uint8_t)GPR_U32(ctx, 2));
label_27c2b0:
    // 0x27c2b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27c2b4:
    // 0x27c2b4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27c2b8:
    // 0x27c2b8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_27c2bc:
    // 0x27c2bc: 0x2621818  mult        $v1, $s3, $v0
    ctx->pc = 0x27c2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27c2c0:
    // 0x27c2c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27c2c4:
    // 0x27c2c4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x27c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_27c2c8:
    // 0x27c2c8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x27c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_27c2cc:
    // 0x27c2cc: 0x430019  multu       $v0, $v1
    ctx->pc = 0x27c2ccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_27c2d0:
    // 0x27c2d0: 0x0  nop
    ctx->pc = 0x27c2d0u;
    // NOP
label_27c2d4:
    // 0x27c2d4: 0x0  nop
    ctx->pc = 0x27c2d4u;
    // NOP
label_27c2d8:
    // 0x27c2d8: 0x1010  mfhi        $v0
    ctx->pc = 0x27c2d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27c2dc:
    // 0x27c2dc: 0x28142  srl         $s0, $v0, 5
    ctx->pc = 0x27c2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_27c2e0:
    // 0x27c2e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_27c2e4:
    // 0x27c2e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27c2e8:
    // 0x27c2e8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_27c2ec:
    if (ctx->pc == 0x27C2ECu) {
        ctx->pc = 0x27C2F0u;
        goto label_27c2f0;
    }
    ctx->pc = 0x27C2E8u;
    {
        const bool branch_taken_0x27c2e8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x27c2e8) {
            ctx->pc = 0x27C304u;
            goto label_27c304;
        }
    }
    ctx->pc = 0x27C2F0u;
label_27c2f0:
    // 0x27c2f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x27c2f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c2f4:
    // 0x27c2f4: 0x0  nop
    ctx->pc = 0x27c2f4u;
    // NOP
label_27c2f8:
    // 0x27c2f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27c2fc:
    // 0x27c2fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c300:
    if (ctx->pc == 0x27C300u) {
        ctx->pc = 0x27C304u;
        goto label_27c304;
    }
    ctx->pc = 0x27C2FCu;
    {
        const bool branch_taken_0x27c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c2fc) {
            ctx->pc = 0x27C320u;
            goto label_27c320;
        }
    }
    ctx->pc = 0x27C304u;
label_27c304:
    // 0x27c304: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_27c308:
    // 0x27c308: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x27c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_27c30c:
    // 0x27c30c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27c310:
    // 0x27c310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c314:
    // 0x27c314: 0x0  nop
    ctx->pc = 0x27c314u;
    // NOP
label_27c318:
    // 0x27c318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_27c31c:
    // 0x27c31c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27c31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27c320:
    // 0x27c320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c324:
    // 0x27c324: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_27c328:
    // 0x27c328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c32c:
    // 0x27c32c: 0x0  nop
    ctx->pc = 0x27c32cu;
    // NOP
label_27c330:
    // 0x27c330: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x27c330u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_27c334:
    // 0x27c334: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_27c338:
    // 0x27c338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c33c:
    // 0x27c33c: 0x0  nop
    ctx->pc = 0x27c33cu;
    // NOP
label_27c340:
    // 0x27c340: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27c344:
    // 0x27c344: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_27c348:
    // 0x27c348: 0x10000014  b           . + 4 + (0x14 << 2)
label_27c34c:
    if (ctx->pc == 0x27C34Cu) {
        ctx->pc = 0x27C350u;
        goto label_27c350;
    }
    ctx->pc = 0x27C348u;
    {
        const bool branch_taken_0x27c348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c348) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C350u;
label_27c350:
    // 0x27c350: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c350u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c354:
    // 0x27c354: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27c358:
    // 0x27c358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c35c:
    // 0x27c35c: 0x0  nop
    ctx->pc = 0x27c35cu;
    // NOP
label_27c360:
    // 0x27c360: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_27c364:
    // 0x27c364: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c368:
    // 0x27c368: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 6985)));
label_27c36c:
    // 0x27c36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c370:
    // 0x27c370: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_27c374:
    // 0x27c374: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c374u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6985), (uint8_t)GPR_U32(ctx, 2));
label_27c378:
    // 0x27c378: 0x10000008  b           . + 4 + (0x8 << 2)
label_27c37c:
    if (ctx->pc == 0x27C37Cu) {
        ctx->pc = 0x27C380u;
        goto label_27c380;
    }
    ctx->pc = 0x27C378u;
    {
        const bool branch_taken_0x27c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c378) {
            ctx->pc = 0x27C39Cu;
            goto label_27c39c;
        }
    }
    ctx->pc = 0x27C380u;
label_27c380:
    // 0x27c380: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_27c384:
    // 0x27c384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c388:
    // 0x27c388: 0x0  nop
    ctx->pc = 0x27c388u;
    // NOP
label_27c38c:
    // 0x27c38c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_27c390:
    // 0x27c390: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c390u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_27c394:
    // 0x27c394: 0x1000001a  b           . + 4 + (0x1A << 2)
label_27c398:
    if (ctx->pc == 0x27C398u) {
        ctx->pc = 0x27C39Cu;
        goto label_27c39c;
    }
    ctx->pc = 0x27C394u;
    {
        const bool branch_taken_0x27c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c394) {
            ctx->pc = 0x27C400u;
            goto label_27c400;
        }
    }
    ctx->pc = 0x27C39Cu;
label_27c39c:
    // 0x27c39c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x27c39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_27c3a0:
    // 0x27c3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_27c3a4:
    // 0x27c3a4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_27c3a8:
    // 0x27c3a8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x27c3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27c3ac:
    // 0x27c3ac: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27c3acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_27c3b0:
    // 0x27c3b0: 0xc096234  jal         func_2588D0
label_27c3b4:
    if (ctx->pc == 0x27C3B4u) {
        ctx->pc = 0x27C3B8u;
        goto label_27c3b8;
    }
    ctx->pc = 0x27C3B0u;
    SET_GPR_U32(ctx, 31, 0x27C3B8u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x27C3B0u, 0x27C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3B8u;
label_27c3b8:
    // 0x27c3b8: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x27c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c3bc:
    // 0x27c3bc: 0x3c023b8e  lui         $v0, 0x3B8E
    ctx->pc = 0x27c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15246 << 16));
label_27c3c0:
    // 0x27c3c0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_27c3c4:
    // 0x27c3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c3c8:
    // 0x27c3c8: 0x0  nop
    ctx->pc = 0x27c3c8u;
    // NOP
label_27c3cc:
    // 0x27c3cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c3d0:
    // 0x27c3d0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x27c3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_27c3d4:
    // 0x27c3d4: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x27c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27c3d8:
    // 0x27c3d8: 0xc058fec  jal         func_163FB0
label_27c3dc:
    if (ctx->pc == 0x27C3DCu) {
        ctx->pc = 0x27C3E0u;
        goto label_27c3e0;
    }
    ctx->pc = 0x27C3D8u;
    SET_GPR_U32(ctx, 31, 0x27C3E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27C3D8u, 0x27C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3E0u;
label_27c3e0:
    // 0x27c3e0: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x27c3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_27c3e4:
    // 0x27c3e4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3e8:
    // 0x27c3e8: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x27c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
label_27c3ec:
    // 0x27c3ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c3f0:
    // 0x27c3f0: 0xc084964  jal         func_212590
label_27c3f4:
    if (ctx->pc == 0x27C3F4u) {
        ctx->pc = 0x27C3F8u;
        goto label_27c3f8;
    }
    ctx->pc = 0x27C3F0u;
    SET_GPR_U32(ctx, 31, 0x27C3F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C3F0u, 0x27C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3F8u;
label_27c3f8:
    // 0x27c3f8: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
label_27c3fc:
    if (ctx->pc == 0x27C3FCu) {
        ctx->pc = 0x27C400u;
        goto label_27c400;
    }
    ctx->pc = 0x27C3F8u;
    {
        const bool branch_taken_0x27c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3f8) {
            ctx->pc = 0x27C158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c158;
        }
    }
    ctx->pc = 0x27C400u;
label_27c400:
    // 0x27c400: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x27c400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_27c404:
    // 0x27c404: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27c404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_27c408:
    // 0x27c408: 0xc09620c  jal         func_258830
label_27c40c:
    if (ctx->pc == 0x27C40Cu) {
        ctx->pc = 0x27C410u;
        goto label_27c410;
    }
    ctx->pc = 0x27C408u;
    SET_GPR_U32(ctx, 31, 0x27C410u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x27C408u, 0x27C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C410u;
label_27c410:
    // 0x27c410: 0xc084934  jal         func_2124D0
label_27c414:
    if (ctx->pc == 0x27C414u) {
        ctx->pc = 0x27C418u;
        goto label_27c418;
    }
    ctx->pc = 0x27C410u;
    SET_GPR_U32(ctx, 31, 0x27C418u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C410u, 0x27C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C418u;
label_27c418:
    // 0x27c418: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x27c418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27c41c:
    // 0x27c41c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27c41cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27c420:
    // 0x27c420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27c420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27c424:
    // 0x27c424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27c424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27c428:
    // 0x27c428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c42c:
    // 0x27c42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27c430:
    // 0x27c430: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27c434:
    // 0x27c434: 0x3e00008  jr          $ra
label_27c438:
    if (ctx->pc == 0x27C438u) {
        ctx->pc = 0x27C43Cu;
        goto label_fallthrough_0x27c434;
    }
    ctx->pc = 0x27C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27c434:
    ctx->pc = 0x27C43Cu;
}
