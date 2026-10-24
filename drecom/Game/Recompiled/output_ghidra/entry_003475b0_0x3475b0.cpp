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

// Function: entry_003475b0
// Address: 0x3475b0 - 0x3475d4
void entry_003475b0_0x3475b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003475b0_0x3475b0");
#endif

    ctx->pc = 0x3475b0u;

    // 0x3475b0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475b4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3475b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3475b8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3475b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3475bc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3475bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3475c0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3475C0u;
    {
        const bool branch_taken_0x3475c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3475c0) {
            ctx->pc = 0x3475D4u;
            return;
        }
    }
    ctx->pc = 0x3475C8u;
    // 0x3475c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3475c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3475cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3475d0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3475d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3475d4u;
}
