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

// Function: entry_0012e2a0
// Address: 0x12e2a0 - 0x12e2cc
void entry_0012e2a0_0x12e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2a0_0x12e2a0");
#endif

    ctx->pc = 0x12e2a0u;

    // 0x12e2a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e2a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e2ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12e2b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2B0u;
    {
        const bool branch_taken_0x12e2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2b0) {
            ctx->pc = 0x12E2CCu;
            return;
        }
    }
    ctx->pc = 0x12E2B8u;
    // 0x12e2b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e2c0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x12e2c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12e2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12e2c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x12e2ccu;
}
