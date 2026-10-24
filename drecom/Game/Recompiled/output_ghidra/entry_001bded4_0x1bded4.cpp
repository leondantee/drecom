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

// Function: entry_001bded4
// Address: 0x1bded4 - 0x1bdefc
void entry_001bded4_0x1bded4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bded4_0x1bded4");
#endif

    ctx->pc = 0x1bded4u;

    // 0x1bded4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bded8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1bded8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1bdedc: 0x1060020b  beqz        $v1, . + 4 + (0x20B << 2)
    ctx->pc = 0x1BDEDCu;
    {
        const bool branch_taken_0x1bdedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdedc) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDEE4u;
    // 0x1bdee4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdee8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1bdee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bdeec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdef0: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bdef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdef4: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x1BDEF4u;
    {
        const bool branch_taken_0x1bdef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdef4) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDEFCu;
}
