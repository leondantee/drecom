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

// Function: entry_0029c1f0
// Address: 0x29c1f0 - 0x29c20c
void entry_0029c1f0_0x29c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c1f0_0x29c1f0");
#endif

    ctx->pc = 0x29c1f0u;

    // 0x29c1f0: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c1f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c1f8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c1fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c1fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c200: 0x0  nop
    ctx->pc = 0x29c200u;
    // NOP
    // 0x29c204: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c208: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x29c20cu;
}
