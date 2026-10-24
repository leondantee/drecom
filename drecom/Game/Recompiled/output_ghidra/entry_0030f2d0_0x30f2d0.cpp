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

// Function: entry_0030f2d0
// Address: 0x30f2d0 - 0x30f2ec
void entry_0030f2d0_0x30f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f2d0_0x30f2d0");
#endif

    ctx->pc = 0x30f2d0u;

    // 0x30f2d0: 0x152042  srl         $a0, $s5, 1
    ctx->pc = 0x30f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x30f2d4: 0x32a50001  andi        $a1, $s5, 0x1
    ctx->pc = 0x30f2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x30f2d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30f2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30f2dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30f2dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f2e0: 0x0  nop
    ctx->pc = 0x30f2e0u;
    // NOP
    // 0x30f2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f2e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30f2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x30f2ecu;
}
