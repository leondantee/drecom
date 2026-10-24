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

// Function: entry_001b47dc
// Address: 0x1b47dc - 0x1b4808
void entry_001b47dc_0x1b47dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b47dc_0x1b47dc");
#endif

    ctx->pc = 0x1b47dcu;

    // 0x1b47dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47e0: 0x8463122c  lh          $v1, 0x122C($v1)
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4652)));
    // 0x1b47e4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1b47e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1b47e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1b47ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b47f0: 0x8463122e  lh          $v1, 0x122E($v1)
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4654)));
    // 0x1b47f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b47f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b47f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b47f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b47fc: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x1b47fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b4800: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1b4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b4804: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x1b4804u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    ctx->pc = 0x1b4808u;
}
