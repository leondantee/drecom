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

// Function: entry_00275568
// Address: 0x275568 - 0x275588
void entry_00275568_0x275568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275568_0x275568");
#endif

    ctx->pc = 0x275568u;

    // 0x275568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x275568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27556c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x27556cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x275570: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x275570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x275574: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275578: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x275578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
    // 0x27557c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x27557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x275580: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x275580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275584: 0x0  nop
    ctx->pc = 0x275584u;
    // NOP
    ctx->pc = 0x275588u;
}
