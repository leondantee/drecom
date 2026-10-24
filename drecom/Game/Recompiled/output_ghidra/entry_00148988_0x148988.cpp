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

// Function: entry_00148988
// Address: 0x148988 - 0x1489cc
void entry_00148988_0x148988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148988_0x148988");
#endif

    switch (ctx->pc) {
        case 0x1489a8u: goto label_1489a8;
        case 0x1489b8u: goto label_1489b8;
        default: break;
    }

    ctx->pc = 0x148988u;

    // 0x148988: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14898c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148994: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x148994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14899c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14899cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1489a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1489A0u;
    SET_GPR_U32(ctx, 31, 0x1489A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1489A0u, 0x1489A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489A8u;
label_1489a8:
    // 0x1489a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1489ac: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1489b0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1489B0u;
    SET_GPR_U32(ctx, 31, 0x1489B8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1489B0u, 0x1489B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1489bc: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1489bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1489c0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1489c4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1489C4u;
    SET_GPR_U32(ctx, 31, 0x1489CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1489C4u, 0x1489CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489CCu;
}
