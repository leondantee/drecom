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

// Function: entry_002d1744
// Address: 0x2d1744 - 0x2d1798
void entry_002d1744_0x2d1744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1744_0x2d1744");
#endif

    switch (ctx->pc) {
        case 0x2d1764u: goto label_2d1764;
        case 0x2d1770u: goto label_2d1770;
        case 0x2d1780u: goto label_2d1780;
        case 0x2d178cu: goto label_2d178c;
        default: break;
    }

    ctx->pc = 0x2d1744u;

    // 0x2d1744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1748: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d174c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d1750: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1750u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1754: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1758: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d175c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D175Cu;
    SET_GPR_U32(ctx, 31, 0x2D1764u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D175Cu, 0x2D1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1764u;
label_2d1764:
    // 0x2d1764: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1768: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D1768u;
    SET_GPR_U32(ctx, 31, 0x2D1770u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D1768u, 0x2D1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1770u;
label_2d1770:
    // 0x2d1770: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1774: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1774u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1778: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D1778u;
    SET_GPR_U32(ctx, 31, 0x2D1780u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D1778u, 0x2D1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1780u;
label_2d1780:
    // 0x2d1780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1784: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D1784u;
    SET_GPR_U32(ctx, 31, 0x2D178Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D1784u, 0x2D178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D178Cu;
label_2d178c:
    // 0x2d178c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1790: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D1790u;
    {
        const bool branch_taken_0x2d1790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1790) {
            ctx->pc = 0x2D1898u;
            return;
        }
    }
    ctx->pc = 0x2D1798u;
}
