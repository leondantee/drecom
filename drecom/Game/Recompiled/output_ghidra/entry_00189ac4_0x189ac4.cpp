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

// Function: entry_00189ac4
// Address: 0x189ac4 - 0x189b1c
void entry_00189ac4_0x189ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ac4_0x189ac4");
#endif

    ctx->pc = 0x189ac4u;

    // 0x189ac4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189ac8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189acc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ad0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189ad4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189ad8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189adc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ae0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ae4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189ae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189ae8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189aec: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
    // 0x189af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189afc: 0x0  nop
    ctx->pc = 0x189afcu;
    // NOP
    // 0x189b00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189B00u;
    {
        const bool branch_taken_0x189b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189b00) {
            ctx->pc = 0x189B1Cu;
            return;
        }
    }
    ctx->pc = 0x189B08u;
    // 0x189b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b0c: 0x0  nop
    ctx->pc = 0x189b0cu;
    // NOP
    // 0x189b10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x189b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x189b14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189B14u;
    {
        const bool branch_taken_0x189b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b14) {
            ctx->pc = 0x189B5Cu;
            return;
        }
    }
    ctx->pc = 0x189B1Cu;
}
