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

// Function: entry_001731e4
// Address: 0x1731e4 - 0x173224
void entry_001731e4_0x1731e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001731e4_0x1731e4");
#endif

    ctx->pc = 0x1731e4u;

    // 0x1731e4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731e8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1731e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1731ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731f4: 0x0  nop
    ctx->pc = 0x1731f4u;
    // NOP
    // 0x1731f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1731f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1731fc: 0x0  nop
    ctx->pc = 0x1731fcu;
    // NOP
    // 0x173200: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x173200u;
    {
        const bool branch_taken_0x173200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173200) {
            ctx->pc = 0x173224u;
            return;
        }
    }
    ctx->pc = 0x173208u;
    // 0x173208: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x173208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17320c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x173210: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173218: 0x0  nop
    ctx->pc = 0x173218u;
    // NOP
    // 0x17321c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17321cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173220: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x173220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x173224u;
}
