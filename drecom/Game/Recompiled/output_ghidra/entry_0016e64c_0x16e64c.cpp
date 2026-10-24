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

// Function: entry_0016e64c
// Address: 0x16e64c - 0x16e69c
void entry_0016e64c_0x16e64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e64c_0x16e64c");
#endif

    ctx->pc = 0x16e64cu;

    // 0x16e64c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x16e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e650: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e654: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e654u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e658: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e65c: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e65cu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e664: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e668: 0x0  nop
    ctx->pc = 0x16e668u;
    // NOP
    // 0x16e66c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E66Cu;
    {
        const bool branch_taken_0x16e66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e66c) {
            ctx->pc = 0x16E69Cu;
            return;
        }
    }
    ctx->pc = 0x16E674u;
    // 0x16e674: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e678: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e67c: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e67cu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e684: 0x0  nop
    ctx->pc = 0x16e684u;
    // NOP
    // 0x16e688: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E688u;
    {
        const bool branch_taken_0x16e688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e688) {
            ctx->pc = 0x16E69Cu;
            return;
        }
    }
    ctx->pc = 0x16E690u;
    // 0x16e690: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x16e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e698: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
    ctx->pc = 0x16e69cu;
}
