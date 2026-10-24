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

// Function: entry_00197770
// Address: 0x197770 - 0x197788
void entry_00197770_0x197770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197770_0x197770");
#endif

    ctx->pc = 0x197770u;

    // 0x197770: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197774: 0xa4e00096  sh          $zero, 0x96($a3)
    ctx->pc = 0x197774u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x197778: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x197778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19777c: 0xa5000094  sh          $zero, 0x94($t0)
    ctx->pc = 0x19777cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x197780: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x197780u;
    {
        const bool branch_taken_0x197780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197780) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197788u;
}
