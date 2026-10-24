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

// Function: entry_003119f4
// Address: 0x3119f4 - 0x311a24
void entry_003119f4_0x3119f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003119f4_0x3119f4");
#endif

    ctx->pc = 0x3119f4u;

    // 0x3119f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3119f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3119f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3119f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3119fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3119fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a00: 0x0  nop
    ctx->pc = 0x311a00u;
    // NOP
    // 0x311a04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x311a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311a08: 0x0  nop
    ctx->pc = 0x311a08u;
    // NOP
    // 0x311a0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x311A0Cu;
    {
        const bool branch_taken_0x311a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311a0c) {
            ctx->pc = 0x311A24u;
            return;
        }
    }
    ctx->pc = 0x311A14u;
    // 0x311a14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x311a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x311a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311a1c: 0x0  nop
    ctx->pc = 0x311a1cu;
    // NOP
    // 0x311a20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->pc = 0x311a24u;
}
