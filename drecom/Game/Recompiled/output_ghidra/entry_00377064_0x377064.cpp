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

// Function: entry_00377064
// Address: 0x377064 - 0x3770cc
void entry_00377064_0x377064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377064_0x377064");
#endif

    switch (ctx->pc) {
        case 0x377080u: goto label_377080;
        case 0x3770a8u: goto label_3770a8;
        default: break;
    }

    ctx->pc = 0x377064u;

    // 0x377064: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x377068: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x377068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x37706c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x37706cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x377074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377078: 0xc095fe0  jal         func_257F80
    ctx->pc = 0x377078u;
    SET_GPR_U32(ctx, 31, 0x377080u);
    ctx->pc = 0x257F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F80u, 0x377078u, 0x377080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377080u;
label_377080:
    // 0x377080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377084: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x377084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x377088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37708c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x37708cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x377090: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x377090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x377094: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x377094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x377098: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x377098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x37709c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x37709cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3770a0: 0xc096254  jal         func_258950
    ctx->pc = 0x3770A0u;
    SET_GPR_U32(ctx, 31, 0x3770A8u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x3770A0u, 0x3770A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3770A8u;
label_3770a8:
    // 0x3770a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3770a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3770ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3770acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3770b0: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x3770b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x3770b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3770b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3770b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3770b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3770bc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3770bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3770c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3770c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3770c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3770c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3770c8: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x3770c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    ctx->pc = 0x3770ccu;
}
