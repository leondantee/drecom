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

// Function: entry_001ee620
// Address: 0x1ee620 - 0x1ee648
void entry_001ee620_0x1ee620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee620_0x1ee620");
#endif

    switch (ctx->pc) {
        case 0x1ee640u: goto label_1ee640;
        default: break;
    }

    ctx->pc = 0x1ee620u;

    // 0x1ee620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee624: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee628: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ee628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ee62c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1ee62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1ee630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee634: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee638: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE638u;
    SET_GPR_U32(ctx, 31, 0x1EE640u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE638u, 0x1EE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE640u;
label_1ee640:
    // 0x1ee640: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE640u;
    {
        const bool branch_taken_0x1ee640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee640) {
            ctx->pc = 0x1EE6A8u;
            return;
        }
    }
    ctx->pc = 0x1EE648u;
}
