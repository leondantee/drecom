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

// Function: entry_00257ef0
// Address: 0x257ef0 - 0x257f0c
void entry_00257ef0_0x257ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257ef0_0x257ef0");
#endif

    switch (ctx->pc) {
        case 0x257ef8u: goto label_257ef8;
        default: break;
    }

    ctx->pc = 0x257ef0u;

    // 0x257ef0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x257EF0u;
    SET_GPR_U32(ctx, 31, 0x257EF8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x257EF8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x257EF8u) { return; }
    ctx->pc = 0x257EF8u;
label_257ef8:
    // 0x257ef8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x257ef8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f00: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x257f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x257f04: 0x3e00008  jr          $ra
    ctx->pc = 0x257F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F0Cu;
}
