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

// Function: entry_00330a08
// Address: 0x330a08 - 0x330a24
void entry_00330a08_0x330a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330a08_0x330a08");
#endif

    ctx->pc = 0x330a08u;

    // 0x330a08: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x330a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x330a0c: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x330a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x330a10: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x330a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x330a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330a18: 0x0  nop
    ctx->pc = 0x330a18u;
    // NOP
    // 0x330a1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x330a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x330a20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x330a20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x330a24u;
}
