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

// Function: entry_001f04f8
// Address: 0x1f04f8 - 0x1f0514
void entry_001f04f8_0x1f04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f04f8_0x1f04f8");
#endif

    ctx->pc = 0x1f04f8u;

    // 0x1f04f8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1f04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1f04fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f04fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f0500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f0500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f0504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f0504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0508: 0x0  nop
    ctx->pc = 0x1f0508u;
    // NOP
    // 0x1f050c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f050cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f0510: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f0510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x1f0514u;
}
