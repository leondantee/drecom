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

// Function: entry_0016e6ec
// Address: 0x16e6ec - 0x16e73c
void entry_0016e6ec_0x16e6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e6ec_0x16e6ec");
#endif

    ctx->pc = 0x16e6ecu;

    // 0x16e6ec: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x16e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e6f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6f4: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e6f4u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6fc: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e6fcu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e700: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e704: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e708: 0x0  nop
    ctx->pc = 0x16e708u;
    // NOP
    // 0x16e70c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E70Cu;
    {
        const bool branch_taken_0x16e70c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e70c) {
            ctx->pc = 0x16E73Cu;
            return;
        }
    }
    ctx->pc = 0x16E714u;
    // 0x16e714: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e718: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e71c: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e71cu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e724: 0x0  nop
    ctx->pc = 0x16e724u;
    // NOP
    // 0x16e728: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E728u;
    {
        const bool branch_taken_0x16e728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e728) {
            ctx->pc = 0x16E73Cu;
            return;
        }
    }
    ctx->pc = 0x16E730u;
    // 0x16e730: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x16e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e734: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e738: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
    ctx->pc = 0x16e73cu;
}
