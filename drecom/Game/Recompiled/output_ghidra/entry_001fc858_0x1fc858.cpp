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

// Function: entry_001fc858
// Address: 0x1fc858 - 0x1fc874
void entry_001fc858_0x1fc858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc858_0x1fc858");
#endif

    ctx->pc = 0x1fc858u;

    // 0x1fc858: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc868: 0x0  nop
    ctx->pc = 0x1fc868u;
    // NOP
    // 0x1fc86c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc870: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc870u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x1fc874u;
}
