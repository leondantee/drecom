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

// Function: entry_0016e264
// Address: 0x16e264 - 0x16e29c
void entry_0016e264_0x16e264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e264_0x16e264");
#endif

    ctx->pc = 0x16e264u;

    // 0x16e264: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e26c: 0x0  nop
    ctx->pc = 0x16e26cu;
    // NOP
    // 0x16e270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e274: 0x0  nop
    ctx->pc = 0x16e274u;
    // NOP
    // 0x16e278: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16E278u;
    {
        const bool branch_taken_0x16e278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e278) {
            ctx->pc = 0x16E29Cu;
            return;
        }
    }
    ctx->pc = 0x16E280u;
    // 0x16e280: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e284: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16e288: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e288u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e28c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e290: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e290u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16e294: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16E294u;
    {
        const bool branch_taken_0x16e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e294) {
            ctx->pc = 0x16E304u;
            return;
        }
    }
    ctx->pc = 0x16E29Cu;
}
