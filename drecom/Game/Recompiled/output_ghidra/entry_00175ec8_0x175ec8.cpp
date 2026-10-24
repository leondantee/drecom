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

// Function: entry_00175ec8
// Address: 0x175ec8 - 0x175f00
void entry_00175ec8_0x175ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ec8_0x175ec8");
#endif

    ctx->pc = 0x175ec8u;

    // 0x175ec8: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x175ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175ecc: 0x0  nop
    ctx->pc = 0x175eccu;
    // NOP
    // 0x175ed0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175F00u;
            return;
        }
    }
    ctx->pc = 0x175ED8u;
    // 0x175ed8: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x175ed8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x175edc: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x175edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x175ee0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ee4: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x175ee4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x175ee8: 0x129c3c  dsll32      $s3, $s2, 16
    ctx->pc = 0x175ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 16));
    // 0x175eec: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175eecu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x175ef0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x175ef0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x175ef4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x175ef4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ef8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175ef8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175efc: 0x0  nop
    ctx->pc = 0x175efcu;
    // NOP
    ctx->pc = 0x175f00u;
}
