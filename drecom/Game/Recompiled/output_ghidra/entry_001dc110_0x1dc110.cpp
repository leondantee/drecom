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

// Function: entry_001dc110
// Address: 0x1dc110 - 0x1dc158
void entry_001dc110_0x1dc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc110_0x1dc110");
#endif

    ctx->pc = 0x1dc110u;

    // 0x1dc110: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1dc110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc114: 0x28850002  slti        $a1, $a0, 0x2
    ctx->pc = 0x1dc114u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dc118: 0x14a0fd72  bnez        $a1, . + 4 + (-0x28E << 2)
    ctx->pc = 0x1DC118u;
    {
        const bool branch_taken_0x1dc118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc118) {
            ctx->pc = 0x1DB6E4u;
            return;
        }
    }
    ctx->pc = 0x1DC120u;
    // 0x1dc120: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc124: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1dc124u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc128: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1dc128u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc12c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dc12cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc130: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dc130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc134: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dc134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc14c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1dc14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dc150: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC158u;
}
