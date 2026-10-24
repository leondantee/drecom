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

// Function: entry_003210d0
// Address: 0x3210d0 - 0x3210ec
void entry_003210d0_0x3210d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003210d0_0x3210d0");
#endif

    ctx->pc = 0x3210d0u;

    // 0x3210d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3210d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3210d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3210d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3210d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3210d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3210dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3210dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3210e0: 0x0  nop
    ctx->pc = 0x3210e0u;
    // NOP
    // 0x3210e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3210e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3210e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3210e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x3210ecu;
}
