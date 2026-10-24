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

// Function: entry_0029c280
// Address: 0x29c280 - 0x29c29c
void entry_0029c280_0x29c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c280_0x29c280");
#endif

    ctx->pc = 0x29c280u;

    // 0x29c280: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x29c280u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29c284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c288: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c28c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29c28cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c290: 0x0  nop
    ctx->pc = 0x29c290u;
    // NOP
    // 0x29c294: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c298: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29c298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x29c29cu;
}
