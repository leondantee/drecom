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

// Function: entry_0025d520
// Address: 0x25d520 - 0x25d53c
void entry_0025d520_0x25d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d520_0x25d520");
#endif

    ctx->pc = 0x25d520u;

    // 0x25d520: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x25d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x25d524: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x25d524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25d528: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25d52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d530: 0x0  nop
    ctx->pc = 0x25d530u;
    // NOP
    // 0x25d534: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d538: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25d538u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x25d53cu;
}
