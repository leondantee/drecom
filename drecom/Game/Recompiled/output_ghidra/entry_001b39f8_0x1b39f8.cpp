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

// Function: entry_001b39f8
// Address: 0x1b39f8 - 0x1b3a24
void entry_001b39f8_0x1b39f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b39f8_0x1b39f8");
#endif

    ctx->pc = 0x1b39f8u;

    // 0x1b39f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1b39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b39fc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3a00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a08: 0x0  nop
    ctx->pc = 0x1b3a08u;
    // NOP
    // 0x1b3a0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3a10: 0x0  nop
    ctx->pc = 0x1b3a10u;
    // NOP
    // 0x1b3a14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3A14u;
    {
        const bool branch_taken_0x1b3a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3a14) {
            ctx->pc = 0x1B3A24u;
            return;
        }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3a20: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->pc = 0x1b3a24u;
}
