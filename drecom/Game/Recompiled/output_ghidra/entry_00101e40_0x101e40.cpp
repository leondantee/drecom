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

// Function: entry_00101e40
// Address: 0x101e40 - 0x101e5c
void entry_00101e40_0x101e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e40_0x101e40");
#endif

    ctx->pc = 0x101e40u;

label_101e40:
    // 0x101e40: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x101e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x101e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x101e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x101e48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x101e4c: 0x0  nop
    ctx->pc = 0x101e4cu;
    // NOP
    // 0x101e50: 0x0  nop
    ctx->pc = 0x101e50u;
    // NOP
    // 0x101e54: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101E54u;
    {
        const bool branch_taken_0x101e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x101e54) {
            ctx->pc = 0x101E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e40;
        }
    }
    ctx->pc = 0x101E5Cu;
}
