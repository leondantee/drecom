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

// Function: entry_001bbb94
// Address: 0x1bbb94 - 0x1bbba0
void entry_001bbb94_0x1bbb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbb94_0x1bbb94");
#endif

    switch (ctx->pc) {
        case 0x1bbb9cu: goto label_1bbb9c;
        default: break;
    }

    ctx->pc = 0x1bbb94u;

    // 0x1bbb94: 0xc0c5244  jal         func_314910
    ctx->pc = 0x1BBB94u;
    SET_GPR_U32(ctx, 31, 0x1BBB9Cu);
    ctx->pc = 0x314910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314910u, 0x1BBB94u, 0x1BBB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB9Cu;
label_1bbb9c:
    // 0x1bbb9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bbb9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bbba0u;
}
