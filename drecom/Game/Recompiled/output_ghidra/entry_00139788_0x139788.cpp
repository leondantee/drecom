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

// Function: entry_00139788
// Address: 0x139788 - 0x1397fc
void entry_00139788_0x139788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139788_0x139788");
#endif

    switch (ctx->pc) {
        case 0x139798u: goto label_139798;
        case 0x1397a4u: goto label_1397a4;
        case 0x1397b4u: goto label_1397b4;
        case 0x1397ccu: goto label_1397cc;
        default: break;
    }

    ctx->pc = 0x139788u;

    // 0x139788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13978c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13978cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139790: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139790u;
    SET_GPR_U32(ctx, 31, 0x139798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139790u, 0x139798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139798u;
label_139798:
    // 0x139798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13979c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13979Cu;
    SET_GPR_U32(ctx, 31, 0x1397A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13979Cu, 0x1397A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397A4u;
label_1397a4:
    // 0x1397a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1397a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1397a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1397ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1397ACu;
    SET_GPR_U32(ctx, 31, 0x1397B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1397ACu, 0x1397B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397B4u;
label_1397b4:
    // 0x1397b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1397b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397bc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1397bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1397c0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1397c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1397c4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1397C4u;
    SET_GPR_U32(ctx, 31, 0x1397CCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1397C4u, 0x1397CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1397CCu;
label_1397cc:
    // 0x1397cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1397d0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x1397d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x1397d4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1397d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x1397d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1397d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1397dc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1397e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1397e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1397e4: 0x0  nop
    ctx->pc = 0x1397e4u;
    // NOP
    // 0x1397e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1397E8u;
    {
        const bool branch_taken_0x1397e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1397e8) {
            ctx->pc = 0x1397FCu;
            return;
        }
    }
    ctx->pc = 0x1397F0u;
    // 0x1397f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1397f4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1397f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1397f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1397f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1397fcu;
}
