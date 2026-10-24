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

// Function: entry_001b8274
// Address: 0x1b8274 - 0x1b8298
void entry_001b8274_0x1b8274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8274_0x1b8274");
#endif

    ctx->pc = 0x1b8274u;

    // 0x1b8274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8278: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b827c: 0xa4c3127a  sh          $v1, 0x127A($a2)
    ctx->pc = 0x1b827cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b8280: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8284: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x1b8284u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b8288: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b828c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1b828cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8290: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B8290u;
    {
        const bool branch_taken_0x1b8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8290) {
            ctx->pc = 0x1B82C8u;
            return;
        }
    }
    ctx->pc = 0x1B8298u;
}
