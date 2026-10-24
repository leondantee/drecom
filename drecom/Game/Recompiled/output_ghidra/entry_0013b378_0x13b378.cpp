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

// Function: entry_0013b378
// Address: 0x13b378 - 0x13b3c8
void entry_0013b378_0x13b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b378_0x13b378");
#endif

    switch (ctx->pc) {
        case 0x13b388u: goto label_13b388;
        case 0x13b394u: goto label_13b394;
        case 0x13b3a8u: goto label_13b3a8;
        case 0x13b3b4u: goto label_13b3b4;
        default: break;
    }

    ctx->pc = 0x13b378u;

    // 0x13b378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b380: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13B380u;
    SET_GPR_U32(ctx, 31, 0x13B388u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13B380u, 0x13B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B388u;
label_13b388:
    // 0x13b388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b38c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13B38Cu;
    SET_GPR_U32(ctx, 31, 0x13B394u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13B38Cu, 0x13B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B394u;
label_13b394:
    // 0x13b394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13b394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13b398: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13b398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b39c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b3a0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13B3A0u;
    SET_GPR_U32(ctx, 31, 0x13B3A8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13B3A0u, 0x13B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3A8u;
label_13b3a8:
    // 0x13b3a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13b3a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b3ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13B3ACu;
    SET_GPR_U32(ctx, 31, 0x13B3B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13B3ACu, 0x13B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B3B4u;
label_13b3b4:
    // 0x13b3b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b3b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13b3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13b3bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B3BCu;
    {
        const bool branch_taken_0x13b3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b3bc) {
            ctx->pc = 0x13B3DCu;
            return;
        }
    }
    ctx->pc = 0x13B3C4u;
    // 0x13b3c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x13b3c8u;
}
