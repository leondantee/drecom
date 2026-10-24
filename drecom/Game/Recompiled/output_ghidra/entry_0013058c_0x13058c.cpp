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

// Function: entry_0013058c
// Address: 0x13058c - 0x1305b4
void entry_0013058c_0x13058c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013058c_0x13058c");
#endif

    ctx->pc = 0x13058cu;

    // 0x13058c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130590: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x130590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130594: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x130594u;
    {
        const bool branch_taken_0x130594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130594) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x13059Cu;
    // 0x13059c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1305a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1305a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1305a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1305a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1305a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1305a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1305ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1305ACu;
    {
        const bool branch_taken_0x1305ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305ac) {
            ctx->pc = 0x130678u;
            return;
        }
    }
    ctx->pc = 0x1305B4u;
}
