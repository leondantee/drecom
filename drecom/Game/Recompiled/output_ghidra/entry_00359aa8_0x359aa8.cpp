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

// Function: entry_00359aa8
// Address: 0x359aa8 - 0x359af4
void entry_00359aa8_0x359aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359aa8_0x359aa8");
#endif

    switch (ctx->pc) {
        case 0x359ae4u: goto label_359ae4;
        default: break;
    }

    ctx->pc = 0x359aa8u;

    // 0x359aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x359aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359aac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x359aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x359ab0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x359ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x359ab4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x359ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x359ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359abc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x359abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x359ac0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x359ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359ac4: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x359ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x359ac8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x359ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x359acc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ad0: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x359ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x359ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359ad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359adc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x359ADCu;
    SET_GPR_U32(ctx, 31, 0x359AE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x359ADCu, 0x359AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AE4u;
label_359ae4:
    // 0x359ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x359ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ae8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359af0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x359af4u;
}
