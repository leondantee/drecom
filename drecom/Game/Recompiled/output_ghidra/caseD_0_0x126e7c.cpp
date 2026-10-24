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
// Address: 0x126e7c - 0x126e9c
void caseD_0_0x126e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x126e7c");
#endif

    ctx->pc = 0x126e7cu;

    // 0x126e7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126e80: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x126e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x126e84: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x126E84u;
    {
        const bool branch_taken_0x126e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126e84) {
            ctx->pc = 0x126E9Cu;
            return;
        }
    }
    ctx->pc = 0x126E8Cu;
    // 0x126e8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126e90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x126e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x126e94: 0x10600137  beqz        $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x126E94u;
    {
        const bool branch_taken_0x126e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e94) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x126E9Cu;
}
