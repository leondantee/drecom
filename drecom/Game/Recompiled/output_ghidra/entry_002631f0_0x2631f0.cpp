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

// Function: entry_002631f0
// Address: 0x2631f0 - 0x26320c
void entry_002631f0_0x2631f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002631f0_0x2631f0");
#endif

    ctx->pc = 0x2631f0u;

    // 0x2631f0: 0x195042  srl         $t2, $t9, 1
    ctx->pc = 0x2631f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
    // 0x2631f4: 0x33290001  andi        $t1, $t9, 0x1
    ctx->pc = 0x2631f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x2631f8: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x2631f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2631fc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2631fcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263200: 0x0  nop
    ctx->pc = 0x263200u;
    // NOP
    // 0x263204: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x263204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x263208: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x263208u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->pc = 0x26320cu;
}
