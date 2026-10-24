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

// Function: entry_0036aae4
// Address: 0x36aae4 - 0x36aafc
void entry_0036aae4_0x36aae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036aae4_0x36aae4");
#endif

    ctx->pc = 0x36aae4u;

    // 0x36aae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aae8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x36aae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x36aaec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36aaf0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x36aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36aaf4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x36AAF4u;
    {
        const bool branch_taken_0x36aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aaf4) {
            ctx->pc = 0x36ABD0u;
            return;
        }
    }
    ctx->pc = 0x36AAFCu;
}
