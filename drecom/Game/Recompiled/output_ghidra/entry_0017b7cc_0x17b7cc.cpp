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

// Function: entry_0017b7cc
// Address: 0x17b7cc - 0x17b800
void entry_0017b7cc_0x17b7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b7cc_0x17b7cc");
#endif

    ctx->pc = 0x17b7ccu;

    // 0x17b7cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17b7d0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b7d4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7dc: 0x0  nop
    ctx->pc = 0x17b7dcu;
    // NOP
    // 0x17b7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b7e4: 0x0  nop
    ctx->pc = 0x17b7e4u;
    // NOP
    // 0x17b7e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17B7E8u;
    {
        const bool branch_taken_0x17b7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b7e8) {
            ctx->pc = 0x17B800u;
            return;
        }
    }
    ctx->pc = 0x17B7F0u;
    // 0x17b7f0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7f8: 0x0  nop
    ctx->pc = 0x17b7f8u;
    // NOP
    // 0x17b7fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x17b800u;
}
