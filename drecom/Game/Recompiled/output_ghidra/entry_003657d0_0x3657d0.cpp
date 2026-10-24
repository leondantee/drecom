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

// Function: entry_003657d0
// Address: 0x3657d0 - 0x365820
void entry_003657d0_0x3657d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003657d0_0x3657d0");
#endif

    switch (ctx->pc) {
        case 0x3657f0u: goto label_3657f0;
        case 0x3657f8u: goto label_3657f8;
        default: break;
    }

    ctx->pc = 0x3657d0u;

    // 0x3657d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3657d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3657d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3657d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3657dc: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x3657dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x3657e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3657e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3657e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3657e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3657e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3657E8u;
    SET_GPR_U32(ctx, 31, 0x3657F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3657E8u, 0x3657F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657F0u;
label_3657f0:
    // 0x3657f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3657F0u;
    SET_GPR_U32(ctx, 31, 0x3657F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3657F0u, 0x3657F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657F8u;
label_3657f8:
    // 0x3657f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3657f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3657fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3657fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x365800: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x365800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x365804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x365804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x365808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36580c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36580cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x365810: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365814: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36581c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36581cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x365820u;
}
