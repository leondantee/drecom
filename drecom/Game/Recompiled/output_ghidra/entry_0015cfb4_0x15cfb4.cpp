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

// Function: entry_0015cfb4
// Address: 0x15cfb4 - 0x15d08c
void entry_0015cfb4_0x15cfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfb4_0x15cfb4");
#endif

    switch (ctx->pc) {
        case 0x15cfc4u: goto label_15cfc4;
        case 0x15cfe0u: goto label_15cfe0;
        case 0x15d010u: goto label_15d010;
        case 0x15d044u: goto label_15d044;
        case 0x15d05cu: goto label_15d05c;
        default: break;
    }

    ctx->pc = 0x15cfb4u;

    // 0x15cfb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfb8: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x15cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x15cfbc: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x15CFBCu;
    SET_GPR_U32(ctx, 31, 0x15CFC4u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x15CFBCu, 0x15CFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFC4u;
label_15cfc4:
    // 0x15cfc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15cfcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15cfd0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x15cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x15cfd4: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15cfd8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15CFD8u;
    SET_GPR_U32(ctx, 31, 0x15CFE0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15CFD8u, 0x15CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFE0u;
label_15cfe0:
    // 0x15cfe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15cfe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cfe4: 0x0  nop
    ctx->pc = 0x15cfe4u;
    // NOP
    // 0x15cfe8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15cfec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x15cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cff0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cff4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15cff4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15cff8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x15cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cffc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15d000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15d004: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15d004u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15d008: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15D008u;
    SET_GPR_U32(ctx, 31, 0x15D010u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15D008u, 0x15D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D010u;
label_15d010:
    // 0x15d010: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15d010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15d014: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x15d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d018: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d01c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d020: 0x0  nop
    ctx->pc = 0x15d020u;
    // NOP
    // 0x15d024: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d028: 0x0  nop
    ctx->pc = 0x15d028u;
    // NOP
    // 0x15d02c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x15D02Cu;
    {
        const bool branch_taken_0x15d02c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d02c) {
            ctx->pc = 0x15D08Cu;
            return;
        }
    }
    ctx->pc = 0x15D034u;
    // 0x15d034: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d038: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d03c: 0xc040c24  jal         func_103090
    ctx->pc = 0x15D03Cu;
    SET_GPR_U32(ctx, 31, 0x15D044u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x15D044u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D044u) { return; }
    ctx->pc = 0x15D044u;
label_15d044:
    // 0x15d044: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x15d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15d048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d04c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d050: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15d050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d054: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15D054u;
    SET_GPR_U32(ctx, 31, 0x15D05Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15D05Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D05Cu) { return; }
    ctx->pc = 0x15D05Cu;
label_15d05c:
    // 0x15d05c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d060: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x15d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d064: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d068: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d070: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x15d070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x15d074: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d078: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x15d078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d07c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d080: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d084: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d088: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x15d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x15d08cu;
}
