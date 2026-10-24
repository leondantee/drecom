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

// Function: entry_001b28cc
// Address: 0x1b28cc - 0x1b28f8
void entry_001b28cc_0x1b28cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28cc_0x1b28cc");
#endif

    ctx->pc = 0x1b28ccu;

    // 0x1b28cc: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b28d0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b28d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b28d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b28d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b28d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b28d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b28dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b28dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b28e0: 0x0  nop
    ctx->pc = 0x1b28e0u;
    // NOP
    // 0x1b28e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B28E4u;
    {
        const bool branch_taken_0x1b28e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b28e4) {
            ctx->pc = 0x1B2908u;
            return;
        }
    }
    ctx->pc = 0x1B28ECu;
    // 0x1b28ec: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b28f0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1b28f4: 0x0  nop
    ctx->pc = 0x1b28f4u;
    // NOP
    ctx->pc = 0x1b28f8u;
}
