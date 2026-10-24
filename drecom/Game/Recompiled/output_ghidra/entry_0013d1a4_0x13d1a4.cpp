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

// Function: entry_0013d1a4
// Address: 0x13d1a4 - 0x13d1b8
void entry_0013d1a4_0x13d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d1a4_0x13d1a4");
#endif

    ctx->pc = 0x13d1a4u;

    // 0x13d1a4: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D1A8u;
    {
        const bool branch_taken_0x13d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1a8) {
            ctx->pc = 0x13D1B8u;
            return;
        }
    }
    ctx->pc = 0x13D1B0u;
    // 0x13d1b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13d1b4: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13d1b8u;
}
