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

// Function: entry_0017a270
// Address: 0x17a270 - 0x17a284
void entry_0017a270_0x17a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a270_0x17a270");
#endif

    ctx->pc = 0x17a270u;

    // 0x17a270: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a278: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x17a278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A27Cu;
    {
        const bool branch_taken_0x17a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a27c) {
            ctx->pc = 0x17A288u;
            return;
        }
    }
    ctx->pc = 0x17A284u;
}
