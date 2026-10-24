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

// Function: entry_00320460
// Address: 0x320460 - 0x32047c
void entry_00320460_0x320460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320460_0x320460");
#endif

    ctx->pc = 0x320460u;

    // 0x320460: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x320460u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x320464: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x320464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x320468: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x320468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32046c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32046cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320470: 0x0  nop
    ctx->pc = 0x320470u;
    // NOP
    // 0x320474: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x320474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x320478: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x320478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x32047cu;
}
