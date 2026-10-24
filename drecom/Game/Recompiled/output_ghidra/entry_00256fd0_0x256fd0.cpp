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

// Function: entry_00256fd0
// Address: 0x256fd0 - 0x256ffc
void entry_00256fd0_0x256fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256fd0_0x256fd0");
#endif

    switch (ctx->pc) {
        case 0x256ff4u: goto label_256ff4;
        default: break;
    }

    ctx->pc = 0x256fd0u;

    // 0x256fd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x256fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256fd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x256fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x256fd8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x256fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x256fdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256fe0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x256fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x256fe4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x256fe4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x256fe8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x256fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x256fec: 0xc04f734  jal         func_13DCD0
    ctx->pc = 0x256FECu;
    SET_GPR_U32(ctx, 31, 0x256FF4u);
    ctx->pc = 0x13DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCD0u, 0x256FECu, 0x256FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FF4u;
label_256ff4:
    // 0x256ff4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x256FF4u;
    {
        const bool branch_taken_0x256ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ff4) {
            ctx->pc = 0x25704Cu;
            return;
        }
    }
    ctx->pc = 0x256FFCu;
}
