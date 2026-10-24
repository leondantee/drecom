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

// Function: entry_0036fd20
// Address: 0x36fd20 - 0x36fe98
void entry_0036fd20_0x36fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036fd20_0x36fd20");
#endif

    switch (ctx->pc) {
        case 0x36fd4cu: goto label_36fd4c;
        case 0x36fd68u: goto label_36fd68;
        case 0x36fd80u: goto label_36fd80;
        case 0x36fe04u: goto label_36fe04;
        case 0x36fe64u: goto label_36fe64;
        case 0x36fe70u: goto label_36fe70;
        case 0x36fe7cu: goto label_36fe7c;
        case 0x36fe8cu: goto label_36fe8c;
        default: break;
    }

    ctx->pc = 0x36fd20u;

    // 0x36fd20: 0x3c023ae4  lui         $v0, 0x3AE4
    ctx->pc = 0x36fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15076 << 16));
    // 0x36fd24: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x36fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x36fd28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36fd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36fd2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd34: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x36fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x36fd38: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x36fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36fd3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36fd40: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36fd44: 0xc05c848  jal         func_172120
    ctx->pc = 0x36FD44u;
    SET_GPR_U32(ctx, 31, 0x36FD4Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x36FD44u, 0x36FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD4Cu;
label_36fd4c:
    // 0x36fd4c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36fd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36fd50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd54: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x36fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fd58: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x36fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fd5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36fd5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36fd60: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36FD60u;
    SET_GPR_U32(ctx, 31, 0x36FD68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36FD60u, 0x36FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD68u;
label_36fd68:
    // 0x36fd68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x36fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36fd70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36fd74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36fd78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36FD78u;
    SET_GPR_U32(ctx, 31, 0x36FD80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36FD78u, 0x36FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD80u;
label_36fd80:
    // 0x36fd80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36fd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fd84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd88: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x36fd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x36fd8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36fd8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fd90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fd94: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x36fd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x36fd98: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x36fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36fd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fda0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fda4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x36fda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x36fda8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fdac: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x36fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fdb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36fdb4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x36fdb4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fdb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36fdb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36fdbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36fdc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36fdc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fdc4: 0x0  nop
    ctx->pc = 0x36fdc4u;
    // NOP
    // 0x36fdc8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36fdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36fdcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fdd0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x36fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fdd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36fdd8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x36fdd8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fddc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x36fddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36fde0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36fde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36fde4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36fde8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fdec: 0x0  nop
    ctx->pc = 0x36fdecu;
    // NOP
    // 0x36fdf0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36fdf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36fdf8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x36fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36fdfc: 0xc040c24  jal         func_103090
    ctx->pc = 0x36FDFCu;
    SET_GPR_U32(ctx, 31, 0x36FE04u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x36FE04u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36FE04u) { return; }
    ctx->pc = 0x36FE04u;
label_36fe04:
    // 0x36fe04: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x36fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36fe08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36fe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36fe0c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fe10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36fe10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36fe14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36fe18: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x36fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x36fe1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36fe1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36fe20: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fe24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36fe24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36fe28: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x36fe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36fe2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe30: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x36fe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fe34: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fe38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36fe38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36fe3c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x36fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x36fe40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe44: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x36fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fe48: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36fe4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36fe4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36fe50: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x36fe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x36fe54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36fe58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36fe5c: 0xc0dbb90  jal         func_36EE40
    ctx->pc = 0x36FE5Cu;
    SET_GPR_U32(ctx, 31, 0x36FE64u);
    ctx->pc = 0x36EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EE40u, 0x36FE5Cu, 0x36FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE64u;
label_36fe64:
    // 0x36fe64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe68: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x36FE68u;
    SET_GPR_U32(ctx, 31, 0x36FE70u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x36FE68u, 0x36FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE70u;
label_36fe70:
    // 0x36fe70: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe74: 0xc0dd008  jal         func_374020
    ctx->pc = 0x36FE74u;
    SET_GPR_U32(ctx, 31, 0x36FE7Cu);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x36FE74u, 0x36FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE7Cu;
label_36fe7c:
    // 0x36fe7c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36fe80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36fe84: 0xc0dc6bc  jal         func_371AF0
    ctx->pc = 0x36FE84u;
    SET_GPR_U32(ctx, 31, 0x36FE8Cu);
    ctx->pc = 0x371AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371AF0u, 0x36FE84u, 0x36FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE8Cu;
label_36fe8c:
    // 0x36fe8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36fe90: 0xc0dd150  jal         func_374540
    ctx->pc = 0x36FE90u;
    SET_GPR_U32(ctx, 31, 0x36FE98u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x36FE90u, 0x36FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE98u;
}
