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

// Function: entry_00187fe4
// Address: 0x187fe4 - 0x187ff0
void entry_00187fe4_0x187fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187fe4_0x187fe4");
#endif

    ctx->pc = 0x187fe4u;

    // 0x187fe4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x187fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x187fe8: 0xc061014  jal         func_184050
    ctx->pc = 0x187FE8u;
    SET_GPR_U32(ctx, 31, 0x187FF0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FE8u, 0x187FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF0u;
}
