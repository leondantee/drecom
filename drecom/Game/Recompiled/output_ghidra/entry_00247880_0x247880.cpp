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

// Function: entry_00247880
// Address: 0x247880 - 0x247898
void entry_00247880_0x247880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247880_0x247880");
#endif

    ctx->pc = 0x247880u;

    // 0x247880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247884: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x247884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x247888: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24788c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x24788cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x247890: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x247890u;
    {
        const bool branch_taken_0x247890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247890) {
            ctx->pc = 0x247964u;
            return;
        }
    }
    ctx->pc = 0x247898u;
}
