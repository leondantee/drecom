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

// Function: entry_001b1ff8
// Address: 0x1b1ff8 - 0x1b2038
void entry_001b1ff8_0x1b1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ff8_0x1b1ff8");
#endif

    ctx->pc = 0x1b1ff8u;

    // 0x1b1ff8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b1ffc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2000: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2008: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b200c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2010: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b2010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2018: 0x0  nop
    ctx->pc = 0x1b2018u;
    // NOP
    // 0x1b201c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b201cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2020: 0x0  nop
    ctx->pc = 0x1b2020u;
    // NOP
    // 0x1b2024: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2024u;
    {
        const bool branch_taken_0x1b2024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2024) {
            ctx->pc = 0x1B2038u;
            return;
        }
    }
    ctx->pc = 0x1B202Cu;
    // 0x1b202c: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x1b202cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b2030: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B2030u;
    {
        const bool branch_taken_0x1b2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2030) {
            ctx->pc = 0x1B2098u;
            return;
        }
    }
    ctx->pc = 0x1B2038u;
}
