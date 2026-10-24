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

// Function: entry_0016b958
// Address: 0x16b958 - 0x16b97c
void entry_0016b958_0x16b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b958_0x16b958");
#endif

    ctx->pc = 0x16b958u;

    // 0x16b958: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b95c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b960: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b964: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B964u;
    {
        const bool branch_taken_0x16b964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b964) {
            ctx->pc = 0x16B97Cu;
            return;
        }
    }
    ctx->pc = 0x16B96Cu;
    // 0x16b96c: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x16b96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b970: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16b970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B974u;
    {
        const bool branch_taken_0x16b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b974) {
            ctx->pc = 0x16B988u;
            return;
        }
    }
    ctx->pc = 0x16B97Cu;
}
