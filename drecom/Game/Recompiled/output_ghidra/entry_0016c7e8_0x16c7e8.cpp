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

// Function: entry_0016c7e8
// Address: 0x16c7e8 - 0x16c80c
void entry_0016c7e8_0x16c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7e8_0x16c7e8");
#endif

    ctx->pc = 0x16c7e8u;

    // 0x16c7e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c7ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c7f0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c7f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c7f4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C7F4u;
    {
        const bool branch_taken_0x16c7f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7f4) {
            ctx->pc = 0x16C80Cu;
            return;
        }
    }
    ctx->pc = 0x16C7FCu;
    // 0x16c7fc: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16c800: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x16c800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16c804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C804u;
    {
        const bool branch_taken_0x16c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c804) {
            ctx->pc = 0x16C818u;
            return;
        }
    }
    ctx->pc = 0x16C80Cu;
}
