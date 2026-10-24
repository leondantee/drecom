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

// Function: entry_00187fd0
// Address: 0x187fd0 - 0x187fe4
void entry_00187fd0_0x187fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fd0_0x187fd0");
#endif

    switch (ctx->pc) {
        case 0x187fdcu: goto label_187fdc;
        default: break;
    }

    ctx->pc = 0x187fd0u;

    // 0x187fd0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x187fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x187fd4: 0xc061014  jal         func_184050
    ctx->pc = 0x187FD4u;
    SET_GPR_U32(ctx, 31, 0x187FDCu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FD4u, 0x187FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FDCu;
label_187fdc:
    // 0x187fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187FDCu;
    {
        const bool branch_taken_0x187fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fdc) {
            ctx->pc = 0x187FF0u;
            return;
        }
    }
    ctx->pc = 0x187FE4u;
}
