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

// Function: entry_0026f130
// Address: 0x26f130 - 0x26f1bc
void entry_0026f130_0x26f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f130_0x26f130");
#endif

    switch (ctx->pc) {
        case 0x26f140u: goto label_26f140;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f160u: goto label_26f160;
        case 0x26f178u: goto label_26f178;
        default: break;
    }

    ctx->pc = 0x26f130u;

    // 0x26f130: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f138: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F138u;
    SET_GPR_U32(ctx, 31, 0x26F140u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F138u, 0x26F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F140u;
label_26f140:
    // 0x26f140: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f144: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26F144u;
    SET_GPR_U32(ctx, 31, 0x26F14Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26F144u, 0x26F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F14Cu;
label_26f14c:
    // 0x26f14c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f150: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f154: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f158: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26F158u;
    SET_GPR_U32(ctx, 31, 0x26F160u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26F158u, 0x26F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F160u;
label_26f160:
    // 0x26f160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f164: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f168: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26f16c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26f170: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26F170u;
    SET_GPR_U32(ctx, 31, 0x26F178u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26F170u, 0x26F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F178u;
label_26f178:
    // 0x26f178: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26f178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26f17c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26f180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26f180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f184: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f188: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26f188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f18c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f190: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f198: 0x0  nop
    ctx->pc = 0x26f198u;
    // NOP
    // 0x26f19c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26F19Cu;
    {
        const bool branch_taken_0x26f19c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f19c) {
            ctx->pc = 0x26F1BCu;
            return;
        }
    }
    ctx->pc = 0x26F1A4u;
    // 0x26f1a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26f1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26f1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f1ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f1b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f1b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x26f1bcu;
}
