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

// Function: entry_0019ba8c
// Address: 0x19ba8c - 0x19baa4
void entry_0019ba8c_0x19ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba8c_0x19ba8c");
#endif

    ctx->pc = 0x19ba8cu;

    // 0x19ba8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19ba90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19ba94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ba98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ba9c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x19BA9Cu;
    {
        const bool branch_taken_0x19ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba9c) {
            ctx->pc = 0x19BBFCu;
            return;
        }
    }
    ctx->pc = 0x19BAA4u;
}
