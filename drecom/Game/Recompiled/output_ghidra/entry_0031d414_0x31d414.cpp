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

// Function: entry_0031d414
// Address: 0x31d414 - 0x31d438
void entry_0031d414_0x31d414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d414_0x31d414");
#endif

    ctx->pc = 0x31d414u;

    // 0x31d414: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d418: 0x8c4312b4  lw          $v1, 0x12B4($v0)
    ctx->pc = 0x31d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
    // 0x31d41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d420: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31D420u;
    {
        const bool branch_taken_0x31d420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d420) {
            ctx->pc = 0x31D4F8u;
            return;
        }
    }
    ctx->pc = 0x31D428u;
    // 0x31d428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D428u;
    {
        const bool branch_taken_0x31d428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d428) {
            ctx->pc = 0x31D438u;
            return;
        }
    }
    ctx->pc = 0x31D430u;
    // 0x31d430: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x31D430u;
    {
        const bool branch_taken_0x31d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d430) {
            ctx->pc = 0x31D59Cu;
            return;
        }
    }
    ctx->pc = 0x31D438u;
}
