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

// Function: entry_00277410
// Address: 0x277410 - 0x277430
void entry_00277410_0x277410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277410_0x277410");
#endif

    switch (ctx->pc) {
        case 0x277418u: goto label_277418;
        default: break;
    }

    ctx->pc = 0x277410u;

    // 0x277410: 0xc0848cc  jal         func_212330
    ctx->pc = 0x277410u;
    SET_GPR_U32(ctx, 31, 0x277418u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x277410u, 0x277418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277418u;
label_277418:
    // 0x277418: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27741c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27741cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277424: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x277424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x277428: 0x3e00008  jr          $ra
    ctx->pc = 0x277428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277430u;
}
