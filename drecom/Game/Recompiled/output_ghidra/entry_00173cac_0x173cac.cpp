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

// Function: entry_00173cac
// Address: 0x173cac - 0x173cc8
void entry_00173cac_0x173cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cac_0x173cac");
#endif

    switch (ctx->pc) {
        case 0x173cc0u: goto label_173cc0;
        default: break;
    }

    ctx->pc = 0x173cacu;

    // 0x173cac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cb0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x173cb4: 0x34450007  ori         $a1, $v0, 0x7
    ctx->pc = 0x173cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x173cb8: 0xc05a400  jal         func_169000
    ctx->pc = 0x173CB8u;
    SET_GPR_U32(ctx, 31, 0x173CC0u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173CB8u, 0x173CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC0u;
label_173cc0:
    // 0x173cc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173CC0u;
    {
        const bool branch_taken_0x173cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cc0) {
            ctx->pc = 0x173CDCu;
            return;
        }
    }
    ctx->pc = 0x173CC8u;
}
