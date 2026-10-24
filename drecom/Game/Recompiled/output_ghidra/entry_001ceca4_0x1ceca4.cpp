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

// Function: entry_001ceca4
// Address: 0x1ceca4 - 0x1cecd0
void entry_001ceca4_0x1ceca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceca4_0x1ceca4");
#endif

    ctx->pc = 0x1ceca4u;

    // 0x1ceca4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceca8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ceca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cecac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1cecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1cecb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cecb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CECB4u;
    {
        const bool branch_taken_0x1cecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecb4) {
            ctx->pc = 0x1CECD0u;
            return;
        }
    }
    ctx->pc = 0x1CECBCu;
    // 0x1cecbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cecc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cecc4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cecc8: 0x100004b3  b           . + 4 + (0x4B3 << 2)
    ctx->pc = 0x1CECC8u;
    {
        const bool branch_taken_0x1cecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecc8) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CECD0u;
}
