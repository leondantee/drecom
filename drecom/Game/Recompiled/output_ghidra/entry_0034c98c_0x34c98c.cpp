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

// Function: entry_0034c98c
// Address: 0x34c98c - 0x34c9a8
void entry_0034c98c_0x34c98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c98c_0x34c98c");
#endif

    ctx->pc = 0x34c98cu;

    // 0x34c98c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x34c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x34c990: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x34c990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34c994: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x34c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34c998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c99c: 0x0  nop
    ctx->pc = 0x34c99cu;
    // NOP
    // 0x34c9a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c9a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34c9a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x34c9a8u;
}
