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

// Function: entry_0016baa8
// Address: 0x16baa8 - 0x16bacc
void entry_0016baa8_0x16baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016baa8_0x16baa8");
#endif

    ctx->pc = 0x16baa8u;

    // 0x16baa8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16baac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bab0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16bab4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BAB4u;
    {
        const bool branch_taken_0x16bab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bab4) {
            ctx->pc = 0x16BACCu;
            return;
        }
    }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16bac0: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BAC4u;
    {
        const bool branch_taken_0x16bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bac4) {
            ctx->pc = 0x16BAD8u;
            return;
        }
    }
    ctx->pc = 0x16BACCu;
}
