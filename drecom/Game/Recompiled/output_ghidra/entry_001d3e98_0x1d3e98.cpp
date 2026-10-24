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

// Function: entry_001d3e98
// Address: 0x1d3e98 - 0x1d3ec4
void entry_001d3e98_0x1d3e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e98_0x1d3e98");
#endif

    ctx->pc = 0x1d3e98u;

    // 0x1d3e98: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1d3e9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3ea0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d3ea4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d3ea8: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d3eac: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3eb0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d3eb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3eb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3ebc: 0x0  nop
    ctx->pc = 0x1d3ebcu;
    // NOP
    // 0x1d3ec0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1d3ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    ctx->pc = 0x1d3ec4u;
}
