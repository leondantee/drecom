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

// Function: entry_00252f7c
// Address: 0x252f7c - 0x252fac
void entry_00252f7c_0x252f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252f7c_0x252f7c");
#endif

    ctx->pc = 0x252f7cu;

    // 0x252f7c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f80: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252f88: 0x0  nop
    ctx->pc = 0x252f88u;
    // NOP
    // 0x252f8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252F8Cu;
    {
        const bool branch_taken_0x252f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252f8c) {
            ctx->pc = 0x252FACu;
            return;
        }
    }
    ctx->pc = 0x252F94u;
    // 0x252f94: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f98: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x252f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252fa0: 0x0  nop
    ctx->pc = 0x252fa0u;
    // NOP
    // 0x252fa4: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x252FA4u;
    {
        const bool branch_taken_0x252fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252fa4) {
            ctx->pc = 0x253274u;
            return;
        }
    }
    ctx->pc = 0x252FACu;
}
