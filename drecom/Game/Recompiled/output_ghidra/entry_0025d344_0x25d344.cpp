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

// Function: entry_0025d344
// Address: 0x25d344 - 0x25d364
void entry_0025d344_0x25d344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d344_0x25d344");
#endif

    switch (ctx->pc) {
        case 0x25d34cu: goto label_25d34c;
        default: break;
    }

    ctx->pc = 0x25d344u;

    // 0x25d344: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x25D344u;
    SET_GPR_U32(ctx, 31, 0x25D34Cu);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x25D344u, 0x25D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D34Cu;
label_25d34c:
    // 0x25d34c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x25d34cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25d350: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x25d350u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d35c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D364u;
}
