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

// Function: entry_0012d394
// Address: 0x12d394 - 0x12d3ec
void entry_0012d394_0x12d394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d394_0x12d394");
#endif

    switch (ctx->pc) {
        case 0x12d3a4u: goto label_12d3a4;
        case 0x12d3b0u: goto label_12d3b0;
        case 0x12d3c0u: goto label_12d3c0;
        case 0x12d3ccu: goto label_12d3cc;
        default: break;
    }

    ctx->pc = 0x12d394u;

    // 0x12d394: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d398: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d39c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12D39Cu;
    SET_GPR_U32(ctx, 31, 0x12D3A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12D39Cu, 0x12D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3A4u;
label_12d3a4:
    // 0x12d3a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12D3A8u;
    SET_GPR_U32(ctx, 31, 0x12D3B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12D3A8u, 0x12D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3B0u;
label_12d3b0:
    // 0x12d3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d3b8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D3B8u;
    SET_GPR_U32(ctx, 31, 0x12D3C0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D3B8u, 0x12D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3C0u;
label_12d3c0:
    // 0x12d3c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D3C4u;
    SET_GPR_U32(ctx, 31, 0x12D3CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D3C4u, 0x12D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12d3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d3d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D3D4u;
    {
        const bool branch_taken_0x12d3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3d4) {
            ctx->pc = 0x12D3ECu;
            return;
        }
    }
    ctx->pc = 0x12D3DCu;
    // 0x12d3dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d3e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12d3ecu;
}
