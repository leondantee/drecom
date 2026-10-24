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

// Function: entry_00182dc8
// Address: 0x182dc8 - 0x182df4
void entry_00182dc8_0x182dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182dc8_0x182dc8");
#endif

    switch (ctx->pc) {
        case 0x182dd4u: goto label_182dd4;
        case 0x182de0u: goto label_182de0;
        default: break;
    }

    ctx->pc = 0x182dc8u;

    // 0x182dc8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x182dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dcc: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x182DCCu;
    SET_GPR_U32(ctx, 31, 0x182DD4u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x182DCCu, 0x182DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DD4u;
label_182dd4:
    // 0x182dd4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x182dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182dd8: 0xc05f910  jal         func_17E440
    ctx->pc = 0x182DD8u;
    SET_GPR_U32(ctx, 31, 0x182DE0u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x182DD8u, 0x182DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182DE0u;
label_182de0:
    // 0x182de0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x182de0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182de8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x182dec: 0x3e00008  jr          $ra
    ctx->pc = 0x182DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182DF4u;
}
