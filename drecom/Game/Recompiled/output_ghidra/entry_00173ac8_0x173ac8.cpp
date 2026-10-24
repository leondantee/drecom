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

// Function: entry_00173ac8
// Address: 0x173ac8 - 0x173b00
void entry_00173ac8_0x173ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ac8_0x173ac8");
#endif

    switch (ctx->pc) {
        case 0x173ae4u: goto label_173ae4;
        default: break;
    }

    ctx->pc = 0x173ac8u;

    // 0x173ac8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173acc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ad0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173ad4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x173ad8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173adc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x173ADCu;
    SET_GPR_U32(ctx, 31, 0x173AE4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x173ADCu, 0x173AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173aec: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x173aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x173af0: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x173af4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x173af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173af8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173AF8u;
    SET_GPR_U32(ctx, 31, 0x173B00u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173AF8u, 0x173B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B00u;
}
