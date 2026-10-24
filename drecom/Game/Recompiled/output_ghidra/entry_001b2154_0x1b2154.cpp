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

// Function: entry_001b2154
// Address: 0x1b2154 - 0x1b2190
void entry_001b2154_0x1b2154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2154_0x1b2154");
#endif

    ctx->pc = 0x1b2154u;

    // 0x1b2154: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x1b2154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x1b2158: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b215c: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2168: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b216c: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2174: 0x0  nop
    ctx->pc = 0x1b2174u;
    // NOP
    // 0x1b2178: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b2178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b217c: 0x0  nop
    ctx->pc = 0x1b217cu;
    // NOP
    // 0x1b2180: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2180u;
    {
        const bool branch_taken_0x1b2180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2180) {
            ctx->pc = 0x1B21A0u;
            return;
        }
    }
    ctx->pc = 0x1B2188u;
    // 0x1b2188: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b2188u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b218c: 0x0  nop
    ctx->pc = 0x1b218cu;
    // NOP
    ctx->pc = 0x1b2190u;
}
