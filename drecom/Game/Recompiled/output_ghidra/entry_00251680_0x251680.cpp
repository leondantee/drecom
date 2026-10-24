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

// Function: entry_00251680
// Address: 0x251680 - 0x25168c
void entry_00251680_0x251680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251680_0x251680");
#endif

    switch (ctx->pc) {
        case 0x251688u: goto label_251688;
        default: break;
    }

    ctx->pc = 0x251680u;

    // 0x251680: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251680u;
    SET_GPR_U32(ctx, 31, 0x251688u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251680u, 0x251688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251688u;
label_251688:
    // 0x251688: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25168cu;
}
