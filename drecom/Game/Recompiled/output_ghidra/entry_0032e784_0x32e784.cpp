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

// Function: entry_0032e784
// Address: 0x32e784 - 0x32e7e8
void entry_0032e784_0x32e784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e784_0x32e784");
#endif

    ctx->pc = 0x32e784u;

label_32e784:
    // 0x32e784: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32e788: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32e78c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x32e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e790: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x32e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x32e794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32e794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32e798: 0x0  nop
    ctx->pc = 0x32e798u;
    // NOP
    // 0x32e79c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x32e79cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e7a0: 0x0  nop
    ctx->pc = 0x32e7a0u;
    // NOP
    // 0x32e7a4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x32E7A4u;
    {
        const bool branch_taken_0x32e7a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e7a4) {
            ctx->pc = 0x32E7E8u;
            return;
        }
    }
    ctx->pc = 0x32E7ACu;
    // 0x32e7ac: 0xc6610124  lwc1        $f1, 0x124($s3)
    ctx->pc = 0x32e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e7b0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x32e7b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32e7b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e7bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32e7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e7c0: 0x0  nop
    ctx->pc = 0x32e7c0u;
    // NOP
    // 0x32e7c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x32E7C4u;
    {
        const bool branch_taken_0x32e7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32e7c4) {
            ctx->pc = 0x32E7E8u;
            return;
        }
    }
    ctx->pc = 0x32E7CCu;
    // 0x32e7cc: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x32e7ccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x32e7d0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x32e7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e7d4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e7d8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e7d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e7dc: 0xa20265b0  sb          $v0, 0x65B0($s0)
    ctx->pc = 0x32e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26032), (uint8_t)GPR_U32(ctx, 2));
    // 0x32e7e0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x32E7E0u;
    {
        const bool branch_taken_0x32e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e7e0) {
            ctx->pc = 0x32E784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e784;
        }
    }
    ctx->pc = 0x32E7E8u;
}
