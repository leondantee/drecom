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

// Function: entry_0025a578
// Address: 0x25a578 - 0x25a5b0
void entry_0025a578_0x25a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a578_0x25a578");
#endif

    ctx->pc = 0x25a578u;

    // 0x25a578: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x25a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x25a57c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x25a57cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a580: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x25A580u;
    {
        const bool branch_taken_0x25a580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a580) {
            ctx->pc = 0x25A520u;
            return;
        }
    }
    ctx->pc = 0x25A588u;
    // 0x25a588: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25a588u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a58c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25a58cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a590: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25a590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25a594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a59c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a5a4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x25a5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25a5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A5B0u;
}
