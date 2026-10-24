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

// Function: entry_00324c5c
// Address: 0x324c5c - 0x324c78
void entry_00324c5c_0x324c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324c5c_0x324c5c");
#endif

    ctx->pc = 0x324c5cu;

    // 0x324c5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x324c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x324c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x324c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x324c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x324c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c6c: 0x0  nop
    ctx->pc = 0x324c6cu;
    // NOP
    // 0x324c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x324c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x324c78u;
}
