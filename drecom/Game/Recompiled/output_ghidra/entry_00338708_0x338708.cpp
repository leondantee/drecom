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

// Function: entry_00338708
// Address: 0x338708 - 0x338714
void entry_00338708_0x338708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338708_0x338708");
#endif

    switch (ctx->pc) {
        case 0x338710u: goto label_338710;
        default: break;
    }

    ctx->pc = 0x338708u;

    // 0x338708: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x338708u;
    SET_GPR_U32(ctx, 31, 0x338710u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x338708u, 0x338710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338710u;
label_338710:
    // 0x338710: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338710u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x338714u;
}
