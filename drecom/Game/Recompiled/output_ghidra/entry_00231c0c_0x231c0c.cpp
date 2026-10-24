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

// Function: entry_00231c0c
// Address: 0x231c0c - 0x231c28
void entry_00231c0c_0x231c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231c0c_0x231c0c");
#endif

    ctx->pc = 0x231c0cu;

    // 0x231c0c: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x231c10: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x231c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x231c14: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x231c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x231c18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x231c18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c1c: 0x0  nop
    ctx->pc = 0x231c1cu;
    // NOP
    // 0x231c20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x231c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231c24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x231c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x231c28u;
}
