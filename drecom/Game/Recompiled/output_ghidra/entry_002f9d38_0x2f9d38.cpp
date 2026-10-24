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

// Function: entry_002f9d38
// Address: 0x2f9d38 - 0x2f9d70
void entry_002f9d38_0x2f9d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9d38_0x2f9d38");
#endif

    ctx->pc = 0x2f9d38u;

    // 0x2f9d38: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d3c: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2f9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2f9d40: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x2F9D40u;
    {
        const bool branch_taken_0x2f9d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d40) {
            ctx->pc = 0x2F9F34u;
            return;
        }
    }
    ctx->pc = 0x2F9D48u;
    // 0x2f9d48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d4c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d50: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x2f9d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f9d54: 0x14200077  bnez        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x2F9D54u;
    {
        const bool branch_taken_0x2f9d54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d54) {
            ctx->pc = 0x2F9F34u;
            return;
        }
    }
    ctx->pc = 0x2F9D5Cu;
    // 0x2f9d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d60: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f9d64: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x2f9d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f9d68: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F9D68u;
    {
        const bool branch_taken_0x2f9d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d68) {
            ctx->pc = 0x2F9F34u;
            return;
        }
    }
    ctx->pc = 0x2F9D70u;
}
