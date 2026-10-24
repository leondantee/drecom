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

// Function: entry_001c2284
// Address: 0x1c2284 - 0x1c22b4
void entry_001c2284_0x1c2284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2284_0x1c2284");
#endif

    ctx->pc = 0x1c2284u;

    // 0x1c2284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2288: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c2288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c228c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2290: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2294: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2294u;
    {
        const bool branch_taken_0x1c2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2294) {
            ctx->pc = 0x1C22B4u;
            return;
        }
    }
    ctx->pc = 0x1C229Cu;
    // 0x1c229c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c22a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c22a4: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c22a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c22a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c22ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c22acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c22b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c22b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c22b4u;
}
