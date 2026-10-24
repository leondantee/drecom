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

// Function: entry_0026a670
// Address: 0x26a670 - 0x26a6a8
void entry_0026a670_0x26a670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a670_0x26a670");
#endif

    ctx->pc = 0x26a670u;

    // 0x26a670: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a674: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26a678: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a680: 0x0  nop
    ctx->pc = 0x26a680u;
    // NOP
    // 0x26a684: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a688: 0x0  nop
    ctx->pc = 0x26a688u;
    // NOP
    // 0x26a68c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A68Cu;
    {
        const bool branch_taken_0x26a68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a68c) {
            ctx->pc = 0x26A6A8u;
            return;
        }
    }
    ctx->pc = 0x26A694u;
    // 0x26a694: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26a698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6a0: 0x0  nop
    ctx->pc = 0x26a6a0u;
    // NOP
    // 0x26a6a4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x26a6a8u;
}
