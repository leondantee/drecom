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

// Function: entry_001bd068
// Address: 0x1bd068 - 0x1bd08c
void entry_001bd068_0x1bd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd068_0x1bd068");
#endif

    ctx->pc = 0x1bd068u;

    // 0x1bd068: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd06c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd070: 0xa487127a  sh          $a3, 0x127A($a0)
    ctx->pc = 0x1bd070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 7));
    // 0x1bd074: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd078: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x1bd078u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd07c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd080: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd084: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD084u;
    {
        const bool branch_taken_0x1bd084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd084) {
            ctx->pc = 0x1BD0BCu;
            return;
        }
    }
    ctx->pc = 0x1BD08Cu;
}
