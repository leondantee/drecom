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

// Function: entry_00148d0c
// Address: 0x148d0c - 0x148d50
void entry_00148d0c_0x148d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148d0c_0x148d0c");
#endif

    switch (ctx->pc) {
        case 0x148d2cu: goto label_148d2c;
        case 0x148d3cu: goto label_148d3c;
        default: break;
    }

    ctx->pc = 0x148d0cu;

    // 0x148d0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148d18: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x148d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x148d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148D24u;
    SET_GPR_U32(ctx, 31, 0x148D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148D24u, 0x148D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D2Cu;
label_148d2c:
    // 0x148d2c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x148d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x148d30: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x148d34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x148D34u;
    SET_GPR_U32(ctx, 31, 0x148D3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148D34u, 0x148D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D3Cu;
label_148d3c:
    // 0x148d3c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x148d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x148d40: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x148d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x148d44: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x148d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x148d48: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x148D48u;
    SET_GPR_U32(ctx, 31, 0x148D50u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148D48u, 0x148D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D50u;
}
