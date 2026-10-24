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

// Function: entry_0012b034
// Address: 0x12b034 - 0x12b05c
void entry_0012b034_0x12b034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b034_0x12b034");
#endif

    switch (ctx->pc) {
        case 0x12b054u: goto label_12b054;
        default: break;
    }

    ctx->pc = 0x12b034u;

    // 0x12b034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b03c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b040: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x12b044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b048: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b04c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B04Cu;
    SET_GPR_U32(ctx, 31, 0x12B054u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B04Cu, 0x12B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B054u;
label_12b054:
    // 0x12b054: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12B054u;
    {
        const bool branch_taken_0x12b054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b054) {
            ctx->pc = 0x12B07Cu;
            return;
        }
    }
    ctx->pc = 0x12B05Cu;
}
