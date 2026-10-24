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

// Function: entry_001638e8
// Address: 0x1638e8 - 0x163928
void entry_001638e8_0x1638e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001638e8_0x1638e8");
#endif

    ctx->pc = 0x1638e8u;

    // 0x1638e8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1638e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1638ec: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1638ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1638f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1638f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1638f4: 0x0  nop
    ctx->pc = 0x1638f4u;
    // NOP
    // 0x1638f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1638f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1638fc: 0x0  nop
    ctx->pc = 0x1638fcu;
    // NOP
    // 0x163900: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x163900u;
    {
        const bool branch_taken_0x163900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163900) {
            ctx->pc = 0x163928u;
            return;
        }
    }
    ctx->pc = 0x163908u;
    // 0x163908: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x163908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16390c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x163910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163914: 0x0  nop
    ctx->pc = 0x163914u;
    // NOP
    // 0x163918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x163918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16391c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16391cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x163920: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163920u;
    {
        const bool branch_taken_0x163920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163920) {
            ctx->pc = 0x163938u;
            return;
        }
    }
    ctx->pc = 0x163928u;
}
