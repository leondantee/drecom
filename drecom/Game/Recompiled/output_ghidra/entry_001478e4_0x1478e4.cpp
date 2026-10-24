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

// Function: entry_001478e4
// Address: 0x1478e4 - 0x147900
void entry_001478e4_0x1478e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001478e4_0x1478e4");
#endif

    ctx->pc = 0x1478e4u;

    // 0x1478e4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1478e8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1478e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1478ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1478ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1478f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1478f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1478f4: 0x0  nop
    ctx->pc = 0x1478f4u;
    // NOP
    // 0x1478f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1478f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1478fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1478fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x147900u;
}
