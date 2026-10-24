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

// Function: entry_0035f258
// Address: 0x35f258 - 0x35f284
void entry_0035f258_0x35f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f258_0x35f258");
#endif

    ctx->pc = 0x35f258u;

    // 0x35f258: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x35f258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x35f25c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x35F25Cu;
    {
        const bool branch_taken_0x35f25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f25c) {
            ctx->pc = 0x35F238u;
            return;
        }
    }
    ctx->pc = 0x35F264u;
    // 0x35f264: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x35f264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35f268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f26c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35f26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f278: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F284u;
}
