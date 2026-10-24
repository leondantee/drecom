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

// Function: entry_002f7cf0
// Address: 0x2f7cf0 - 0x2f7d10
void entry_002f7cf0_0x2f7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7cf0_0x2f7cf0");
#endif

    ctx->pc = 0x2f7cf0u;

    // 0x2f7cf0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cf4: 0x90830101  lbu         $v1, 0x101($a0)
    ctx->pc = 0x2f7cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 257)));
    // 0x2f7cf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7CF8u;
    {
        const bool branch_taken_0x2f7cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7cf8) {
            ctx->pc = 0x2F7D10u;
            return;
        }
    }
    ctx->pc = 0x2F7D00u;
    // 0x2f7d00: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x2f7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7d04: 0x90c70101  lbu         $a3, 0x101($a2)
    ctx->pc = 0x2f7d04u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 257)));
    // 0x2f7d08: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x2f7d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f7d0c: 0xa0c80101  sb          $t0, 0x101($a2)
    ctx->pc = 0x2f7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x2f7d10u;
}
