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

// Function: entry_003309b8
// Address: 0x3309b8 - 0x3309d4
void entry_003309b8_0x3309b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003309b8_0x3309b8");
#endif

    ctx->pc = 0x3309b8u;

    // 0x3309b8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x3309b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3309bc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3309bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3309c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3309c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3309c4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3309c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3309c8: 0x0  nop
    ctx->pc = 0x3309c8u;
    // NOP
    // 0x3309cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3309ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3309d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3309d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x3309d4u;
}
