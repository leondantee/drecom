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

// Function: entry_0012b9f4
// Address: 0x12b9f4 - 0x12ba00
void entry_0012b9f4_0x12b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b9f4_0x12b9f4");
#endif

    switch (ctx->pc) {
        case 0x12b9fcu: goto label_12b9fc;
        default: break;
    }

    ctx->pc = 0x12b9f4u;

    // 0x12b9f4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B9F4u;
    SET_GPR_U32(ctx, 31, 0x12B9FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B9F4u, 0x12B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9FCu;
label_12b9fc:
    // 0x12b9fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x12ba00u;
}
