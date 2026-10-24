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

// Function: entry_003471c0
// Address: 0x3471c0 - 0x3471e8
void entry_003471c0_0x3471c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003471c0_0x3471c0");
#endif

    ctx->pc = 0x3471c0u;

    // 0x3471c0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3471c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471c4: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x3471c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3471c8: 0xa0e0006e  sb          $zero, 0x6E($a3)
    ctx->pc = 0x3471c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471cc: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x3471ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471d0: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x3471d4: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x3471d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3471d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3471dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3471dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471e0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x3471e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3471e4: 0xa2040072  sb          $a0, 0x72($s0)
    ctx->pc = 0x3471e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3471e8u;
}
