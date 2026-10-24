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

// Function: entry_0014d410
// Address: 0x14d410 - 0x14d464
void entry_0014d410_0x14d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d410_0x14d410");
#endif

    switch (ctx->pc) {
        case 0x14d420u: goto label_14d420;
        case 0x14d434u: goto label_14d434;
        case 0x14d440u: goto label_14d440;
        default: break;
    }

    ctx->pc = 0x14d410u;

    // 0x14d410: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D418u;
    SET_GPR_U32(ctx, 31, 0x14D420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D418u, 0x14D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D420u;
label_14d420:
    // 0x14d420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d424: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d42c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D42Cu;
    SET_GPR_U32(ctx, 31, 0x14D434u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D42Cu, 0x14D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D434u;
label_14d434:
    // 0x14d434: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d438: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D438u;
    SET_GPR_U32(ctx, 31, 0x14D440u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D438u, 0x14D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D440u;
label_14d440:
    // 0x14d440: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d444: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14d448: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d44c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14d44cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14d450: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d454: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14d454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14d458: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D458u;
    {
        const bool branch_taken_0x14d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d458) {
            ctx->pc = 0x14D478u;
            return;
        }
    }
    ctx->pc = 0x14D460u;
    // 0x14d460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x14d464u;
}
