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

// Function: entry_0027d168
// Address: 0x27d168 - 0x27d188
void entry_0027d168_0x27d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d168_0x27d168");
#endif

    switch (ctx->pc) {
        case 0x27d180u: goto label_27d180;
        default: break;
    }

    ctx->pc = 0x27d168u;

    // 0x27d168: 0x1200ffd4  beqz        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x27D168u;
    {
        const bool branch_taken_0x27d168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d168) {
            ctx->pc = 0x27D0BCu;
            return;
        }
    }
    ctx->pc = 0x27D170u;
    // 0x27d170: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d178: 0xc084964  jal         func_212590
    ctx->pc = 0x27D178u;
    SET_GPR_U32(ctx, 31, 0x27D180u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D178u, 0x27D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D180u;
label_27d180:
    // 0x27d180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d184: 0x0  nop
    ctx->pc = 0x27d184u;
    // NOP
    ctx->pc = 0x27d188u;
}
