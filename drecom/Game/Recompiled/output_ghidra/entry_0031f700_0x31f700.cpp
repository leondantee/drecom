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

// Function: entry_0031f700
// Address: 0x31f700 - 0x31f71c
void entry_0031f700_0x31f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f700_0x31f700");
#endif

    ctx->pc = 0x31f700u;

    // 0x31f700: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x31f700u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x31f704: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x31f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x31f708: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31f708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31f70c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31f70cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f710: 0x0  nop
    ctx->pc = 0x31f710u;
    // NOP
    // 0x31f714: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31f714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31f718: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31f718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x31f71cu;
}
