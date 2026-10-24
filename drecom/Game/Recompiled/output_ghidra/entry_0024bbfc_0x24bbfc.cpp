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

// Function: entry_0024bbfc
// Address: 0x24bbfc - 0x24bc10
void entry_0024bbfc_0x24bbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024bbfc_0x24bbfc");
#endif

    ctx->pc = 0x24bbfcu;

    // 0x24bbfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24bc00: 0x3404a301  ori         $a0, $zero, 0xA301
    ctx->pc = 0x24bc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41729);
    // 0x24bc04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24bc04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24bc08: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24bc0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24bc0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24bc10u;
}
