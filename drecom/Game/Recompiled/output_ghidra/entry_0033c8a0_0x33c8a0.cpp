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

// Function: entry_0033c8a0
// Address: 0x33c8a0 - 0x33c8dc
void entry_0033c8a0_0x33c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c8a0_0x33c8a0");
#endif

    ctx->pc = 0x33c8a0u;

    // 0x33c8a0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33c8a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33c8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33c8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c8ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33c8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33c8b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c8b8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c8bc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33c8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c8c4: 0x0  nop
    ctx->pc = 0x33c8c4u;
    // NOP
    // 0x33c8c8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x33C8C8u;
    {
        const bool branch_taken_0x33c8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c8c8) {
            ctx->pc = 0x33C938u;
            return;
        }
    }
    ctx->pc = 0x33C8D0u;
    // 0x33c8d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c8d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33C8D4u;
    {
        const bool branch_taken_0x33c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c8d4) {
            ctx->pc = 0x33C938u;
            return;
        }
    }
    ctx->pc = 0x33C8DCu;
}
