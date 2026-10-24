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

// Function: entry_003203e8
// Address: 0x3203e8 - 0x320404
void entry_003203e8_0x3203e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003203e8_0x3203e8");
#endif

    ctx->pc = 0x3203e8u;

    // 0x3203e8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3203e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3203ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3203ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3203f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3203f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3203f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3203f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3203f8: 0x0  nop
    ctx->pc = 0x3203f8u;
    // NOP
    // 0x3203fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3203fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x320400: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x320400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x320404u;
}
