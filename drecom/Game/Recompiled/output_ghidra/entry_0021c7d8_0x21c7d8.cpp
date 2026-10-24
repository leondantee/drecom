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

// Function: entry_0021c7d8
// Address: 0x21c7d8 - 0x21c800
void entry_0021c7d8_0x21c7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c7d8_0x21c7d8");
#endif

    ctx->pc = 0x21c7d8u;

    // 0x21c7d8: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x21c7dc: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x21C7DCu;
    {
        const bool branch_taken_0x21c7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c7dc) {
            ctx->pc = 0x21C6A4u;
            return;
        }
    }
    ctx->pc = 0x21C7E4u;
    // 0x21c7e4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21c7e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c7e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c7f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C800u;
}
