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

// Function: entry_0015d440
// Address: 0x15d440 - 0x15d518
void entry_0015d440_0x15d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d440_0x15d440");
#endif

    switch (ctx->pc) {
        case 0x15d450u: goto label_15d450;
        case 0x15d46cu: goto label_15d46c;
        case 0x15d49cu: goto label_15d49c;
        case 0x15d4d0u: goto label_15d4d0;
        case 0x15d4e8u: goto label_15d4e8;
        default: break;
    }

    ctx->pc = 0x15d440u;

    // 0x15d440: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d444: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d448: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D448u;
    SET_GPR_U32(ctx, 31, 0x15D450u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D448u, 0x15D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D450u;
label_15d450:
    // 0x15d450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d454: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d458: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d45c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d460: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d464: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D464u;
    SET_GPR_U32(ctx, 31, 0x15D46Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D464u, 0x15D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D46Cu;
label_15d46c:
    // 0x15d46c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d470: 0x0  nop
    ctx->pc = 0x15d470u;
    // NOP
    // 0x15d474: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d478: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d47c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d480: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d484: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d488: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d48c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d490: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d490u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d494: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D494u;
    SET_GPR_U32(ctx, 31, 0x15D49Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D494u, 0x15D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D49Cu;
label_15d49c:
    // 0x15d49c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15d4a0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x15d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d4a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d4ac: 0x0  nop
    ctx->pc = 0x15d4acu;
    // NOP
    // 0x15d4b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d4b4: 0x0  nop
    ctx->pc = 0x15d4b4u;
    // NOP
    // 0x15d4b8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D4B8u;
    {
        const bool branch_taken_0x15d4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d4b8) {
            ctx->pc = 0x15D518u;
            return;
        }
    }
    ctx->pc = 0x15D4C0u;
    // 0x15d4c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4c4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4c8: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D4C8u;
    SET_GPR_U32(ctx, 31, 0x15D4D0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D4D0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D4D0u) { return; }
    ctx->pc = 0x15D4D0u;
label_15d4d0:
    // 0x15d4d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d4d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d4d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d4e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D4E0u;
    SET_GPR_U32(ctx, 31, 0x15D4E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D4E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D4E8u) { return; }
    ctx->pc = 0x15D4E8u;
label_15d4e8:
    // 0x15d4e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d4ec: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d4f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d4f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d4f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d4fc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d504: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d508: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d50c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d514: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x15d518u;
}
