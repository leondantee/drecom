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

// Function: entry_00262f2c
// Address: 0x262f2c - 0x262f48
void entry_00262f2c_0x262f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262f2c_0x262f2c");
#endif

    ctx->pc = 0x262f2cu;

    // 0x262f2c: 0x34042  srl         $t0, $v1, 1
    ctx->pc = 0x262f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x262f30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x262f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x262f34: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x262f34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x262f38: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x262f38u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f3c: 0x0  nop
    ctx->pc = 0x262f3cu;
    // NOP
    // 0x262f40: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x262f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x262f44: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x262f44u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    ctx->pc = 0x262f48u;
}
