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

// Function: entry_0022fd58
// Address: 0x22fd58 - 0x22fe0c
void entry_0022fd58_0x22fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fd58_0x22fd58");
#endif

    ctx->pc = 0x22fd58u;

    // 0x22fd58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd60: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22fd64: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22fd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22fd68: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x22FD68u;
    {
        const bool branch_taken_0x22fd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd68) {
            ctx->pc = 0x22FF98u;
            return;
        }
    }
    ctx->pc = 0x22FD70u;
    // 0x22fd70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd78: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fd7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd80: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fd84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22fd84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fd88: 0x0  nop
    ctx->pc = 0x22fd88u;
    // NOP
    // 0x22fd8c: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22FD8Cu;
    {
        const bool branch_taken_0x22fd8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fd8c) {
            ctx->pc = 0x22FE84u;
            return;
        }
    }
    ctx->pc = 0x22FD94u;
    // 0x22fd94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd9c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fda0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fda4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fda8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fdac: 0x0  nop
    ctx->pc = 0x22fdacu;
    // NOP
    // 0x22fdb0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FE0Cu;
            return;
        }
    }
    ctx->pc = 0x22FDB8u;
    // 0x22fdb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fdc0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fdc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdc8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fdcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fdd0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22fdd4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fddc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fde0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fde4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fde8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fdec: 0x0  nop
    ctx->pc = 0x22fdecu;
    // NOP
    // 0x22fdf0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FDF0u;
    {
        const bool branch_taken_0x22fdf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fdf0) {
            ctx->pc = 0x22FE0Cu;
            return;
        }
    }
    ctx->pc = 0x22FDF8u;
    // 0x22fdf8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe00: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe08: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x22fe0cu;
}
