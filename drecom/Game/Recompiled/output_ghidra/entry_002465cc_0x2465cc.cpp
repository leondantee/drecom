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

// Function: entry_002465cc
// Address: 0x2465cc - 0x2465e8
void entry_002465cc_0x2465cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002465cc_0x2465cc");
#endif

    ctx->pc = 0x2465ccu;

    // 0x2465cc: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x2465d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2465d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2465d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x2465d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2465d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2465d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2465dc: 0x0  nop
    ctx->pc = 0x2465dcu;
    // NOP
    // 0x2465e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2465e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2465e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2465e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x2465e8u;
}
