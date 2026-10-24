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

// Function: entry_001cf020
// Address: 0x1cf020 - 0x1cf034
void entry_001cf020_0x1cf020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf020_0x1cf020");
#endif

    ctx->pc = 0x1cf020u;

    // 0x1cf020: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf024: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf028: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf028u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf02c: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x1CF02Cu;
    {
        const bool branch_taken_0x1cf02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf02c) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CF034u;
}
