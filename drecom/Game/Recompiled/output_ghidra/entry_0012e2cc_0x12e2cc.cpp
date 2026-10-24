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

// Function: entry_0012e2cc
// Address: 0x12e2cc - 0x12e2f8
void entry_0012e2cc_0x12e2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2cc_0x12e2cc");
#endif

    ctx->pc = 0x12e2ccu;

    // 0x12e2cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e2d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e2d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2DCu;
    {
        const bool branch_taken_0x12e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2dc) {
            ctx->pc = 0x12E2F8u;
            return;
        }
    }
    ctx->pc = 0x12E2E4u;
    // 0x12e2e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e2ec: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12e2f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12e2f4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x12e2f8u;
}
