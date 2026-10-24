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

// Function: entry_001c4d94
// Address: 0x1c4d94 - 0x1c4dc4
void entry_001c4d94_0x1c4d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4d94_0x1c4d94");
#endif

    ctx->pc = 0x1c4d94u;

    // 0x1c4d94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d98: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c4d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c4d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4da0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c4da4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4DA4u;
    {
        const bool branch_taken_0x1c4da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4da4) {
            ctx->pc = 0x1C4DC4u;
            return;
        }
    }
    ctx->pc = 0x1C4DACu;
    // 0x1c4dac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4db0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4db4: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c4db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c4db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c4dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4dc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c4dc4u;
}
