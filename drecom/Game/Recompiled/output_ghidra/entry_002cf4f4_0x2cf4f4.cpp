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

// Function: entry_002cf4f4
// Address: 0x2cf4f4 - 0x2cf510
void entry_002cf4f4_0x2cf4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf4f4_0x2cf4f4");
#endif

    ctx->pc = 0x2cf4f4u;

    // 0x2cf4f4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cf4f8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf4fc: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf504: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
    // 0x2cf508: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2CF508u;
    {
        const bool branch_taken_0x2cf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf508) {
            ctx->pc = 0x2CF8C8u;
            return;
        }
    }
    ctx->pc = 0x2CF510u;
}
