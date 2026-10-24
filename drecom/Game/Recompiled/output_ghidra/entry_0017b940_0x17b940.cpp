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

// Function: entry_0017b940
// Address: 0x17b940 - 0x17b950
void entry_0017b940_0x17b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b940_0x17b940");
#endif

    ctx->pc = 0x17b940u;

    // 0x17b940: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b944: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17b944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17b948: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x17B948u;
    {
        const bool branch_taken_0x17b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b948) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17B950u;
}
