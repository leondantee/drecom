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

// Function: entry_001724cc
// Address: 0x1724cc - 0x172500
void entry_001724cc_0x1724cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001724cc_0x1724cc");
#endif

    ctx->pc = 0x1724ccu;

    // 0x1724cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1724ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1724d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1724d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1724d4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1724d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1724d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1724d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724dc: 0x0  nop
    ctx->pc = 0x1724dcu;
    // NOP
    // 0x1724e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1724e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1724e4: 0x0  nop
    ctx->pc = 0x1724e4u;
    // NOP
    // 0x1724e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1724E8u;
    {
        const bool branch_taken_0x1724e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1724e8) {
            ctx->pc = 0x172500u;
            return;
        }
    }
    ctx->pc = 0x1724F0u;
    // 0x1724f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1724f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1724f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1724f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1724f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1724F8u;
    {
        const bool branch_taken_0x1724f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724f8) {
            ctx->pc = 0x17250Cu;
            return;
        }
    }
    ctx->pc = 0x172500u;
}
