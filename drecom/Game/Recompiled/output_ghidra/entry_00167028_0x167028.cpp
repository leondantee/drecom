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

// Function: entry_00167028
// Address: 0x167028 - 0x16704c
void entry_00167028_0x167028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167028_0x167028");
#endif

    switch (ctx->pc) {
        case 0x167030u: goto label_167030;
        default: break;
    }

    ctx->pc = 0x167028u;

    // 0x167028: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x167028u;
    SET_GPR_U32(ctx, 31, 0x167030u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x167028u, 0x167030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167030u;
label_167030:
    // 0x167030: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x167030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16703c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16703cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167040: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167044: 0x3e00008  jr          $ra
    ctx->pc = 0x167044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16704Cu;
}
