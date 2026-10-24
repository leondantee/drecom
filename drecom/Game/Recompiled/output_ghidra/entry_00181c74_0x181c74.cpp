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

// Function: entry_00181c74
// Address: 0x181c74 - 0x181c90
void entry_00181c74_0x181c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181c74_0x181c74");
#endif

    ctx->pc = 0x181c74u;

    // 0x181c74: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x181c78: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x181c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181c7c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x181c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x181c80: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181c80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181c84: 0x0  nop
    ctx->pc = 0x181c84u;
    // NOP
    // 0x181c88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181c8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x181c90u;
}
