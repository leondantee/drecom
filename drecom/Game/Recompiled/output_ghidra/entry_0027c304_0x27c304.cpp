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

// Function: entry_0027c304
// Address: 0x27c304 - 0x27c320
void entry_0027c304_0x27c304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c304_0x27c304");
#endif

    ctx->pc = 0x27c304u;

    // 0x27c304: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x27c308: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x27c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x27c30c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27c310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c314: 0x0  nop
    ctx->pc = 0x27c314u;
    // NOP
    // 0x27c318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27c318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27c31c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27c31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x27c320u;
}
