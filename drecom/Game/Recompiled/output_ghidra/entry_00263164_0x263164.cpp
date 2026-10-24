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

// Function: entry_00263164
// Address: 0x263164 - 0x263180
void entry_00263164_0x263164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263164_0x263164");
#endif

    ctx->pc = 0x263164u;

    // 0x263164: 0x19c042  srl         $t8, $t9, 1
    ctx->pc = 0x263164u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 25), 1));
    // 0x263168: 0x332f0001  andi        $t7, $t9, 0x1
    ctx->pc = 0x263168u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x26316c: 0x30fc025  or          $t8, $t8, $t7
    ctx->pc = 0x26316cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x263170: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x263170u;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263174: 0x0  nop
    ctx->pc = 0x263174u;
    // NOP
    // 0x263178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x263178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x26317c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26317cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x263180u;
}
