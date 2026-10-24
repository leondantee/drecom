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

// Function: entry_00340a70
// Address: 0x340a70 - 0x340a84
void entry_00340a70_0x340a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340a70_0x340a70");
#endif

    ctx->pc = 0x340a70u;

    // 0x340a70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x340a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340a74: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x340a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x340a78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x340a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x340a7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x340a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x340a80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x340a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x340a84u;
}
