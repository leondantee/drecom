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

// Function: entry_0015f140
// Address: 0x15f140 - 0x15f1ec
void entry_0015f140_0x15f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f140_0x15f140");
#endif

    switch (ctx->pc) {
        case 0x15f194u: goto label_15f194;
        case 0x15f1a4u: goto label_15f1a4;
        case 0x15f1b8u: goto label_15f1b8;
        default: break;
    }

    ctx->pc = 0x15f140u;

    // 0x15f140: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f144: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f148: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f14c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15f14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15f150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f154: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f158: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f15c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15f160: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15f164: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x15f164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x15f168: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f16c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15f170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15f174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f178: 0x0  nop
    ctx->pc = 0x15f178u;
    // NOP
    // 0x15f17c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15f17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15f180: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f184: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f188: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x15f188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x15f18c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15F18Cu;
    SET_GPR_U32(ctx, 31, 0x15F194u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15F18Cu, 0x15F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F194u;
label_15f194:
    // 0x15f194: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x15f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f198: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x15f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15f19c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15F19Cu;
    SET_GPR_U32(ctx, 31, 0x15F1A4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15F19Cu, 0x15F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1A4u;
label_15f1a4:
    // 0x15f1a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15f1a8: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f1ac: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x15f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15f1b0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15F1B0u;
    SET_GPR_U32(ctx, 31, 0x15F1B8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15F1B0u, 0x15F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15f1bc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15f1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f1c4: 0x0  nop
    ctx->pc = 0x15f1c4u;
    // NOP
    // 0x15f1c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f1cc: 0x0  nop
    ctx->pc = 0x15f1ccu;
    // NOP
    // 0x15f1d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15F1D0u;
    {
        const bool branch_taken_0x15f1d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f1d0) {
            ctx->pc = 0x15F1ECu;
            return;
        }
    }
    ctx->pc = 0x15F1D8u;
    // 0x15f1d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15f1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f1e0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f1e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15f1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15f1e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x15f1ecu;
}
