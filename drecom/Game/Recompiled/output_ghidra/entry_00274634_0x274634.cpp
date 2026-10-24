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

// Function: entry_00274634
// Address: 0x274634 - 0x274650
void entry_00274634_0x274634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274634_0x274634");
#endif

    ctx->pc = 0x274634u;

    // 0x274634: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x274638: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x274638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27463c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x274640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274644: 0x0  nop
    ctx->pc = 0x274644u;
    // NOP
    // 0x274648: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27464c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27464cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x274650u;
}
