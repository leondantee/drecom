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

// Function: entry_001fdd24
// Address: 0x1fdd24 - 0x1fdd40
void entry_001fdd24_0x1fdd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdd24_0x1fdd24");
#endif

    ctx->pc = 0x1fdd24u;

    // 0x1fdd24: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fdd28: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fdd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fdd2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fdd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fdd30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fdd30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd34: 0x0  nop
    ctx->pc = 0x1fdd34u;
    // NOP
    // 0x1fdd38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fdd3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fdd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x1fdd40u;
}
