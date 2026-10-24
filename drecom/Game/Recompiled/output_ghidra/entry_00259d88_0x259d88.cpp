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

// Function: entry_00259d88
// Address: 0x259d88 - 0x259da4
void entry_00259d88_0x259d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259d88_0x259d88");
#endif

    ctx->pc = 0x259d88u;

    // 0x259d88: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x259d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x259d8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x259d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x259d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x259d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x259d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x259d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259d98: 0x0  nop
    ctx->pc = 0x259d98u;
    // NOP
    // 0x259d9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x259d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x259da0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x259da0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x259da4u;
}
