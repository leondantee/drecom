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

// Function: entry_00276154
// Address: 0x276154 - 0x276170
void entry_00276154_0x276154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276154_0x276154");
#endif

    ctx->pc = 0x276154u;

    // 0x276154: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x276154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x276158: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x276158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27615c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27615cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x276160: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x276160u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276164: 0x0  nop
    ctx->pc = 0x276164u;
    // NOP
    // 0x276168: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x276168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27616c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27616cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x276170u;
}
