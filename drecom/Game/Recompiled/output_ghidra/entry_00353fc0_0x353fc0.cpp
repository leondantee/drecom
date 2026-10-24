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

// Function: entry_00353fc0
// Address: 0x353fc0 - 0x353fec
void entry_00353fc0_0x353fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353fc0_0x353fc0");
#endif

    ctx->pc = 0x353fc0u;

    // 0x353fc0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353fc4: 0x84a40014  lh          $a0, 0x14($a1)
    ctx->pc = 0x353fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x353fc8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x353fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x353fcc: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x353fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x353fd0: 0x1480040f  bnez        $a0, . + 4 + (0x40F << 2)
    ctx->pc = 0x353FD0u;
    {
        const bool branch_taken_0x353fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353fd0) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x353FD8u;
    // 0x353fd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353fdc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x353fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353fe0: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x353fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x353fe4: 0x1000040a  b           . + 4 + (0x40A << 2)
    ctx->pc = 0x353FE4u;
    {
        const bool branch_taken_0x353fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353fe4) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x353FECu;
}
