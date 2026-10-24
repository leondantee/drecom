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

// Function: entry_00291790
// Address: 0x291790 - 0x2917d8
void entry_00291790_0x291790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291790_0x291790");
#endif

    ctx->pc = 0x291790u;

    // 0x291790: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291794: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x291794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291798: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29179c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x29179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2917a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2917a4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2917a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2917a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2917ac: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2917acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2917b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2917b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2917b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2917b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2917bc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2917c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2917c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2917c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2917c8: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2917c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2917cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2917ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2917d0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2917d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2917d4: 0x0  nop
    ctx->pc = 0x2917d4u;
    // NOP
    ctx->pc = 0x2917d8u;
}
