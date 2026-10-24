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

// Function: entry_0021fe58
// Address: 0x21fe58 - 0x21fe94
void entry_0021fe58_0x21fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fe58_0x21fe58");
#endif

    ctx->pc = 0x21fe58u;

    // 0x21fe58: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fe5c: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x21fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21fe60: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fe64: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21FE64u;
    {
        const bool branch_taken_0x21fe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe64) {
            ctx->pc = 0x21FEF4u;
            return;
        }
    }
    ctx->pc = 0x21FE6Cu;
    // 0x21fe6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fe70: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21FE70u;
    {
        const bool branch_taken_0x21fe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe70) {
            ctx->pc = 0x21FED4u;
            return;
        }
    }
    ctx->pc = 0x21FE78u;
    // 0x21fe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fe7c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FE7Cu;
    {
        const bool branch_taken_0x21fe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fe7c) {
            ctx->pc = 0x21FEB4u;
            return;
        }
    }
    ctx->pc = 0x21FE84u;
    // 0x21fe84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FE84u;
    {
        const bool branch_taken_0x21fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe84) {
            ctx->pc = 0x21FE94u;
            return;
        }
    }
    ctx->pc = 0x21FE8Cu;
    // 0x21fe8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x21FE8Cu;
    {
        const bool branch_taken_0x21fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe8c) {
            ctx->pc = 0x21FF0Cu;
            return;
        }
    }
    ctx->pc = 0x21FE94u;
}
