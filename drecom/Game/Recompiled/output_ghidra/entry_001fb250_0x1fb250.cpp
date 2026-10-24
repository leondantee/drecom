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

// Function: entry_001fb250
// Address: 0x1fb250 - 0x1fb26c
void entry_001fb250_0x1fb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb250_0x1fb250");
#endif

    ctx->pc = 0x1fb250u;

    // 0x1fb250: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fb254: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fb254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fb258: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fb258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fb25c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fb25cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb260: 0x0  nop
    ctx->pc = 0x1fb260u;
    // NOP
    // 0x1fb264: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fb264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fb268: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fb268u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1fb26cu;
}
