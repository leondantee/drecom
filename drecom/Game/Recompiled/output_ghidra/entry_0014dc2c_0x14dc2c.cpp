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

// Function: entry_0014dc2c
// Address: 0x14dc2c - 0x14dc44
void entry_0014dc2c_0x14dc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc2c_0x14dc2c");
#endif

    ctx->pc = 0x14dc2cu;

    // 0x14dc2c: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x14dc30: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x14dc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dc34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14dc34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14dc38: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14DC38u;
    {
        const bool branch_taken_0x14dc38 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x14dc38) {
            ctx->pc = 0x14DC44u;
            return;
        }
    }
    ctx->pc = 0x14DC40u;
    // 0x14dc40: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14dc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14dc44u;
}
