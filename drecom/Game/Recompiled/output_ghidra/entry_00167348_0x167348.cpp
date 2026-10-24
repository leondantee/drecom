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

// Function: entry_00167348
// Address: 0x167348 - 0x167390
void entry_00167348_0x167348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167348_0x167348");
#endif

    ctx->pc = 0x167348u;

    // 0x167348: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16734c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x16734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167350: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167354: 0x0  nop
    ctx->pc = 0x167354u;
    // NOP
    // 0x167358: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x167358u;
    {
        const bool branch_taken_0x167358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167358) {
            ctx->pc = 0x167390u;
            return;
        }
    }
    ctx->pc = 0x167360u;
    // 0x167360: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167364: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x167364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167368: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16736c: 0x0  nop
    ctx->pc = 0x16736cu;
    // NOP
    // 0x167370: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x167370u;
    {
        const bool branch_taken_0x167370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167370) {
            ctx->pc = 0x167390u;
            return;
        }
    }
    ctx->pc = 0x167378u;
    // 0x167378: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16737c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x16737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167380: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x167380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167384: 0x0  nop
    ctx->pc = 0x167384u;
    // NOP
    // 0x167388: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x167388u;
    {
        const bool branch_taken_0x167388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167388) {
            ctx->pc = 0x1673DCu;
            return;
        }
    }
    ctx->pc = 0x167390u;
}
