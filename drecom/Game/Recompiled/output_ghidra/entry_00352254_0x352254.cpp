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

// Function: entry_00352254
// Address: 0x352254 - 0x35233c
void entry_00352254_0x352254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352254_0x352254");
#endif

    switch (ctx->pc) {
        case 0x3522b8u: goto label_3522b8;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522f4u: goto label_3522f4;
        case 0x352310u: goto label_352310;
        default: break;
    }

    ctx->pc = 0x352254u;

    // 0x352254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352258: 0x0  nop
    ctx->pc = 0x352258u;
    // NOP
    // 0x35225c: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x35225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352260: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352264: 0x0  nop
    ctx->pc = 0x352264u;
    // NOP
    // 0x352268: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x35226c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35226cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352270: 0x0  nop
    ctx->pc = 0x352270u;
    // NOP
    // 0x352274: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x352274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x352278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35227c: 0x0  nop
    ctx->pc = 0x35227cu;
    // NOP
    // 0x352280: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x352280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x352284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352288: 0x0  nop
    ctx->pc = 0x352288u;
    // NOP
    // 0x35228c: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x35228cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x352290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352294: 0x0  nop
    ctx->pc = 0x352294u;
    // NOP
    // 0x352298: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x35229c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522a0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3522a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3522a4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3522a8: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x3522a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3522ac: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3522b0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3522B0u;
    SET_GPR_U32(ctx, 31, 0x3522B8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3522B0u, 0x3522B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522B8u;
label_3522b8:
    // 0x3522b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3522b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3522bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522c0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3522c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3522c4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3522c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3522c8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3522c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3522cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3522CCu;
    SET_GPR_U32(ctx, 31, 0x3522D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3522CCu, 0x3522D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522D4u;
label_3522d4:
    // 0x3522d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3522d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3522d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3522e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3522e4: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x3522e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3522e8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3522ec: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x3522ECu;
    SET_GPR_U32(ctx, 31, 0x3522F4u);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x3522ECu, 0x3522F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522F4u;
label_3522f4:
    // 0x3522f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3522f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3522f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3522fc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3522fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352300: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352304: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x352304u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x352308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352308u;
    SET_GPR_U32(ctx, 31, 0x352310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352308u, 0x352310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352310u;
label_352310:
    // 0x352310: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x352310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x352314: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352318: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x352318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35231c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x35231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352320: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x352320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x352324: 0x0  nop
    ctx->pc = 0x352324u;
    // NOP
    // 0x352328: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x352328u;
    {
        const bool branch_taken_0x352328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x352328) {
            ctx->pc = 0x35233Cu;
            return;
        }
    }
    ctx->pc = 0x352330u;
    // 0x352330: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352334: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352338: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x352338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x35233cu;
}
