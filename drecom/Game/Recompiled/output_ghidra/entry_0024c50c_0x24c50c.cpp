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

// Function: entry_0024c50c
// Address: 0x24c50c - 0x24c540
void entry_0024c50c_0x24c50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c50c_0x24c50c");
#endif

    ctx->pc = 0x24c50cu;

    // 0x24c50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24c510: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24c514: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c514u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c518: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x24c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c51c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24c520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24c520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24c524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24c524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c528: 0x0  nop
    ctx->pc = 0x24c528u;
    // NOP
    // 0x24c52c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x24c52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24c530: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x24c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x24c534: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c538: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c53c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c53cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24c540u;
}
