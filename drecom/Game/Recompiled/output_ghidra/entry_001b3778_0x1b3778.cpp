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

// Function: entry_001b3778
// Address: 0x1b3778 - 0x1b37c0
void entry_001b3778_0x1b3778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3778_0x1b3778");
#endif

    ctx->pc = 0x1b3778u;

    // 0x1b3778: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1b3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b377c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3780: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3788: 0x0  nop
    ctx->pc = 0x1b3788u;
    // NOP
    // 0x1b378c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b378cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3790: 0x0  nop
    ctx->pc = 0x1b3790u;
    // NOP
    // 0x1b3794: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1B3794u;
    {
        const bool branch_taken_0x1b3794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3794) {
            ctx->pc = 0x1B382Cu;
            return;
        }
    }
    ctx->pc = 0x1B379Cu;
    // 0x1b379c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b37a0: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x1b37a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b37a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b37a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b37ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B37ACu;
    {
        const bool branch_taken_0x1b37ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b37ac) {
            ctx->pc = 0x1B37C0u;
            return;
        }
    }
    ctx->pc = 0x1B37B4u;
    // 0x1b37b4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b37b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b37b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1B37B8u;
    {
        const bool branch_taken_0x1b37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37b8) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B37C0u;
}
