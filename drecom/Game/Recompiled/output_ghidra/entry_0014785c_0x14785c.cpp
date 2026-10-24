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

// Function: entry_0014785c
// Address: 0x14785c - 0x147878
void entry_0014785c_0x14785c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014785c_0x14785c");
#endif

    ctx->pc = 0x14785cu;

    // 0x14785c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x147860: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x147860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x147864: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x147864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x147868: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x147868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14786c: 0x0  nop
    ctx->pc = 0x14786cu;
    // NOP
    // 0x147870: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147874: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x147878u;
}
