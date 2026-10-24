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

// Function: entry_0029bd84
// Address: 0x29bd84 - 0x29bda0
void entry_0029bd84_0x29bd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bd84_0x29bd84");
#endif

    ctx->pc = 0x29bd84u;

    // 0x29bd84: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29bd84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29bd88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29bd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29bd8c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bd8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bd90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29bd90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd94: 0x0  nop
    ctx->pc = 0x29bd94u;
    // NOP
    // 0x29bd98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bd9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29bd9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x29bda0u;
}
