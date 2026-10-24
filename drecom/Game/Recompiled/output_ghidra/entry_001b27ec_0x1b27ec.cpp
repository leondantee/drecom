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

// Function: entry_001b27ec
// Address: 0x1b27ec - 0x1b2818
void entry_001b27ec_0x1b27ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27ec_0x1b27ec");
#endif

    ctx->pc = 0x1b27ecu;

    // 0x1b27ec: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b27f0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b27f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b27f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b27fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b27fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2800: 0x0  nop
    ctx->pc = 0x1b2800u;
    // NOP
    // 0x1b2804: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2818u;
            return;
        }
    }
    ctx->pc = 0x1B280Cu;
    // 0x1b280c: 0xafb50134  sw          $s5, 0x134($sp)
    ctx->pc = 0x1b280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 21));
    // 0x1b2810: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2810u;
    {
        const bool branch_taken_0x1b2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2810) {
            ctx->pc = 0x1B2858u;
            return;
        }
    }
    ctx->pc = 0x1B2818u;
}
