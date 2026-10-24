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

// Function: entry_001caa6c
// Address: 0x1caa6c - 0x1caa94
void entry_001caa6c_0x1caa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa6c_0x1caa6c");
#endif

    ctx->pc = 0x1caa6cu;

    // 0x1caa6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1caa70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1caa74: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1CAA74u;
    {
        const bool branch_taken_0x1caa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa74) {
            ctx->pc = 0x1CAC84u;
            return;
        }
    }
    ctx->pc = 0x1CAA7Cu;
    // 0x1caa7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1caa80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1caa84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1caa88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1caa88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1caa8c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1CAA8Cu;
    {
        const bool branch_taken_0x1caa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa8c) {
            ctx->pc = 0x1CAC84u;
            return;
        }
    }
    ctx->pc = 0x1CAA94u;
}
