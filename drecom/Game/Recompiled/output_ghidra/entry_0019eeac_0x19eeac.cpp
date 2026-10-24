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

// Function: entry_0019eeac
// Address: 0x19eeac - 0x19eedc
void entry_0019eeac_0x19eeac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eeac_0x19eeac");
#endif

    ctx->pc = 0x19eeacu;

    // 0x19eeac: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eeb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eeb4: 0x0  nop
    ctx->pc = 0x19eeb4u;
    // NOP
    // 0x19eeb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eebc: 0x0  nop
    ctx->pc = 0x19eebcu;
    // NOP
    // 0x19eec0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19EEC0u;
    {
        const bool branch_taken_0x19eec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19eec0) {
            ctx->pc = 0x19EEDCu;
            return;
        }
    }
    ctx->pc = 0x19EEC8u;
    // 0x19eec8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19eec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eecc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19eeccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19eed0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x19eed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EED4u;
    {
        const bool branch_taken_0x19eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eed4) {
            ctx->pc = 0x19EEE4u;
            return;
        }
    }
    ctx->pc = 0x19EEDCu;
}
