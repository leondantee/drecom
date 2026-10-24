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

// Function: entry_00135bb0
// Address: 0x135bb0 - 0x135bdc
void entry_00135bb0_0x135bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135bb0_0x135bb0");
#endif

    ctx->pc = 0x135bb0u;

    // 0x135bb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x135bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135bb4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x135BB4u;
    {
        const bool branch_taken_0x135bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bb4) {
            ctx->pc = 0x135C04u;
            return;
        }
    }
    ctx->pc = 0x135BBCu;
    // 0x135bbc: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135bc0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135BC0u;
    {
        const bool branch_taken_0x135bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bc0) {
            ctx->pc = 0x135BDCu;
            return;
        }
    }
    ctx->pc = 0x135BC8u;
    // 0x135bc8: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135bcc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135bd0: 0xa6040086  sh          $a0, 0x86($s0)
    ctx->pc = 0x135bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 4));
    // 0x135bd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x135BD4u;
    {
        const bool branch_taken_0x135bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bd4) {
            ctx->pc = 0x135C40u;
            return;
        }
    }
    ctx->pc = 0x135BDCu;
}
