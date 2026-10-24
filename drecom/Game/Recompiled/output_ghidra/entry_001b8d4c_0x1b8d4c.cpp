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

// Function: entry_001b8d4c
// Address: 0x1b8d4c - 0x1b8d74
void entry_001b8d4c_0x1b8d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8d4c_0x1b8d4c");
#endif

    ctx->pc = 0x1b8d4cu;

    // 0x1b8d4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8d50: 0x906609e7  lbu         $a2, 0x9E7($v1)
    ctx->pc = 0x1b8d50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b8d54: 0x10c0028d  beqz        $a2, . + 4 + (0x28D << 2)
    ctx->pc = 0x1B8D54u;
    {
        const bool branch_taken_0x1b8d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d54) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D5Cu;
    // 0x1b8d5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8d60: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1b8d60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8d64: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b8d68: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b8d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b8d6c: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x1B8D6Cu;
    {
        const bool branch_taken_0x1b8d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d6c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D74u;
}
