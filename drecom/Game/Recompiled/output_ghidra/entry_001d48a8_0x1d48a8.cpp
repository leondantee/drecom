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

// Function: entry_001d48a8
// Address: 0x1d48a8 - 0x1d48d4
void entry_001d48a8_0x1d48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48a8_0x1d48a8");
#endif

    ctx->pc = 0x1d48a8u;

    // 0x1d48a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1d48ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d48b0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d48b4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d48b8: 0x24560080  addiu       $s6, $v0, 0x80
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d48bc: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d48bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d48c0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d48c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d48c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d48c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d48c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d48cc: 0x0  nop
    ctx->pc = 0x1d48ccu;
    // NOP
    // 0x1d48d0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x1d48d4u;
}
