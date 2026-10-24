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

// Function: entry_0030b384
// Address: 0x30b384 - 0x30b3a4
void entry_0030b384_0x30b384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b384_0x30b384");
#endif

    switch (ctx->pc) {
        case 0x30b38cu: goto label_30b38c;
        default: break;
    }

    ctx->pc = 0x30b384u;

    // 0x30b384: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x30B384u;
    SET_GPR_U32(ctx, 31, 0x30B38Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x30B384u, 0x30B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B38Cu;
label_30b38c:
    // 0x30b38c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x30b38cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b398: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30b39c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B3A4u;
}
