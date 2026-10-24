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

// Function: entry_0037ca40
// Address: 0x37ca40 - 0x37ca4c
void entry_0037ca40_0x37ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ca40_0x37ca40");
#endif

    ctx->pc = 0x37ca40u;

    // 0x37ca40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ca44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37CA44u;
    SET_GPR_U32(ctx, 31, 0x37CA4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37CA44u, 0x37CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA4Cu;
}
