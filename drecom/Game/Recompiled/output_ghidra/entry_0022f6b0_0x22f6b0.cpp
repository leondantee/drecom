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

// Function: entry_0022f6b0
// Address: 0x22f6b0 - 0x22f6cc
void entry_0022f6b0_0x22f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f6b0_0x22f6b0");
#endif

    ctx->pc = 0x22f6b0u;

    // 0x22f6b0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22f6b4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f6b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22f6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22f6bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22f6bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f6c0: 0x0  nop
    ctx->pc = 0x22f6c0u;
    // NOP
    // 0x22f6c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f6c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22f6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x22f6ccu;
}
