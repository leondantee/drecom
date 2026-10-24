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

// Function: entry_00377484
// Address: 0x377484 - 0x3774a4
void entry_00377484_0x377484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377484_0x377484");
#endif

    switch (ctx->pc) {
        case 0x37748cu: goto label_37748c;
        default: break;
    }

    ctx->pc = 0x377484u;

    // 0x377484: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x377484u;
    SET_GPR_U32(ctx, 31, 0x37748Cu);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x377484u, 0x37748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37748Cu;
label_37748c:
    // 0x37748c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x37748cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x377498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37749c: 0x3e00008  jr          $ra
    ctx->pc = 0x37749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3774A4u;
}
