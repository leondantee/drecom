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

// Function: entry_00354394
// Address: 0x354394 - 0x3543b0
void entry_00354394_0x354394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354394_0x354394");
#endif

    ctx->pc = 0x354394u;

    // 0x354394: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x354394u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x354398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x354398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35439c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x35439cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3543a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3543a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3543a4: 0x0  nop
    ctx->pc = 0x3543a4u;
    // NOP
    // 0x3543a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3543a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3543ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3543acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x3543b0u;
}
