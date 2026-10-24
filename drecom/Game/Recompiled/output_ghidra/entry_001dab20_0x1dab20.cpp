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

// Function: entry_001dab20
// Address: 0x1dab20 - 0x1dab78
void entry_001dab20_0x1dab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dab20_0x1dab20");
#endif

    ctx->pc = 0x1dab20u;

    // 0x1dab20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab24: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1dab24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dab28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab2c: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x1dab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x1dab30: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x1dab30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x1dab34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab38: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x1dab38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1dab3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab40: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1dab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1dab44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1dab44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dab48: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab4c: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x1dab4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dab50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab54: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1dab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1dab58: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dab60: 0x94630022  lhu         $v1, 0x22($v1)
    ctx->pc = 0x1dab60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x1dab64: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1dab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1dab68: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1dab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1dab6c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab74: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1dab74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x1dab78u;
}
