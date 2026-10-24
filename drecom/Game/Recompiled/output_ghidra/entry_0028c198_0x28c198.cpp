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

// Function: entry_0028c198
// Address: 0x28c198 - 0x28c1b4
void entry_0028c198_0x28c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c198_0x28c198");
#endif

    ctx->pc = 0x28c198u;

    // 0x28c198: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x28c198u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28c19c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x28c19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28c1a0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x28c1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x28c1a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28c1a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c1a8: 0x0  nop
    ctx->pc = 0x28c1a8u;
    // NOP
    // 0x28c1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c1b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28c1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x28c1b4u;
}
