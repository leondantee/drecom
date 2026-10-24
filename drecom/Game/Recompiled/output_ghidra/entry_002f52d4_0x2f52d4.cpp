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

// Function: entry_002f52d4
// Address: 0x2f52d4 - 0x2f52e0
void entry_002f52d4_0x2f52d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f52d4_0x2f52d4");
#endif

    switch (ctx->pc) {
        case 0x2f52dcu: goto label_2f52dc;
        default: break;
    }

    ctx->pc = 0x2f52d4u;

    // 0x2f52d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F52D4u;
    SET_GPR_U32(ctx, 31, 0x2F52DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F52D4u, 0x2F52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52DCu;
label_2f52dc:
    // 0x2f52dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f52dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f52e0u;
}
