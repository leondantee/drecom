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

// Function: entry_001253b4
// Address: 0x1253b4 - 0x1253c8
void entry_001253b4_0x1253b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001253b4_0x1253b4");
#endif

    switch (ctx->pc) {
        case 0x1253c4u: goto label_1253c4;
        default: break;
    }

    ctx->pc = 0x1253b4u;

    // 0x1253b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1253b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1253bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1253BCu, 0x1253C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253C4u;
label_1253c4:
    // 0x1253c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1253c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x1253c8u;
}
