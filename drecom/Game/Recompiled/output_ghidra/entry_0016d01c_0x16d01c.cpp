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

// Function: entry_0016d01c
// Address: 0x16d01c - 0x16d040
void entry_0016d01c_0x16d01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d01c_0x16d01c");
#endif

    ctx->pc = 0x16d01cu;

    // 0x16d01c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d020: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d024: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d028: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D028u;
    {
        const bool branch_taken_0x16d028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d028) {
            ctx->pc = 0x16D040u;
            return;
        }
    }
    ctx->pc = 0x16D030u;
    // 0x16d030: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16d030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d034: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D038u;
    {
        const bool branch_taken_0x16d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d038) {
            ctx->pc = 0x16D04Cu;
            return;
        }
    }
    ctx->pc = 0x16D040u;
}
