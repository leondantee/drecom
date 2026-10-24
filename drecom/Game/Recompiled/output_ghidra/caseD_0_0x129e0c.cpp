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

// Function: caseD_0
// Address: 0x129e0c - 0x129e2c
void caseD_0_0x129e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x129e0c");
#endif

    ctx->pc = 0x129e0cu;

    // 0x129e0c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x129e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129e10: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x129e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x129e14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129E14u;
    {
        const bool branch_taken_0x129e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e14) {
            ctx->pc = 0x129E2Cu;
            return;
        }
    }
    ctx->pc = 0x129E1Cu;
    // 0x129e1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x129e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x129e24: 0x106001c3  beqz        $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x129E24u;
    {
        const bool branch_taken_0x129e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e24) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x129E2Cu;
}
