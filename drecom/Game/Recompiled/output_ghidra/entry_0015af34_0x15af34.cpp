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

// Function: entry_0015af34
// Address: 0x15af34 - 0x15af40
void entry_0015af34_0x15af34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af34_0x15af34");
#endif

    ctx->pc = 0x15af34u;

    // 0x15af34: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15af34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15af38: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x15AF38u;
    SET_GPR_U32(ctx, 31, 0x15AF40u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x15AF38u, 0x15AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF40u;
}
