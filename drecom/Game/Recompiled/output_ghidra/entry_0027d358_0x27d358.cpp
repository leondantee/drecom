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

// Function: entry_0027d358
// Address: 0x27d358 - 0x27d378
void entry_0027d358_0x27d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d358_0x27d358");
#endif

    switch (ctx->pc) {
        case 0x27d370u: goto label_27d370;
        default: break;
    }

    ctx->pc = 0x27d358u;

    // 0x27d358: 0x1200ffcc  beqz        $s0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27D358u;
    {
        const bool branch_taken_0x27d358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d358) {
            ctx->pc = 0x27D28Cu;
            return;
        }
    }
    ctx->pc = 0x27D360u;
    // 0x27d360: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d368: 0xc084964  jal         func_212590
    ctx->pc = 0x27D368u;
    SET_GPR_U32(ctx, 31, 0x27D370u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D368u, 0x27D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D370u;
label_27d370:
    // 0x27d370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d374: 0x0  nop
    ctx->pc = 0x27d374u;
    // NOP
    ctx->pc = 0x27d378u;
}
