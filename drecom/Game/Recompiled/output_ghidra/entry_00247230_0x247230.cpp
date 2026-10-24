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

// Function: entry_00247230
// Address: 0x247230 - 0x24724c
void entry_00247230_0x247230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247230_0x247230");
#endif

    ctx->pc = 0x247230u;

    // 0x247230: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x247234: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x247234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247238: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x247238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x24723c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24723cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247240: 0x0  nop
    ctx->pc = 0x247240u;
    // NOP
    // 0x247244: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x247244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x247248: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x247248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x24724cu;
}
