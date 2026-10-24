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

// Function: entry_00274310
// Address: 0x274310 - 0x27432c
void entry_00274310_0x274310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274310_0x274310");
#endif

    ctx->pc = 0x274310u;

    // 0x274310: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x274314: 0x30950001  andi        $s5, $a0, 0x1
    ctx->pc = 0x274314u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x274318: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x274318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x27431c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27431cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274320: 0x0  nop
    ctx->pc = 0x274320u;
    // NOP
    // 0x274324: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x274328: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x274328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x27432cu;
}
