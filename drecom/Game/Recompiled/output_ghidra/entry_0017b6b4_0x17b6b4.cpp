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

// Function: entry_0017b6b4
// Address: 0x17b6b4 - 0x17b6e8
void entry_0017b6b4_0x17b6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b6b4_0x17b6b4");
#endif

    ctx->pc = 0x17b6b4u;

    // 0x17b6b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17b6b8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b6bc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6c4: 0x0  nop
    ctx->pc = 0x17b6c4u;
    // NOP
    // 0x17b6c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17b6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b6cc: 0x0  nop
    ctx->pc = 0x17b6ccu;
    // NOP
    // 0x17b6d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17B6D0u;
    {
        const bool branch_taken_0x17b6d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b6d0) {
            ctx->pc = 0x17B6E8u;
            return;
        }
    }
    ctx->pc = 0x17B6D8u;
    // 0x17b6d8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6e0: 0x0  nop
    ctx->pc = 0x17b6e0u;
    // NOP
    // 0x17b6e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17b6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x17b6e8u;
}
