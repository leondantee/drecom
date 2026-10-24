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

// Function: entry_002631b8
// Address: 0x2631b8 - 0x2631d4
void entry_002631b8_0x2631b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002631b8_0x2631b8");
#endif

    ctx->pc = 0x2631b8u;

    // 0x2631b8: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x2631bc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x2631bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2631c0: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x2631c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2631c4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2631c4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2631c8: 0x0  nop
    ctx->pc = 0x2631c8u;
    // NOP
    // 0x2631cc: 0x468002e0  cvt.s.w     $f11, $f0
    ctx->pc = 0x2631ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x2631d0: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x2631d0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    ctx->pc = 0x2631d4u;
}
