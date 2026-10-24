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

// Function: entry_0030a850
// Address: 0x30a850 - 0x30a8a8
void entry_0030a850_0x30a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a850_0x30a850");
#endif

    switch (ctx->pc) {
        case 0x30a864u: goto label_30a864;
        case 0x30a898u: goto label_30a898;
        default: break;
    }

    ctx->pc = 0x30a850u;

    // 0x30a850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a854: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x30a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x30a858: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30a858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a85c: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x30A85Cu;
    SET_GPR_U32(ctx, 31, 0x30A864u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x30A85Cu, 0x30A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A864u;
label_30a864:
    // 0x30a864: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a868: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x30a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x30a86c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30a870: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30a874: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x30a874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x30a878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a87c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a880: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30a880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30a884: 0x24065a3b  addiu       $a2, $zero, 0x5A3B
    ctx->pc = 0x30a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23099));
    // 0x30a888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a88c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30a88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30a890: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30A890u;
    SET_GPR_U32(ctx, 31, 0x30A898u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30A890u, 0x30A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A898u;
label_30a898:
    // 0x30a898: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a89c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30a89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30a8a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30a8a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30a8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30a8a8u;
}
