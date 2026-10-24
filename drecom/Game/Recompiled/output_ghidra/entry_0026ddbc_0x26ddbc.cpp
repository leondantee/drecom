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

// Function: entry_0026ddbc
// Address: 0x26ddbc - 0x26ddec
void entry_0026ddbc_0x26ddbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ddbc_0x26ddbc");
#endif

    ctx->pc = 0x26ddbcu;

    // 0x26ddbc: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddc0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ddc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ddc8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26ddcc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddd0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ddd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ddd8: 0x0  nop
    ctx->pc = 0x26ddd8u;
    // NOP
    // 0x26dddc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DDDCu;
    {
        const bool branch_taken_0x26dddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dddc) {
            ctx->pc = 0x26DDECu;
            return;
        }
    }
    ctx->pc = 0x26DDE4u;
    // 0x26dde4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dde8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x26ddecu;
}
