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

// Function: entry_0028d80c
// Address: 0x28d80c - 0x28d828
void entry_0028d80c_0x28d80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d80c_0x28d80c");
#endif

    ctx->pc = 0x28d80cu;

    // 0x28d80c: 0x92086624  lbu         $t0, 0x6624($s0)
    ctx->pc = 0x28d80cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d810: 0x310700ff  andi        $a3, $t0, 0xFF
    ctx->pc = 0x28d810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x28d814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d818: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D818u;
    {
        const bool branch_taken_0x28d818 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x28d818) {
            ctx->pc = 0x28D828u;
            return;
        }
    }
    ctx->pc = 0x28D820u;
    // 0x28d820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d824: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28d824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x28d828u;
}
