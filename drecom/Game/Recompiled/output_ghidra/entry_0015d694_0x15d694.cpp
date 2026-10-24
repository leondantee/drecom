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

// Function: entry_0015d694
// Address: 0x15d694 - 0x15d76c
void entry_0015d694_0x15d694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d694_0x15d694");
#endif

    switch (ctx->pc) {
        case 0x15d6a4u: goto label_15d6a4;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6f0u: goto label_15d6f0;
        case 0x15d724u: goto label_15d724;
        case 0x15d73cu: goto label_15d73c;
        default: break;
    }

    ctx->pc = 0x15d694u;

    // 0x15d694: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d698: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d69c: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D69Cu;
    SET_GPR_U32(ctx, 31, 0x15D6A4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D69Cu, 0x15D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6A4u;
label_15d6a4:
    // 0x15d6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d6a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d6ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d6b0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d6b4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d6b8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D6B8u;
    SET_GPR_U32(ctx, 31, 0x15D6C0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D6B8u, 0x15D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6C0u;
label_15d6c0:
    // 0x15d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d6c4: 0x0  nop
    ctx->pc = 0x15d6c4u;
    // NOP
    // 0x15d6c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d6cc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d6d4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d6d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d6d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d6e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d6e4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d6e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d6e8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D6E8u;
    SET_GPR_U32(ctx, 31, 0x15D6F0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D6E8u, 0x15D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6F0u;
label_15d6f0:
    // 0x15d6f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15d6f4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d6f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d700: 0x0  nop
    ctx->pc = 0x15d700u;
    // NOP
    // 0x15d704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d708: 0x0  nop
    ctx->pc = 0x15d708u;
    // NOP
    // 0x15d70c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D70Cu;
    {
        const bool branch_taken_0x15d70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d70c) {
            ctx->pc = 0x15D76Cu;
            return;
        }
    }
    ctx->pc = 0x15D714u;
    // 0x15d714: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d718: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d71c: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D71Cu;
    SET_GPR_U32(ctx, 31, 0x15D724u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D724u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D724u) { return; }
    ctx->pc = 0x15D724u;
label_15d724:
    // 0x15d724: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d72c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d730: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d734: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D734u;
    SET_GPR_U32(ctx, 31, 0x15D73Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D73Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D73Cu) { return; }
    ctx->pc = 0x15D73Cu;
label_15d73c:
    // 0x15d73c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d740: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d744: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d750: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d758: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d75c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d760: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d768: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x15d76cu;
}
