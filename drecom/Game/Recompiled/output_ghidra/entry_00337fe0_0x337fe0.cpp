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

// Function: entry_00337fe0
// Address: 0x337fe0 - 0x337ffc
void entry_00337fe0_0x337fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337fe0_0x337fe0");
#endif

    ctx->pc = 0x337fe0u;

    // 0x337fe0: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x337fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x337fe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x337fe8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x337fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x337fec: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x337fecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x337ff0: 0x0  nop
    ctx->pc = 0x337ff0u;
    // NOP
    // 0x337ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x337ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x337ff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x337ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x337ffcu;
}
