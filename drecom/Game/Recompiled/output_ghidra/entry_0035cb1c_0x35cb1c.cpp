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

// Function: entry_0035cb1c
// Address: 0x35cb1c - 0x35cb54
void entry_0035cb1c_0x35cb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035cb1c_0x35cb1c");
#endif

    ctx->pc = 0x35cb1cu;

    // 0x35cb1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x35cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35cb20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35cb24: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x35cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x35cb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cb2c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x35cb2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35cb30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35cb30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cb34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cb34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cb38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cb38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cb3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cb3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cb40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cb48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x35cb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35cb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x35CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CB54u;
}
