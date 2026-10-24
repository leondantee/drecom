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

// Function: entry_0033aa08
// Address: 0x33aa08 - 0x33aa34
void entry_0033aa08_0x33aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aa08_0x33aa08");
#endif

    ctx->pc = 0x33aa08u;

    // 0x33aa08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aa0c: 0x1c40ffed  bgtz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33AA0Cu;
    {
        const bool branch_taken_0x33aa0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33aa0c) {
            ctx->pc = 0x33A9C4u;
            return;
        }
    }
    ctx->pc = 0x33AA14u;
    // 0x33aa14: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33aa18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aa1c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aa20: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33aa24: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33aa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33aa2c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33aa30: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33aa30u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33aa34u;
}
