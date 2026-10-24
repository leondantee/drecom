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

// Function: entry_0023271c
// Address: 0x23271c - 0x232738
void entry_0023271c_0x23271c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023271c_0x23271c");
#endif

    ctx->pc = 0x23271cu;

    // 0x23271c: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x23271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x232720: 0x30e60001  andi        $a2, $a3, 0x1
    ctx->pc = 0x232720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x232724: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x232724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x232728: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23272c: 0x0  nop
    ctx->pc = 0x23272cu;
    // NOP
    // 0x232730: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x232730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x232734: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x232734u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x232738u;
}
