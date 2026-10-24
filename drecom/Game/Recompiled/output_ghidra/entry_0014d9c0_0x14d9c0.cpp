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

// Function: entry_0014d9c0
// Address: 0x14d9c0 - 0x14d9d8
void entry_0014d9c0_0x14d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9c0_0x14d9c0");
#endif

    ctx->pc = 0x14d9c0u;

    // 0x14d9c0: 0x860215ec  lh          $v0, 0x15EC($s0)
    ctx->pc = 0x14d9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x14d9c4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x14d9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14d9c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x14d9c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x14d9cc: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D9CCu;
    {
        const bool branch_taken_0x14d9cc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x14d9cc) {
            ctx->pc = 0x14D9D8u;
            return;
        }
    }
    ctx->pc = 0x14D9D4u;
    // 0x14d9d4: 0xa60015ec  sh          $zero, 0x15EC($s0)
    ctx->pc = 0x14d9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14d9d8u;
}
