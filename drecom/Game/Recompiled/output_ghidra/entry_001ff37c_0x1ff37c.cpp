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

// Function: entry_001ff37c
// Address: 0x1ff37c - 0x1ff398
void entry_001ff37c_0x1ff37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff37c_0x1ff37c");
#endif

    ctx->pc = 0x1ff37cu;

    // 0x1ff37c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ff380: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ff380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ff384: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ff384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ff388: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff388u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff38c: 0x0  nop
    ctx->pc = 0x1ff38cu;
    // NOP
    // 0x1ff390: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff394: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1ff394u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1ff398u;
}
