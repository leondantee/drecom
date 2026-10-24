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

// Function: Em05_R1_br_wait
// Address: 0x2057e0 - 0x205850
void Em05_R1_br_wait_0x2057e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_wait_0x2057e0");
#endif

    ctx->pc = 0x2057e0u;

    // 0x2057e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2057e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2057e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2057e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2057e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2057ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2057ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2057f0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2057F0u;
    {
        const bool branch_taken_0x2057f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057f0) {
            ctx->pc = 0x205844u;
            goto label_205844;
        }
    }
    ctx->pc = 0x2057F8u;
    // 0x2057f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2057f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2057fc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x205800: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x205804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x205804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x205808: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x205808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x20580c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x20580Cu;
    {
        const bool branch_taken_0x20580c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20580c) {
            ctx->pc = 0x205844u;
            goto label_205844;
        }
    }
    ctx->pc = 0x205814u;
    // 0x205814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205818: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20581c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20581cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205820: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205824: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205828: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x205828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20582c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205830: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205834: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x205834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205838: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20583c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x20583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205840: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205844:
    // 0x205844: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x205844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x205848: 0x3e00008  jr          $ra
    ctx->pc = 0x205848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205850u;
}
