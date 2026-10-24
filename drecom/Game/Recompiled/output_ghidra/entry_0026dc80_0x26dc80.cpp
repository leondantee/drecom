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

// Function: entry_0026dc80
// Address: 0x26dc80 - 0x26dcb0
void entry_0026dc80_0x26dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dc80_0x26dc80");
#endif

    ctx->pc = 0x26dc80u;

    // 0x26dc80: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc84: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x26dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dc88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26dc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26dc8c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26dc90: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc94: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dc98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26dc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc9c: 0x0  nop
    ctx->pc = 0x26dc9cu;
    // NOP
    // 0x26dca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DCA0u;
    {
        const bool branch_taken_0x26dca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dca0) {
            ctx->pc = 0x26DCB0u;
            return;
        }
    }
    ctx->pc = 0x26DCA8u;
    // 0x26dca8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dcac: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x26dcb0u;
}
