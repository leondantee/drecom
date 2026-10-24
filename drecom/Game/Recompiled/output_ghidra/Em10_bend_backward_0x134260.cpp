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

// Function: Em10_bend_backward
// Address: 0x134260 - 0x134efc
void Em10_bend_backward_0x134260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_bend_backward_0x134260");
#endif

    switch (ctx->pc) {
        case 0x1342e4u: goto label_1342e4;
        default: break;
    }

    ctx->pc = 0x134260u;

    // 0x134260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134264: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x134264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x134268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13426c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x13426cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x134270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134274: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x134274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x134278: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x134278u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13427c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134280: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x134280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x134284: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x134284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x134288: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x134288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13428c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13428Cu;
    {
        const bool branch_taken_0x13428c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13428c) {
            ctx->pc = 0x1342A0u;
            goto label_1342a0;
        }
    }
    ctx->pc = 0x134294u;
    // 0x134294: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x134294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x134298: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x134298u;
    {
        const bool branch_taken_0x134298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134298) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x1342A0u;
label_1342a0:
    // 0x1342a0: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x1342a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1342a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1342a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1342a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1342ac: 0x10830173  beq         $a0, $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x1342ACu;
    {
        const bool branch_taken_0x1342ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342ac) {
            ctx->pc = 0x13487Cu;
            goto label_13487c;
        }
    }
    ctx->pc = 0x1342B4u;
    // 0x1342b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1342b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1342b8: 0x10830147  beq         $a0, $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x1342B8u;
    {
        const bool branch_taken_0x1342b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342b8) {
            ctx->pc = 0x1347D8u;
            goto label_1347d8;
        }
    }
    ctx->pc = 0x1342C0u;
    // 0x1342c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1342c4: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1342C4u;
    {
        const bool branch_taken_0x1342c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342c4) {
            ctx->pc = 0x134434u;
            goto label_134434;
        }
    }
    ctx->pc = 0x1342CCu;
    // 0x1342cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1342CCu;
    {
        const bool branch_taken_0x1342cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342cc) {
            ctx->pc = 0x1342DCu;
            goto label_1342dc;
        }
    }
    ctx->pc = 0x1342D4u;
    // 0x1342d4: 0x10000304  b           . + 4 + (0x304 << 2)
    ctx->pc = 0x1342D4u;
    {
        const bool branch_taken_0x1342d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342d4) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x1342DCu;
label_1342dc:
    // 0x1342dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1342DCu;
    SET_GPR_U32(ctx, 31, 0x1342E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1342DCu, 0x1342E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342E4u;
label_1342e4:
    // 0x1342e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1342e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1342e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1342e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342ec: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1342ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1342f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342f4: 0xa2030095  sb          $v1, 0x95($s0)
    ctx->pc = 0x1342f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x1342f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1342f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1342fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1342fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134300: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134304: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13430c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134310: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134314: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13431c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134320: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134324: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x134328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13432c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x13432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134330: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134334: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x134338: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x134338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x13433c: 0x92030095  lbu         $v1, 0x95($s0)
    ctx->pc = 0x13433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 149)));
    // 0x134340: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x134340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x134344: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x134344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134348: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x134348u;
    {
        const bool branch_taken_0x134348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x134348) {
            ctx->pc = 0x1343F0u;
            goto label_1343f0;
        }
    }
    ctx->pc = 0x134350u;
    // 0x134350: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134354: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x134354u;
    {
        const bool branch_taken_0x134354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x134354) {
            ctx->pc = 0x1343B8u;
            goto label_1343b8;
        }
    }
    ctx->pc = 0x13435Cu;
    // 0x13435c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134360: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x134360u;
    {
        const bool branch_taken_0x134360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x134360) {
            ctx->pc = 0x134398u;
            goto label_134398;
        }
    }
    ctx->pc = 0x134368u;
    // 0x134368: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134368u;
    {
        const bool branch_taken_0x134368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134368) {
            ctx->pc = 0x134378u;
            goto label_134378;
        }
    }
    ctx->pc = 0x134370u;
    // 0x134370: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x134370u;
    {
        const bool branch_taken_0x134370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134370) {
            ctx->pc = 0x134420u;
            goto label_134420;
        }
    }
    ctx->pc = 0x134378u;
label_134378:
    // 0x134378: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x13437c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x13437cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x134380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134388: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13438c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x13438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134390: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x134390u;
    {
        const bool branch_taken_0x134390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134390) {
            ctx->pc = 0x134420u;
            goto label_134420;
        }
    }
    ctx->pc = 0x134398u;
label_134398:
    // 0x134398: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x134398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x13439c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343a8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1343a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343ac: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1343acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1343b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1343B0u;
    {
        const bool branch_taken_0x1343b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343b0) {
            ctx->pc = 0x134420u;
            goto label_134420;
        }
    }
    ctx->pc = 0x1343B8u;
label_1343b8:
    // 0x1343b8: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x1343bc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343c8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1343c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343cc: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1343ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1343d0: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x1343d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x1343d4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343e0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343e4: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1343e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1343e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1343E8u;
    {
        const bool branch_taken_0x1343e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343e8) {
            ctx->pc = 0x134420u;
            goto label_134420;
        }
    }
    ctx->pc = 0x1343F0u;
label_1343f0:
    // 0x1343f0: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1343f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134400: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134404: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134408: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x134408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x13440c: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x13440cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x134410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134414: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134418: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13441c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x13441cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
label_134420:
    // 0x134420: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134424: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x134424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134428: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x134428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13442c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134430: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x134430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_134434:
    // 0x134434: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134438: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13443c: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x13443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134444: 0x0  nop
    ctx->pc = 0x134444u;
    // NOP
    // 0x134448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13444c: 0x0  nop
    ctx->pc = 0x13444cu;
    // NOP
    // 0x134450: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134450u;
    {
        const bool branch_taken_0x134450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134450) {
            ctx->pc = 0x1344C8u;
            goto label_1344c8;
        }
    }
    ctx->pc = 0x134458u;
    // 0x134458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13445c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134460: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134464: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134468: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x13446c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13446cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134470: 0x0  nop
    ctx->pc = 0x134470u;
    // NOP
    // 0x134474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134478: 0x0  nop
    ctx->pc = 0x134478u;
    // NOP
    // 0x13447c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x13447Cu;
    {
        const bool branch_taken_0x13447c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13447c) {
            ctx->pc = 0x1344B0u;
            goto label_1344b0;
        }
    }
    ctx->pc = 0x134484u;
    // 0x134484: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134488: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x134488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x13448c: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x13448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134490: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134494: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13449c: 0x0  nop
    ctx->pc = 0x13449cu;
    // NOP
    // 0x1344a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1344a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1344a4: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1344a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1344a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1344A8u;
    {
        const bool branch_taken_0x1344a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344a8) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x1344B0u;
label_1344b0:
    // 0x1344b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1344b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1344b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1344b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1344b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1344bc: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x1344bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x1344c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1344C0u;
    {
        const bool branch_taken_0x1344c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1344c0) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x1344C8u;
label_1344c8:
    // 0x1344c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1344c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1344cc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1344d0: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x1344d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1344d4: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1344d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1344d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1344dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1344dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1344e0: 0x0  nop
    ctx->pc = 0x1344e0u;
    // NOP
    // 0x1344e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1344e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1344e8: 0x0  nop
    ctx->pc = 0x1344e8u;
    // NOP
    // 0x1344ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1344ECu;
    {
        const bool branch_taken_0x1344ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1344ec) {
            ctx->pc = 0x134520u;
            goto label_134520;
        }
    }
    ctx->pc = 0x1344F4u;
    // 0x1344f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1344f8: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x1344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1344fc: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x1344fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134500: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134504: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13450c: 0x0  nop
    ctx->pc = 0x13450cu;
    // NOP
    // 0x134510: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134514: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x134514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x134518: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134518u;
    {
        const bool branch_taken_0x134518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134518) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x134520u;
label_134520:
    // 0x134520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134524: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134528: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13452c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x13452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
label_134530:
    // 0x134530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134534: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134538: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13453c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13453cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134540: 0x0  nop
    ctx->pc = 0x134540u;
    // NOP
    // 0x134544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134548: 0x0  nop
    ctx->pc = 0x134548u;
    // NOP
    // 0x13454c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x13454Cu;
    {
        const bool branch_taken_0x13454c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13454c) {
            ctx->pc = 0x1345C4u;
            goto label_1345c4;
        }
    }
    ctx->pc = 0x134554u;
    // 0x134554: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134558: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x134558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x13455c: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x13455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134560: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134564: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13456c: 0x0  nop
    ctx->pc = 0x13456cu;
    // NOP
    // 0x134570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134574: 0x0  nop
    ctx->pc = 0x134574u;
    // NOP
    // 0x134578: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134578u;
    {
        const bool branch_taken_0x134578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134578) {
            ctx->pc = 0x1345ACu;
            goto label_1345ac;
        }
    }
    ctx->pc = 0x134580u;
    // 0x134580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134584: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134588: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x134588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13458c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x13458cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134590: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134598: 0x0  nop
    ctx->pc = 0x134598u;
    // NOP
    // 0x13459c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13459cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1345a0: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x1345a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1345a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1345A4u;
    {
        const bool branch_taken_0x1345a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345a4) {
            ctx->pc = 0x13462Cu;
            goto label_13462c;
        }
    }
    ctx->pc = 0x1345ACu;
label_1345ac:
    // 0x1345ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1345acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1345b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1345b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1345b8: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1345b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1345bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x13462Cu;
            goto label_13462c;
        }
    }
    ctx->pc = 0x1345C4u;
label_1345c4:
    // 0x1345c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345c8: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1345cc: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x1345ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1345d0: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1345d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1345d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1345d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1345d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1345d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1345dc: 0x0  nop
    ctx->pc = 0x1345dcu;
    // NOP
    // 0x1345e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1345e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1345e4: 0x0  nop
    ctx->pc = 0x1345e4u;
    // NOP
    // 0x1345e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1345E8u;
    {
        const bool branch_taken_0x1345e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1345e8) {
            ctx->pc = 0x13461Cu;
            goto label_13461c;
        }
    }
    ctx->pc = 0x1345F0u;
    // 0x1345f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345f4: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1345f8: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x1345f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1345fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134600: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134608: 0x0  nop
    ctx->pc = 0x134608u;
    // NOP
    // 0x13460c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134610: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x134610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x134614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134614u;
    {
        const bool branch_taken_0x134614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134614) {
            ctx->pc = 0x13462Cu;
            goto label_13462c;
        }
    }
    ctx->pc = 0x13461Cu;
label_13461c:
    // 0x13461c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13461cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134624: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134628: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
label_13462c:
    // 0x13462c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134630: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134634: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13463c: 0x0  nop
    ctx->pc = 0x13463cu;
    // NOP
    // 0x134640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134644: 0x0  nop
    ctx->pc = 0x134644u;
    // NOP
    // 0x134648: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134648u;
    {
        const bool branch_taken_0x134648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134648) {
            ctx->pc = 0x1346C0u;
            goto label_1346c0;
        }
    }
    ctx->pc = 0x134650u;
    // 0x134650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134654: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134658: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13465c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x13465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134660: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134668: 0x0  nop
    ctx->pc = 0x134668u;
    // NOP
    // 0x13466c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13466cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134670: 0x0  nop
    ctx->pc = 0x134670u;
    // NOP
    // 0x134674: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134674u;
    {
        const bool branch_taken_0x134674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134674) {
            ctx->pc = 0x1346A8u;
            goto label_1346a8;
        }
    }
    ctx->pc = 0x13467Cu;
    // 0x13467c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134680: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134684: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134688: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x13468c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x13468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134694: 0x0  nop
    ctx->pc = 0x134694u;
    // NOP
    // 0x134698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13469c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x13469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x1346a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1346A0u;
    {
        const bool branch_taken_0x1346a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346a0) {
            ctx->pc = 0x134728u;
            goto label_134728;
        }
    }
    ctx->pc = 0x1346A8u;
label_1346a8:
    // 0x1346a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1346a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1346ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1346acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1346b0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1346b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1346b4: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x1346b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x1346b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1346B8u;
    {
        const bool branch_taken_0x1346b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346b8) {
            ctx->pc = 0x134728u;
            goto label_134728;
        }
    }
    ctx->pc = 0x1346C0u;
label_1346c0:
    // 0x1346c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1346c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1346c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1346c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1346c8: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x1346c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1346cc: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1346ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1346d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1346d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1346d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1346d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1346d8: 0x0  nop
    ctx->pc = 0x1346d8u;
    // NOP
    // 0x1346dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1346dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1346e0: 0x0  nop
    ctx->pc = 0x1346e0u;
    // NOP
    // 0x1346e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1346E4u;
    {
        const bool branch_taken_0x1346e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1346e4) {
            ctx->pc = 0x134718u;
            goto label_134718;
        }
    }
    ctx->pc = 0x1346ECu;
    // 0x1346ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1346ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1346f0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1346f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1346f4: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x1346f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1346f8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1346fc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1346fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134704: 0x0  nop
    ctx->pc = 0x134704u;
    // NOP
    // 0x134708: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13470c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x13470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134710u;
    {
        const bool branch_taken_0x134710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134710) {
            ctx->pc = 0x134728u;
            goto label_134728;
        }
    }
    ctx->pc = 0x134718u;
label_134718:
    // 0x134718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13471c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134720: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134724: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
label_134728:
    // 0x134728: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13472c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13472Cu;
    {
        const bool branch_taken_0x13472c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13472c) {
            ctx->pc = 0x134748u;
            goto label_134748;
        }
    }
    ctx->pc = 0x134734u;
    // 0x134734: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13473c: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x13473cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134740: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x134740u;
    {
        const bool branch_taken_0x134740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134740) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x134748u;
label_134748:
    // 0x134748: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13474c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x134750: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x134754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x134754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x134758: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x134758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13475c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x13475cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x134760: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x134760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x134764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13476c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134770: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134778: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13477c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134780: 0xe4600d9c  swc1        $f0, 0xD9C($v1)
    ctx->pc = 0x134780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3484), bits); }
    // 0x134784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13478c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134790: 0xe46013dc  swc1        $f0, 0x13DC($v1)
    ctx->pc = 0x134790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5084), bits); }
    // 0x134794: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134798: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13479c: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x13479cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1347a0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347a4: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x1347a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347ac: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1347acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347b0: 0x94830dc0  lhu         $v1, 0xDC0($a0)
    ctx->pc = 0x1347b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3520)));
    // 0x1347b4: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347b8: 0xa4830dc0  sh          $v1, 0xDC0($a0)
    ctx->pc = 0x1347b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3520), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347c0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347c4: 0x94831400  lhu         $v1, 0x1400($a0)
    ctx->pc = 0x1347c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5120)));
    // 0x1347c8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1347c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1347cc: 0xa4831400  sh          $v1, 0x1400($a0)
    ctx->pc = 0x1347ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1347d0: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1347D0u;
    {
        const bool branch_taken_0x1347d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1347d0) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x1347D8u;
label_1347d8:
    // 0x1347d8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1347d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1347dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1347dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1347e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347e4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347e8: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x1347e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x1347ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1347f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1347f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1347f4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1347f8: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1347f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1347fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134800: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134804: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134808: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x13480c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134810: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134814: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134818: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13481c: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x13481cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x134820: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x134820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x134824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13482c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134830: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13483c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134840: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x134840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x134844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13484c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134850: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x134850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    // 0x134854: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134858: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13485c: 0x94830460  lhu         $v1, 0x460($a0)
    ctx->pc = 0x13485cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x134860: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x134860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x134864: 0xa4830460  sh          $v1, 0x460($a0)
    ctx->pc = 0x134864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1120), (uint16_t)GPR_U32(ctx, 3));
    // 0x134868: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x134868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13486c: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x13486cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134870: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x134870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x134874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x134874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x134878: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x134878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_13487c:
    // 0x13487c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134880: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134884: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13488c: 0x0  nop
    ctx->pc = 0x13488cu;
    // NOP
    // 0x134890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134894: 0x0  nop
    ctx->pc = 0x134894u;
    // NOP
    // 0x134898: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134898u;
    {
        const bool branch_taken_0x134898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134898) {
            ctx->pc = 0x134910u;
            goto label_134910;
        }
    }
    ctx->pc = 0x1348A0u;
    // 0x1348a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1348a4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1348a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1348a8: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x1348a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1348ac: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1348b0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1348b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1348b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348b8: 0x0  nop
    ctx->pc = 0x1348b8u;
    // NOP
    // 0x1348bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1348bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1348c0: 0x0  nop
    ctx->pc = 0x1348c0u;
    // NOP
    // 0x1348c4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1348C4u;
    {
        const bool branch_taken_0x1348c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1348c4) {
            ctx->pc = 0x1348F8u;
            goto label_1348f8;
        }
    }
    ctx->pc = 0x1348CCu;
    // 0x1348cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1348d0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1348d4: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x1348d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1348d8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1348dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1348dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1348e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1348e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348e4: 0x0  nop
    ctx->pc = 0x1348e4u;
    // NOP
    // 0x1348e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1348e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1348ec: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1348ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1348f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1348F0u;
    {
        const bool branch_taken_0x1348f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1348f0) {
            ctx->pc = 0x134978u;
            goto label_134978;
        }
    }
    ctx->pc = 0x1348F8u;
label_1348f8:
    // 0x1348f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1348f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134900: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134904: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134908: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134908u;
    {
        const bool branch_taken_0x134908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134908) {
            ctx->pc = 0x134978u;
            goto label_134978;
        }
    }
    ctx->pc = 0x134910u;
label_134910:
    // 0x134910: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134914: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134918: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x134918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13491c: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134920: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134928: 0x0  nop
    ctx->pc = 0x134928u;
    // NOP
    // 0x13492c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13492cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134930: 0x0  nop
    ctx->pc = 0x134930u;
    // NOP
    // 0x134934: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134934u;
    {
        const bool branch_taken_0x134934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134934) {
            ctx->pc = 0x134968u;
            goto label_134968;
        }
    }
    ctx->pc = 0x13493Cu;
    // 0x13493c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134940: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134944: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x134944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134948: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x13494c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x13494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134954: 0x0  nop
    ctx->pc = 0x134954u;
    // NOP
    // 0x134958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13495c: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x13495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x134960: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134960u;
    {
        const bool branch_taken_0x134960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134960) {
            ctx->pc = 0x134978u;
            goto label_134978;
        }
    }
    ctx->pc = 0x134968u;
label_134968:
    // 0x134968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13496c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134970: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134974: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
label_134978:
    // 0x134978: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13497c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134980: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134984: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134988: 0x0  nop
    ctx->pc = 0x134988u;
    // NOP
    // 0x13498c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13498cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134990: 0x0  nop
    ctx->pc = 0x134990u;
    // NOP
    // 0x134994: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134994u;
    {
        const bool branch_taken_0x134994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134994) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13499Cu;
    // 0x13499c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1349a4: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x1349a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349a8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1349ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1349b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1349b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349b4: 0x0  nop
    ctx->pc = 0x1349b4u;
    // NOP
    // 0x1349b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1349b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1349bc: 0x0  nop
    ctx->pc = 0x1349bcu;
    // NOP
    // 0x1349c0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1349C0u;
    {
        const bool branch_taken_0x1349c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1349c0) {
            ctx->pc = 0x1349F4u;
            goto label_1349f4;
        }
    }
    ctx->pc = 0x1349C8u;
    // 0x1349c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349cc: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1349d0: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x1349d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349d4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1349d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1349d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1349dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1349dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349e0: 0x0  nop
    ctx->pc = 0x1349e0u;
    // NOP
    // 0x1349e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1349e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1349e8: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x1349e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1349ec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1349ECu;
    {
        const bool branch_taken_0x1349ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1349ec) {
            ctx->pc = 0x134A74u;
            goto label_134a74;
        }
    }
    ctx->pc = 0x1349F4u;
label_1349f4:
    // 0x1349f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1349f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349fc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a00: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134a04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134A04u;
    {
        const bool branch_taken_0x134a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a04) {
            ctx->pc = 0x134A74u;
            goto label_134a74;
        }
    }
    ctx->pc = 0x134A0Cu;
label_134a0c:
    // 0x134a0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a10: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a14: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a18: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134a1c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a24: 0x0  nop
    ctx->pc = 0x134a24u;
    // NOP
    // 0x134a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a2c: 0x0  nop
    ctx->pc = 0x134a2cu;
    // NOP
    // 0x134a30: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134A64u;
            goto label_134a64;
        }
    }
    ctx->pc = 0x134A38u;
    // 0x134a38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a3c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a40: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x134a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a44: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134a48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a50: 0x0  nop
    ctx->pc = 0x134a50u;
    // NOP
    // 0x134a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134a58: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x134a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x134a5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134A5Cu;
    {
        const bool branch_taken_0x134a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a5c) {
            ctx->pc = 0x134A74u;
            goto label_134a74;
        }
    }
    ctx->pc = 0x134A64u;
label_134a64:
    // 0x134a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a6c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a70: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
label_134a74:
    // 0x134a74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a78: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a7c: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a84: 0x0  nop
    ctx->pc = 0x134a84u;
    // NOP
    // 0x134a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a8c: 0x0  nop
    ctx->pc = 0x134a8cu;
    // NOP
    // 0x134a90: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134A90u;
    {
        const bool branch_taken_0x134a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a90) {
            ctx->pc = 0x134B08u;
            goto label_134b08;
        }
    }
    ctx->pc = 0x134A98u;
    // 0x134a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a9c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134aa0: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x134aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134aa4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134aa8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ab0: 0x0  nop
    ctx->pc = 0x134ab0u;
    // NOP
    // 0x134ab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134ab8: 0x0  nop
    ctx->pc = 0x134ab8u;
    // NOP
    // 0x134abc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134ABCu;
    {
        const bool branch_taken_0x134abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134abc) {
            ctx->pc = 0x134AF0u;
            goto label_134af0;
        }
    }
    ctx->pc = 0x134AC4u;
    // 0x134ac4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ac8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134acc: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ad0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ad4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134adc: 0x0  nop
    ctx->pc = 0x134adcu;
    // NOP
    // 0x134ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134ae4: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x134ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134ae8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134B70u;
            goto label_134b70;
        }
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134af8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134afc: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x134b00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134B00u;
    {
        const bool branch_taken_0x134b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b00) {
            ctx->pc = 0x134B70u;
            goto label_134b70;
        }
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b0c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b10: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b14: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134b18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b20: 0x0  nop
    ctx->pc = 0x134b20u;
    // NOP
    // 0x134b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134b28: 0x0  nop
    ctx->pc = 0x134b28u;
    // NOP
    // 0x134b2c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134B2Cu;
    {
        const bool branch_taken_0x134b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134b2c) {
            ctx->pc = 0x134B60u;
            goto label_134b60;
        }
    }
    ctx->pc = 0x134B34u;
    // 0x134b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b38: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b3c: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b40: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134b44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b4c: 0x0  nop
    ctx->pc = 0x134b4cu;
    // NOP
    // 0x134b50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134b54: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x134b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134b58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134B58u;
    {
        const bool branch_taken_0x134b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b58) {
            ctx->pc = 0x134B70u;
            goto label_134b70;
        }
    }
    ctx->pc = 0x134B60u;
label_134b60:
    // 0x134b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b68: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b6c: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x134b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
label_134b70:
    // 0x134b70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b74: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b78: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b80: 0x0  nop
    ctx->pc = 0x134b80u;
    // NOP
    // 0x134b84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134b88: 0x0  nop
    ctx->pc = 0x134b88u;
    // NOP
    // 0x134b8c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134B8Cu;
    {
        const bool branch_taken_0x134b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134b8c) {
            ctx->pc = 0x134C04u;
            goto label_134c04;
        }
    }
    ctx->pc = 0x134B94u;
    // 0x134b94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b9c: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ba0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ba4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bac: 0x0  nop
    ctx->pc = 0x134bacu;
    // NOP
    // 0x134bb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134bb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134bb4: 0x0  nop
    ctx->pc = 0x134bb4u;
    // NOP
    // 0x134bb8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134BB8u;
    {
        const bool branch_taken_0x134bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134bb8) {
            ctx->pc = 0x134BECu;
            goto label_134bec;
        }
    }
    ctx->pc = 0x134BC0u;
    // 0x134bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134bc4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134bc8: 0xc481043c  lwc1        $f1, 0x43C($a0)
    ctx->pc = 0x134bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134bcc: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134bd0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bd8: 0x0  nop
    ctx->pc = 0x134bd8u;
    // NOP
    // 0x134bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134be0: 0xe480043c  swc1        $f0, 0x43C($a0)
    ctx->pc = 0x134be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x134be4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134C6Cu;
            goto label_134c6c;
        }
    }
    ctx->pc = 0x134BECu;
label_134bec:
    // 0x134bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134bf4: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134bf8: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134bfc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134C6Cu;
            goto label_134c6c;
        }
    }
    ctx->pc = 0x134C04u;
label_134c04:
    // 0x134c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c08: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c0c: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c10: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134c14: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134c18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x134c18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c1c: 0x0  nop
    ctx->pc = 0x134c1cu;
    // NOP
    // 0x134c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134c24: 0x0  nop
    ctx->pc = 0x134c24u;
    // NOP
    // 0x134c28: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134C28u;
    {
        const bool branch_taken_0x134c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134c28) {
            ctx->pc = 0x134C5Cu;
            goto label_134c5c;
        }
    }
    ctx->pc = 0x134C30u;
    // 0x134c30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c34: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c38: 0xc481043c  lwc1        $f1, 0x43C($a0)
    ctx->pc = 0x134c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c3c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134c40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c48: 0x0  nop
    ctx->pc = 0x134c48u;
    // NOP
    // 0x134c4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134c50: 0xe480043c  swc1        $f0, 0x43C($a0)
    ctx->pc = 0x134c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x134c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134C54u;
    {
        const bool branch_taken_0x134c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c54) {
            ctx->pc = 0x134C6Cu;
            goto label_134c6c;
        }
    }
    ctx->pc = 0x134C5Cu;
label_134c5c:
    // 0x134c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c64: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c68: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
label_134c6c:
    // 0x134c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c74: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c7c: 0x0  nop
    ctx->pc = 0x134c7cu;
    // NOP
    // 0x134c80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134c84: 0x0  nop
    ctx->pc = 0x134c84u;
    // NOP
    // 0x134c88: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134C88u;
    {
        const bool branch_taken_0x134c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134c88) {
            ctx->pc = 0x134D00u;
            goto label_134d00;
        }
    }
    ctx->pc = 0x134C90u;
    // 0x134c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c94: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c98: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c9c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ca0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ca8: 0x0  nop
    ctx->pc = 0x134ca8u;
    // NOP
    // 0x134cac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134cb0: 0x0  nop
    ctx->pc = 0x134cb0u;
    // NOP
    // 0x134cb4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134CB4u;
    {
        const bool branch_taken_0x134cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134cb4) {
            ctx->pc = 0x134CE8u;
            goto label_134ce8;
        }
    }
    ctx->pc = 0x134CBCu;
    // 0x134cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134cc0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134cc4: 0xc4810440  lwc1        $f1, 0x440($a0)
    ctx->pc = 0x134cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134cc8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ccc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134cd4: 0x0  nop
    ctx->pc = 0x134cd4u;
    // NOP
    // 0x134cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134cdc: 0xe4800440  swc1        $f0, 0x440($a0)
    ctx->pc = 0x134cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x134ce0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134CE0u;
    {
        const bool branch_taken_0x134ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ce0) {
            ctx->pc = 0x134D68u;
            goto label_134d68;
        }
    }
    ctx->pc = 0x134CE8u;
label_134ce8:
    // 0x134ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134cec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134cf0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134cf4: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x134cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x134cf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134CF8u;
    {
        const bool branch_taken_0x134cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf8) {
            ctx->pc = 0x134D68u;
            goto label_134d68;
        }
    }
    ctx->pc = 0x134D00u;
label_134d00:
    // 0x134d00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d08: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d0c: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134d10: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d18: 0x0  nop
    ctx->pc = 0x134d18u;
    // NOP
    // 0x134d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d20: 0x0  nop
    ctx->pc = 0x134d20u;
    // NOP
    // 0x134d24: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134D24u;
    {
        const bool branch_taken_0x134d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134d24) {
            ctx->pc = 0x134D58u;
            goto label_134d58;
        }
    }
    ctx->pc = 0x134D2Cu;
    // 0x134d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d30: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d34: 0xc4810440  lwc1        $f1, 0x440($a0)
    ctx->pc = 0x134d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d38: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134d3c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d44: 0x0  nop
    ctx->pc = 0x134d44u;
    // NOP
    // 0x134d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134d4c: 0xe4800440  swc1        $f0, 0x440($a0)
    ctx->pc = 0x134d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x134d50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134D50u;
    {
        const bool branch_taken_0x134d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d50) {
            ctx->pc = 0x134D68u;
            goto label_134d68;
        }
    }
    ctx->pc = 0x134D58u;
label_134d58:
    // 0x134d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d60: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d64: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x134d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
label_134d68:
    // 0x134d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d6c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d70: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d78: 0x0  nop
    ctx->pc = 0x134d78u;
    // NOP
    // 0x134d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d80: 0x0  nop
    ctx->pc = 0x134d80u;
    // NOP
    // 0x134d84: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134D84u;
    {
        const bool branch_taken_0x134d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134d84) {
            ctx->pc = 0x134DFCu;
            goto label_134dfc;
        }
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d90: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d94: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d98: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134d9c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134da4: 0x0  nop
    ctx->pc = 0x134da4u;
    // NOP
    // 0x134da8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134dac: 0x0  nop
    ctx->pc = 0x134dacu;
    // NOP
    // 0x134db0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134db0) {
            ctx->pc = 0x134DE4u;
            goto label_134de4;
        }
    }
    ctx->pc = 0x134DB8u;
    // 0x134db8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134dbc: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134dc0: 0xc4a10444  lwc1        $f1, 0x444($a1)
    ctx->pc = 0x134dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134dc4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134dc8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x134dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134dcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x134dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134dd0: 0x0  nop
    ctx->pc = 0x134dd0u;
    // NOP
    // 0x134dd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134dd8: 0xe4a00444  swc1        $f0, 0x444($a1)
    ctx->pc = 0x134dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1092), bits); }
    // 0x134ddc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134DDCu;
    {
        const bool branch_taken_0x134ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ddc) {
            ctx->pc = 0x134E64u;
            goto label_134e64;
        }
    }
    ctx->pc = 0x134DE4u;
label_134de4:
    // 0x134de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134de8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134dec: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134df0: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x134df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    // 0x134df4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134DF4u;
    {
        const bool branch_taken_0x134df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134df4) {
            ctx->pc = 0x134E64u;
            goto label_134e64;
        }
    }
    ctx->pc = 0x134DFCu;
label_134dfc:
    // 0x134dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e00: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e04: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e08: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134e0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e14: 0x0  nop
    ctx->pc = 0x134e14u;
    // NOP
    // 0x134e18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134e1c: 0x0  nop
    ctx->pc = 0x134e1cu;
    // NOP
    // 0x134e20: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134E20u;
    {
        const bool branch_taken_0x134e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134e20) {
            ctx->pc = 0x134E54u;
            goto label_134e54;
        }
    }
    ctx->pc = 0x134E28u;
    // 0x134e28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e2c: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e30: 0xc4a10444  lwc1        $f1, 0x444($a1)
    ctx->pc = 0x134e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e34: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134e38: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x134e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134e3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x134e3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e40: 0x0  nop
    ctx->pc = 0x134e40u;
    // NOP
    // 0x134e44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134e48: 0xe4a00444  swc1        $f0, 0x444($a1)
    ctx->pc = 0x134e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1092), bits); }
    // 0x134e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134E4Cu;
    {
        const bool branch_taken_0x134e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e4c) {
            ctx->pc = 0x134E64u;
            goto label_134e64;
        }
    }
    ctx->pc = 0x134E54u;
label_134e54:
    // 0x134e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e60: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x134e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
label_134e64:
    // 0x134e64: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134e68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134E68u;
    {
        const bool branch_taken_0x134e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e68) {
            ctx->pc = 0x134E84u;
            goto label_134e84;
        }
    }
    ctx->pc = 0x134E70u;
    // 0x134e70: 0x96030080  lhu         $v1, 0x80($s0)
    ctx->pc = 0x134e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x134e74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134e78: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x134e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x134e7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x134E7Cu;
    {
        const bool branch_taken_0x134e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e7c) {
            ctx->pc = 0x134EE8u;
            goto label_134ee8;
        }
    }
    ctx->pc = 0x134E84u;
label_134e84:
    // 0x134e84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x134e8c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x134e90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x134e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x134e94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x134e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x134e98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x134e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x134e9c: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x134e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x134ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ea4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x134ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ea8: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134eac: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134eb8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134ebc: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134ec0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ec4: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134ec8: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x134ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134ecc: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x134eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x134ed0: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x134ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x134ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134ed8: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134edc: 0x94a40460  lhu         $a0, 0x460($a1)
    ctx->pc = 0x134edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1120)));
    // 0x134ee0: 0x308300fd  andi        $v1, $a0, 0xFD
    ctx->pc = 0x134ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x134ee4: 0xa4a30460  sh          $v1, 0x460($a1)
    ctx->pc = 0x134ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1120), (uint16_t)GPR_U32(ctx, 3));
label_134ee8:
    // 0x134ee8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x134ee8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134ef0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x134EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134EFCu;
}
