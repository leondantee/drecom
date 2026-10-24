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

// Function: entry_0033a908
// Address: 0x33a908 - 0x33a928
void entry_0033a908_0x33a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a908_0x33a908");
#endif

    ctx->pc = 0x33a908u;

    // 0x33a908: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a90c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a910: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a914: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a918: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a920: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a924: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a924u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33a928u;
}
