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

// Function: entry_0018a628
// Address: 0x18a628 - 0x18a664
void entry_0018a628_0x18a628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a628_0x18a628");
#endif

    ctx->pc = 0x18a628u;

    // 0x18a628: 0x2e03003f  sltiu       $v1, $s0, 0x3F
    ctx->pc = 0x18a628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x18a62c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A62Cu;
    {
        const bool branch_taken_0x18a62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a62c) {
            ctx->pc = 0x18A610u;
            return;
        }
    }
    ctx->pc = 0x18A634u;
    // 0x18a634: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x18a634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a638: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18a638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a63c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a658: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A664u;
}
