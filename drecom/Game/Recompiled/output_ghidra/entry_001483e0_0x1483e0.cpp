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

// Function: entry_001483e0
// Address: 0x1483e0 - 0x148424
void entry_001483e0_0x1483e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001483e0_0x1483e0");
#endif

    switch (ctx->pc) {
        case 0x148400u: goto label_148400;
        case 0x148410u: goto label_148410;
        default: break;
    }

    ctx->pc = 0x1483e0u;

    // 0x1483e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1483e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1483e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1483e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1483e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1483ec: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1483f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1483f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1483f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1483f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1483F8u;
    SET_GPR_U32(ctx, 31, 0x148400u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1483F8u, 0x148400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148400u;
label_148400:
    // 0x148400: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x148400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x148404: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x148404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x148408: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x148408u;
    SET_GPR_U32(ctx, 31, 0x148410u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148408u, 0x148410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148410u;
label_148410:
    // 0x148410: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x148410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x148414: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x148414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x148418: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x14841c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x14841Cu;
    SET_GPR_U32(ctx, 31, 0x148424u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14841Cu, 0x148424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148424u;
}
