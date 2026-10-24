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

// Function: entry_002a1e9c
// Address: 0x2a1e9c - 0x2a1ed8
void entry_002a1e9c_0x2a1e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1e9c_0x2a1e9c");
#endif

    switch (ctx->pc) {
        case 0x2a1ea4u: goto label_2a1ea4;
        default: break;
    }

    ctx->pc = 0x2a1e9cu;

    // 0x2a1e9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1EA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1E9Cu, 0x2A1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EA4u;
label_2a1ea4:
    // 0x2a1ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1ea8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a1eac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1eb0: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2a1eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1eb8: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2a1eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a1ebc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ec0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1ed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1ED0u;
    SET_GPR_U32(ctx, 31, 0x2A1ED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1ED0u, 0x2A1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ED8u;
}
