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

// Function: entry_0013bd18
// Address: 0x13bd18 - 0x13bd54
void entry_0013bd18_0x13bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd18_0x13bd18");
#endif

    ctx->pc = 0x13bd18u;

    // 0x13bd18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x13bd18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x13bd1c: 0x16a0ff0f  bnez        $s5, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x13BD1Cu;
    {
        const bool branch_taken_0x13bd1c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bd1c) {
            ctx->pc = 0x13B95Cu;
            return;
        }
    }
    ctx->pc = 0x13BD24u;
    // 0x13bd24: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x13bd24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13bd28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13bd28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bd2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13bd2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bd30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bd30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bd34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bd34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bd38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bd38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bd3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bd3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD54u;
}
