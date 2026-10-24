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

// Function: entry_00175f00
// Address: 0x175f00 - 0x175f38
void entry_00175f00_0x175f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f00_0x175f00");
#endif

    ctx->pc = 0x175f00u;

    // 0x175f00: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x175f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f04: 0x0  nop
    ctx->pc = 0x175f04u;
    // NOP
    // 0x175f08: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175F08u;
    {
        const bool branch_taken_0x175f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175f08) {
            ctx->pc = 0x175F38u;
            return;
        }
    }
    ctx->pc = 0x175F10u;
    // 0x175f10: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x175f10u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x175f14: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x175f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x175f18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f1c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x175f1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x175f20: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x175f20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175f24: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175f24u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175f28: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x175f28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x175f2c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175f2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175f30: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175f30u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175f34: 0x0  nop
    ctx->pc = 0x175f34u;
    // NOP
    ctx->pc = 0x175f38u;
}
