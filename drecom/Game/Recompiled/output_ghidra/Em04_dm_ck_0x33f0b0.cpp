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

// Function: Em04_dm_ck
// Address: 0x33f0b0 - 0x33f164
void Em04_dm_ck_0x33f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em04_dm_ck_0x33f0b0");
#endif

    ctx->pc = 0x33f0b0u;

    // 0x33f0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f0b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f0b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x33f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x33f0bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f0c0: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x33f0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x33f0c4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x33F0C4u;
    {
        const bool branch_taken_0x33f0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f0c4) {
            ctx->pc = 0x33F154u;
            goto label_33f154;
        }
    }
    ctx->pc = 0x33F0CCu;
    // 0x33f0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f0d0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x33f0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f0d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f0d8: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x33f0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x33f0dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f0e0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x33f0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x33f0e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33f0e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33f0e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33f0ec: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x33F0ECu;
    {
        const bool branch_taken_0x33f0ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x33f0ec) {
            ctx->pc = 0x33F128u;
            goto label_33f128;
        }
    }
    ctx->pc = 0x33F0F4u;
    // 0x33f0f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f0f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f0fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33f0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f104: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x33f104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f10c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f114: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f11c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33f120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33F120u;
    {
        const bool branch_taken_0x33f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f120) {
            ctx->pc = 0x33F154u;
            goto label_33f154;
        }
    }
    ctx->pc = 0x33F128u;
label_33f128:
    // 0x33f128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f12c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f130: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33f130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33f134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f138: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x33f138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f140: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f144: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f148: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f150: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_33f154:
    // 0x33f154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33f15c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F164u;
}
