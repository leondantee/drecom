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

// Function: entry_0033037c
// Address: 0x33037c - 0x3303b0
void entry_0033037c_0x33037c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033037c_0x33037c");
#endif

    ctx->pc = 0x33037cu;

    // 0x33037c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x33037cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x330380: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x330380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x330384: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x330388: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33038c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x33038cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x330390: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x330390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x330394: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330394u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330398: 0xc44c0180  lwc1        $f12, 0x180($v0)
    ctx->pc = 0x330398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33039c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x33039cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3303a0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x3303a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x3303a4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x3303a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3303a8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3303a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3303ac: 0x0  nop
    ctx->pc = 0x3303acu;
    // NOP
    ctx->pc = 0x3303b0u;
}
