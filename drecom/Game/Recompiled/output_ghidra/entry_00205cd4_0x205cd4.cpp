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

// Function: entry_00205cd4
// Address: 0x205cd4 - 0x205cf4
void entry_00205cd4_0x205cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205cd4_0x205cd4");
#endif

    ctx->pc = 0x205cd4u;

    // 0x205cd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cd8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x205cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x205cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ce0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x205ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205ce8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x205ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x205cec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x205CECu;
    {
        const bool branch_taken_0x205cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cec) {
            ctx->pc = 0x205E3Cu;
            return;
        }
    }
    ctx->pc = 0x205CF4u;
}
