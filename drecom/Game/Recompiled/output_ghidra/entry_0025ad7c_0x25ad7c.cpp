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

// Function: entry_0025ad7c
// Address: 0x25ad7c - 0x25ad98
void entry_0025ad7c_0x25ad7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ad7c_0x25ad7c");
#endif

    ctx->pc = 0x25ad7cu;

    // 0x25ad7c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25ad84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25ad84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25ad88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ad88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad8c: 0x0  nop
    ctx->pc = 0x25ad8cu;
    // NOP
    // 0x25ad90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25ad90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ad94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x25ad98u;
}
