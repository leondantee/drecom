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

// Function: entry_0013ab4c
// Address: 0x13ab4c - 0x13abb8
void entry_0013ab4c_0x13ab4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab4c_0x13ab4c");
#endif

    switch (ctx->pc) {
        case 0x13ab64u: goto label_13ab64;
        case 0x13ab74u: goto label_13ab74;
        case 0x13ab88u: goto label_13ab88;
        case 0x13ab94u: goto label_13ab94;
        case 0x13ab9cu: goto label_13ab9c;
        default: break;
    }

    ctx->pc = 0x13ab4cu;

    // 0x13ab4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab54: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x13ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13ab58: 0xc44d1b54  lwc1        $f13, 0x1B54($v0)
    ctx->pc = 0x13ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13ab5c: 0xc04ec98  jal         func_13B260
    ctx->pc = 0x13AB5Cu;
    SET_GPR_U32(ctx, 31, 0x13AB64u);
    ctx->pc = 0x13B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B260u, 0x13AB5Cu, 0x13AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB64u;
label_13ab64:
    // 0x13ab64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13ab68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ab6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13AB6Cu;
    SET_GPR_U32(ctx, 31, 0x13AB74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13AB6Cu, 0x13AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB74u;
label_13ab74:
    // 0x13ab74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13ab74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13ab78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ab80: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x13AB80u;
    SET_GPR_U32(ctx, 31, 0x13AB88u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x13AB80u, 0x13AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB88u;
label_13ab88:
    // 0x13ab88: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13ab88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ab8c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13AB8Cu;
    SET_GPR_U32(ctx, 31, 0x13AB94u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13AB8Cu, 0x13AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB94u;
label_13ab94:
    // 0x13ab94: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x13AB94u;
    SET_GPR_U32(ctx, 31, 0x13AB9Cu);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x13AB94u, 0x13AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB9Cu;
label_13ab9c:
    // 0x13ab9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13ab9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13aba0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13aba4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x13aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13aba8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13abac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13ABACu;
    {
        const bool branch_taken_0x13abac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abac) {
            ctx->pc = 0x13ABB8u;
            return;
        }
    }
    ctx->pc = 0x13ABB4u;
    // 0x13abb4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x13abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x13abb8u;
}
