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

// Function: entry_00140100
// Address: 0x140100 - 0x140138
void entry_00140100_0x140100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140100_0x140100");
#endif

    ctx->pc = 0x140100u;

    // 0x140100: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x140104: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x140108: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x140108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x14010c: 0x16a0ffe5  bnez        $s5, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14010Cu;
    {
        const bool branch_taken_0x14010c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x14010c) {
            ctx->pc = 0x1400A4u;
            return;
        }
    }
    ctx->pc = 0x140114u;
    // 0x140114: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140118: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14011c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14011cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14012c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140130: 0x3e00008  jr          $ra
    ctx->pc = 0x140130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140138u;
}
