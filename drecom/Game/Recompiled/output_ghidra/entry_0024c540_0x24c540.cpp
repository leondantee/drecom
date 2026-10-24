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

// Function: entry_0024c540
// Address: 0x24c540 - 0x24c54c
void entry_0024c540_0x24c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c540_0x24c540");
#endif

    switch (ctx->pc) {
        case 0x24c548u: goto label_24c548;
        default: break;
    }

    ctx->pc = 0x24c540u;

    // 0x24c540: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C540u;
    SET_GPR_U32(ctx, 31, 0x24C548u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C540u, 0x24C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C548u;
label_24c548:
    // 0x24c548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24c54cu;
}
