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

// Function: entry_0015d254
// Address: 0x15d254 - 0x15d32c
void entry_0015d254_0x15d254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d254_0x15d254");
#endif

    switch (ctx->pc) {
        case 0x15d264u: goto label_15d264;
        case 0x15d280u: goto label_15d280;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2fcu: goto label_15d2fc;
        default: break;
    }

    ctx->pc = 0x15d254u;

    // 0x15d254: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d258: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15d258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15d25c: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15D25Cu;
    SET_GPR_U32(ctx, 31, 0x15D264u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15D25Cu, 0x15D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D264u;
label_15d264:
    // 0x15d264: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d26c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d270: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15d274: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15d278: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15D278u;
    SET_GPR_U32(ctx, 31, 0x15D280u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15D278u, 0x15D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D280u;
label_15d280:
    // 0x15d280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15d280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d284: 0x0  nop
    ctx->pc = 0x15d284u;
    // NOP
    // 0x15d288: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15d28c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d290: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d294: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15d294u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d298: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d29c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d2a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d2a4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d2a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d2a8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D2A8u;
    SET_GPR_U32(ctx, 31, 0x15D2B0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D2A8u, 0x15D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2B0u;
label_15d2b0:
    // 0x15d2b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15d2b4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d2b8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d2c0: 0x0  nop
    ctx->pc = 0x15d2c0u;
    // NOP
    // 0x15d2c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d2c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d2c8: 0x0  nop
    ctx->pc = 0x15d2c8u;
    // NOP
    // 0x15d2cc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D2CCu;
    {
        const bool branch_taken_0x15d2cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d2cc) {
            ctx->pc = 0x15D32Cu;
            return;
        }
    }
    ctx->pc = 0x15D2D4u;
    // 0x15d2d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2d8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2dc: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D2DCu;
    SET_GPR_U32(ctx, 31, 0x15D2E4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D2E4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D2E4u) { return; }
    ctx->pc = 0x15D2E4u;
label_15d2e4:
    // 0x15d2e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d2e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d2ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d2f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D2F4u;
    SET_GPR_U32(ctx, 31, 0x15D2FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D2FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D2FCu) { return; }
    ctx->pc = 0x15D2FCu;
label_15d2fc:
    // 0x15d2fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d300: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d304: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d30c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d310: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d318: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d31c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d328: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x15d32cu;
}
