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

// Function: entry_0020c3b8
// Address: 0x20c3b8 - 0x20c3f8
void entry_0020c3b8_0x20c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c3b8_0x20c3b8");
#endif

    switch (ctx->pc) {
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3f0u: goto label_20c3f0;
        default: break;
    }

    ctx->pc = 0x20c3b8u;

    // 0x20c3b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20c3bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20c3c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20c3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c3c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c3c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c3c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c3cc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C3CCu;
    {
        const bool branch_taken_0x20c3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c3cc) {
            ctx->pc = 0x20C3F8u;
            return;
        }
    }
    ctx->pc = 0x20C3D4u;
    // 0x20c3d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20C3D4u;
    SET_GPR_U32(ctx, 31, 0x20C3DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20C3D4u, 0x20C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3DCu;
label_20c3dc:
    // 0x20c3dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c3e0: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20c3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20c3e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3e8: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20C3E8u;
    SET_GPR_U32(ctx, 31, 0x20C3F0u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20C3E8u, 0x20C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3F0u;
label_20c3f0:
    // 0x20c3f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c3f4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20c3f8u;
}
