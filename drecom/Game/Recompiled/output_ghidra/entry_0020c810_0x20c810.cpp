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

// Function: entry_0020c810
// Address: 0x20c810 - 0x20c824
void entry_0020c810_0x20c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c810_0x20c810");
#endif

    ctx->pc = 0x20c810u;

    // 0x20c810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c818: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20c818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c81c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C82Cu;
            return;
        }
    }
    ctx->pc = 0x20C824u;
}
