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

// Function: entry_0013bedc
// Address: 0x13bedc - 0x13bef8
void entry_0013bedc_0x13bedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bedc_0x13bedc");
#endif

    ctx->pc = 0x13bedcu;

    // 0x13bedc: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x13bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13bee0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x13bee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x13bee4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13bee8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13bee8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13beec: 0x0  nop
    ctx->pc = 0x13beecu;
    // NOP
    // 0x13bef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bef4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13bef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x13bef8u;
}
