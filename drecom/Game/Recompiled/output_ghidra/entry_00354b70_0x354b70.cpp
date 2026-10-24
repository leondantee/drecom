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

// Function: entry_00354b70
// Address: 0x354b70 - 0x354b8c
void entry_00354b70_0x354b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354b70_0x354b70");
#endif

    ctx->pc = 0x354b70u;

    // 0x354b70: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x354b74: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x354b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x354b78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x354b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x354b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x354b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354b80: 0x0  nop
    ctx->pc = 0x354b80u;
    // NOP
    // 0x354b84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x354b88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x354b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x354b8cu;
}
