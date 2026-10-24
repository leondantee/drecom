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

// Function: entry_00181e20
// Address: 0x181e20 - 0x181e3c
void entry_00181e20_0x181e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e20_0x181e20");
#endif

    ctx->pc = 0x181e20u;

    // 0x181e20: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x181e24: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x181e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x181e28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x181e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181e30: 0x0  nop
    ctx->pc = 0x181e30u;
    // NOP
    // 0x181e34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x181e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181e38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x181e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x181e3cu;
}
