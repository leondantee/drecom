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

// Function: entry_002d7b54
// Address: 0x2d7b54 - 0x2d7bc0
void entry_002d7b54_0x2d7b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7b54_0x2d7b54");
#endif

    switch (ctx->pc) {
        case 0x2d7b74u: goto label_2d7b74;
        case 0x2d7bb8u: goto label_2d7bb8;
        default: break;
    }

    ctx->pc = 0x2d7b54u;

    // 0x2d7b54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b5c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d7b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d7b60: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d7b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d7b64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d7b68: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d7b6c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D7B6Cu;
    SET_GPR_U32(ctx, 31, 0x2D7B74u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D7B6Cu, 0x2D7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B74u;
label_2d7b74:
    // 0x2d7b74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d7b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d7b78: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d7b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d7b7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d7b7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d7b80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b84: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d7b84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7b88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b8c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d7b8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d7b90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D7B90u;
    {
        const bool branch_taken_0x2d7b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7b90) {
            ctx->pc = 0x2D7BC0u;
            return;
        }
    }
    ctx->pc = 0x2D7B98u;
    // 0x2d7b98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7b9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7ba0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d7ba4: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x2d7ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
    // 0x2d7ba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7bac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d7bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d7bb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D7BB0u;
    SET_GPR_U32(ctx, 31, 0x2D7BB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D7BB0u, 0x2D7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BB8u;
label_2d7bb8:
    // 0x2d7bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7BB8u;
    {
        const bool branch_taken_0x2d7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bb8) {
            ctx->pc = 0x2D7BE0u;
            return;
        }
    }
    ctx->pc = 0x2D7BC0u;
}
