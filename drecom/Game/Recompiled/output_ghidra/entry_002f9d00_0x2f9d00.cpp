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

// Function: entry_002f9d00
// Address: 0x2f9d00 - 0x2f9d38
void entry_002f9d00_0x2f9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9d00_0x2f9d00");
#endif

    ctx->pc = 0x2f9d00u;

    // 0x2f9d00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d04: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2f9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f9d08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9D08u;
    {
        const bool branch_taken_0x2f9d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d08) {
            ctx->pc = 0x2F9D38u;
            return;
        }
    }
    ctx->pc = 0x2F9D10u;
    // 0x2f9d10: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9d10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d14: 0x8ce300d4  lw          $v1, 0xD4($a3)
    ctx->pc = 0x2f9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2f9d18: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f9d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f9d1c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9D1Cu;
    {
        const bool branch_taken_0x2f9d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d1c) {
            ctx->pc = 0x2F9D38u;
            return;
        }
    }
    ctx->pc = 0x2F9D24u;
    // 0x2f9d24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d28: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d2c: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x2f9d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f9d30: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9D30u;
    {
        const bool branch_taken_0x2f9d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d30) {
            ctx->pc = 0x2F9D70u;
            return;
        }
    }
    ctx->pc = 0x2F9D38u;
}
