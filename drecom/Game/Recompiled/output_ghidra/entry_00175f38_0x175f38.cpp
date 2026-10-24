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

// Function: entry_00175f38
// Address: 0x175f38 - 0x175f70
void entry_00175f38_0x175f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f38_0x175f38");
#endif

    ctx->pc = 0x175f38u;

    // 0x175f38: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x175f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f3c: 0x0  nop
    ctx->pc = 0x175f3cu;
    // NOP
    // 0x175f40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175F40u;
    {
        const bool branch_taken_0x175f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175f40) {
            ctx->pc = 0x175F70u;
            return;
        }
    }
    ctx->pc = 0x175F48u;
    // 0x175f48: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x175f48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x175f4c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175f50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f54: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x175f54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x175f58: 0x108c3c  dsll32      $s1, $s0, 16
    ctx->pc = 0x175f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 16));
    // 0x175f5c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175f5cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175f60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175f60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x175f64: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175f64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175f68: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175f68u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175f6c: 0x0  nop
    ctx->pc = 0x175f6cu;
    // NOP
    ctx->pc = 0x175f70u;
}
