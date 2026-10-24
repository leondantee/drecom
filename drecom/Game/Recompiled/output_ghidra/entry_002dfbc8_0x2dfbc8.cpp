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

// Function: entry_002dfbc8
// Address: 0x2dfbc8 - 0x2dfbe0
void entry_002dfbc8_0x2dfbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfbc8_0x2dfbc8");
#endif

    switch (ctx->pc) {
        case 0x2dfbd8u: goto label_2dfbd8;
        default: break;
    }

    ctx->pc = 0x2dfbc8u;

    // 0x2dfbc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfbcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfbd0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DFBD0u;
    SET_GPR_U32(ctx, 31, 0x2DFBD8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFBD0u, 0x2DFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBD8u;
label_2dfbd8:
    // 0x2dfbd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DFBD8u;
    {
        const bool branch_taken_0x2dfbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfbd8) {
            ctx->pc = 0x2DFC0Cu;
            return;
        }
    }
    ctx->pc = 0x2DFBE0u;
}
