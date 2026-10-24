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

// Function: entry_00257228
// Address: 0x257228 - 0x25724c
void entry_00257228_0x257228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257228_0x257228");
#endif

    ctx->pc = 0x257228u;

    // 0x257228: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x257228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x25722c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25722cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257230: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x257230u;
    {
        const bool branch_taken_0x257230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257230) {
            ctx->pc = 0x25720Cu;
            return;
        }
    }
    ctx->pc = 0x257238u;
    // 0x257238: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x257238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25723c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257240: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257244: 0x3e00008  jr          $ra
    ctx->pc = 0x257244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25724Cu;
}
