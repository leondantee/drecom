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

// Function: entry_00364f3c
// Address: 0x364f3c - 0x364f54
void entry_00364f3c_0x364f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364f3c_0x364f3c");
#endif

    ctx->pc = 0x364f3cu;

    // 0x364f3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364f40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x364f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x364f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x364f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x364f48: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x364f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x364f4c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x364F4Cu;
    {
        const bool branch_taken_0x364f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364f4c) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x364F54u;
}
