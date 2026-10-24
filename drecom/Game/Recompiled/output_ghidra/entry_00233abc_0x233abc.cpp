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

// Function: entry_00233abc
// Address: 0x233abc - 0x233adc
void entry_00233abc_0x233abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233abc_0x233abc");
#endif

    switch (ctx->pc) {
        case 0x233ac4u: goto label_233ac4;
        default: break;
    }

    ctx->pc = 0x233abcu;

    // 0x233abc: 0xc096254  jal         func_258950
    ctx->pc = 0x233ABCu;
    SET_GPR_U32(ctx, 31, 0x233AC4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x233ABCu, 0x233AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AC4u;
label_233ac4:
    // 0x233ac4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x233ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233ad0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x233ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x233AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233ADCu;
}
