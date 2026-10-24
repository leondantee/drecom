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

// Function: entry_00306bd0
// Address: 0x306bd0 - 0x306c38
void entry_00306bd0_0x306bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306bd0_0x306bd0");
#endif

    switch (ctx->pc) {
        case 0x306be4u: goto label_306be4;
        case 0x306c28u: goto label_306c28;
        default: break;
    }

    ctx->pc = 0x306bd0u;

    // 0x306bd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x306bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x306bd4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x306bd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bdc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x306BDCu;
    SET_GPR_U32(ctx, 31, 0x306BE4u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x306BDCu, 0x306BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BE4u;
label_306be4:
    // 0x306be4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x306be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306be8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x306be8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x306bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x306bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306bf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306bf8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x306bf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x306bfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306c00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306c00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306c04: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x306c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x306c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c0c: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x306c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x306c10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x306c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x306c18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x306c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306c1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x306c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306c20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x306C20u;
    SET_GPR_U32(ctx, 31, 0x306C28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x306C20u, 0x306C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C28u;
label_306c28:
    // 0x306c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306c2c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x306c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x306c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306c34: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x306c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x306c38u;
}
