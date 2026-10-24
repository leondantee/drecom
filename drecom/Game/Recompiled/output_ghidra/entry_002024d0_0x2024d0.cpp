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

// Function: entry_002024d0
// Address: 0x2024d0 - 0x2024ec
void entry_002024d0_0x2024d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024d0_0x2024d0");
#endif

    ctx->pc = 0x2024d0u;

    // 0x2024d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2024d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2024d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2024d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2024dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2024dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024e0: 0x0  nop
    ctx->pc = 0x2024e0u;
    // NOP
    // 0x2024e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2024e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2024e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2024e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x2024ecu;
}
