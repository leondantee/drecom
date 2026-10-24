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

// Function: entry_001b2038
// Address: 0x1b2038 - 0x1b2080
void entry_001b2038_0x1b2038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2038_0x1b2038");
#endif

    ctx->pc = 0x1b2038u;

    // 0x1b2038: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b203c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2040: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2048: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b204c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2054: 0x0  nop
    ctx->pc = 0x1b2054u;
    // NOP
    // 0x1b2058: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2058u;
    {
        const bool branch_taken_0x1b2058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2058) {
            ctx->pc = 0x1B2080u;
            return;
        }
    }
    ctx->pc = 0x1B2060u;
    // 0x1b2060: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b2064: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2068: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b206c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2070: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b2070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2074: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b2074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1b2078: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x1b2078u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b207c: 0x0  nop
    ctx->pc = 0x1b207cu;
    // NOP
    ctx->pc = 0x1b2080u;
}
