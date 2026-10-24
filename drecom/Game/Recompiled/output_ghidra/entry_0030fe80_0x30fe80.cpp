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

// Function: entry_0030fe80
// Address: 0x30fe80 - 0x30fef4
void entry_0030fe80_0x30fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fe80_0x30fe80");
#endif

    switch (ctx->pc) {
        case 0x30fe94u: goto label_30fe94;
        case 0x30fed8u: goto label_30fed8;
        default: break;
    }

    ctx->pc = 0x30fe80u;

    // 0x30fe80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fe84: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fe88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe8c: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FE8Cu;
    SET_GPR_U32(ctx, 31, 0x30FE94u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FE8Cu, 0x30FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE94u;
label_30fe94:
    // 0x30fe94: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30fe98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30fe98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30fe9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fea0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30fea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fea4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fea8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30fea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30feac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30feacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30feb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30feb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30feb4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x30feb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30febc: 0x36060600  ori         $a2, $s0, 0x600
    ctx->pc = 0x30febcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1536);
    // 0x30fec0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30fec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30fec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30feccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30fed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30FED0u;
    SET_GPR_U32(ctx, 31, 0x30FED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30FED0u, 0x30FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FED8u;
label_30fed8:
    // 0x30fed8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30fedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fee0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x30fee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x30fee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fee8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30fee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30feec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fef0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30fef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30fef4u;
}
