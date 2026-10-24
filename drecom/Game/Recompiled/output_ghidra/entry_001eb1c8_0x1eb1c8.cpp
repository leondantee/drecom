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

// Function: entry_001eb1c8
// Address: 0x1eb1c8 - 0x1eb2f0
void entry_001eb1c8_0x1eb1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb1c8_0x1eb1c8");
#endif

    switch (ctx->pc) {
        case 0x1eb1d8u: goto label_1eb1d8;
        case 0x1eb2c8u: goto label_1eb2c8;
        case 0x1eb2d8u: goto label_1eb2d8;
        default: break;
    }

    ctx->pc = 0x1eb1c8u;

    // 0x1eb1c8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb1ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb1d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EB1D0u;
    SET_GPR_U32(ctx, 31, 0x1EB1D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EB1D0u, 0x1EB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1D8u;
label_1eb1d8:
    // 0x1eb1d8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1dc: 0x8cc40058  lw          $a0, 0x58($a2)
    ctx->pc = 0x1eb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1eb1e0: 0x24900120  addiu       $s0, $a0, 0x120
    ctx->pc = 0x1eb1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1eb1e4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb1e8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1ec: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb1f0: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x1eb1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1eb1f4: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb1f8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eb200: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x1eb204: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb208: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1eb208u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb20c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb210: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1eb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb214: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x1eb214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1eb218: 0x8e130034  lw          $s3, 0x34($s0)
    ctx->pc = 0x1eb218u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb21c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1eb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1eb220: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1eb224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb228: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1eb228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x1eb22c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb230: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x1eb230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb238: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1eb238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb23c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EB23Cu;
    {
        const bool branch_taken_0x1eb23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb23c) {
            ctx->pc = 0x1EB2F0u;
            return;
        }
    }
    ctx->pc = 0x1EB244u;
    // 0x1eb244: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eb244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb248: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb24c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eb24cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb250: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb254: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1eb254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb258: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb25c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1eb25cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb260: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb264: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1eb264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb268: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x1eb268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb26c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1eb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1eb270: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1eb270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb274: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb278: 0xa50710a6  sh          $a3, 0x10A6($t0)
    ctx->pc = 0x1eb278u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4262), (uint16_t)GPR_U32(ctx, 7));
    // 0x1eb27c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb280: 0x90431308  lbu         $v1, 0x1308($v0)
    ctx->pc = 0x1eb280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb284: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1eb284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb288: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1eb288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb28c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1eb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eb290: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EB290u;
    {
        const bool branch_taken_0x1eb290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb290) {
            ctx->pc = 0x1EB2F0u;
            return;
        }
    }
    ctx->pc = 0x1EB298u;
    // 0x1eb298: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb29c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2a0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1eb2a4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1eb2a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eb2a8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1eb2a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1eb2ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2b0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1eb2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1eb2b4: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1eb2b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1eb2b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb2bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eb2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eb2c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EB2C0u;
    SET_GPR_U32(ctx, 31, 0x1EB2C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EB2C0u, 0x1EB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2C8u;
label_1eb2c8:
    // 0x1eb2c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb2ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb2d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EB2D0u;
    SET_GPR_U32(ctx, 31, 0x1EB2D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EB2D0u, 0x1EB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB2D8u;
label_1eb2d8:
    // 0x1eb2d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1eb2d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb2dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eb2e4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1eb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb2e8: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1eb2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1eb2ec: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1eb2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1eb2f0u;
}
