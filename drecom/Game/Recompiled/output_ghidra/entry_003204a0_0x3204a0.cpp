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

// Function: entry_003204a0
// Address: 0x3204a0 - 0x3204cc
void entry_003204a0_0x3204a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003204a0_0x3204a0");
#endif

    ctx->pc = 0x3204a0u;

    // 0x3204a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3204a4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x3204a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x3204a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3204a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3204ac: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3204acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3204b0: 0x1020ffe2  beqz        $at, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3204B0u;
    {
        const bool branch_taken_0x3204b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204b0) {
            ctx->pc = 0x32043Cu;
            return;
        }
    }
    ctx->pc = 0x3204B8u;
    // 0x3204b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3204b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3204bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3204bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3204c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3204c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3204c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3204C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3204CCu;
}
