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

// Function: entry_0012afe4
// Address: 0x12afe4 - 0x12b00c
void entry_0012afe4_0x12afe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012afe4_0x12afe4");
#endif

    switch (ctx->pc) {
        case 0x12b004u: goto label_12b004;
        default: break;
    }

    ctx->pc = 0x12afe4u;

    // 0x12afe4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afe8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aff0: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x12aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x12aff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12affc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AFFCu;
    SET_GPR_U32(ctx, 31, 0x12B004u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AFFCu, 0x12B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B004u;
label_12b004:
    // 0x12b004: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12B004u;
    {
        const bool branch_taken_0x12b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b004) {
            ctx->pc = 0x12B07Cu;
            return;
        }
    }
    ctx->pc = 0x12B00Cu;
}
