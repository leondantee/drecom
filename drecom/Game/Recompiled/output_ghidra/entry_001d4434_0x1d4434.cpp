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

// Function: entry_001d4434
// Address: 0x1d4434 - 0x1d4450
void entry_001d4434_0x1d4434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4434_0x1d4434");
#endif

    ctx->pc = 0x1d4434u;

    // 0x1d4434: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1d4434u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1d4438: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1d4438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d443c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d4440: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4444: 0x0  nop
    ctx->pc = 0x1d4444u;
    // NOP
    // 0x1d4448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d444c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d444cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x1d4450u;
}
