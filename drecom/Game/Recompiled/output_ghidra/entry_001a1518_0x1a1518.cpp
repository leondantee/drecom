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

// Function: entry_001a1518
// Address: 0x1a1518 - 0x1a1528
void entry_001a1518_0x1a1518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1518_0x1a1518");
#endif

    switch (ctx->pc) {
        case 0x1a1524u: goto label_1a1524;
        default: break;
    }

    ctx->pc = 0x1a1518u;

    // 0x1a1518: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a1518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a151c: 0xc0685c0  jal         func_1A1700
    ctx->pc = 0x1A151Cu;
    SET_GPR_U32(ctx, 31, 0x1A1524u);
    ctx->pc = 0x1A1700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1700u, 0x1A151Cu, 0x1A1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1524u;
label_1a1524:
    // 0x1a1524: 0x0  nop
    ctx->pc = 0x1a1524u;
    // NOP
    ctx->pc = 0x1a1528u;
}
