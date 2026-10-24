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

// Function: entry_0027e150
// Address: 0x27e150 - 0x27e16c
void entry_0027e150_0x27e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e150_0x27e150");
#endif

    ctx->pc = 0x27e150u;

    // 0x27e150: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x27e154: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x27e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x27e158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27e15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27e15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e160: 0x0  nop
    ctx->pc = 0x27e160u;
    // NOP
    // 0x27e164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27e164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27e168: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27e168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x27e16cu;
}
