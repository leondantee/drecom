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

// Function: entry_00198360
// Address: 0x198360 - 0x19837c
void entry_00198360_0x198360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198360_0x198360");
#endif

    ctx->pc = 0x198360u;

    // 0x198360: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198364: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x198364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x198368: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198368u;
    {
        const bool branch_taken_0x198368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198368) {
            ctx->pc = 0x19837Cu;
            return;
        }
    }
    ctx->pc = 0x198370u;
    // 0x198370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198374: 0x1603001b  bne         $s0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x198374u;
    {
        const bool branch_taken_0x198374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x198374) {
            ctx->pc = 0x1983E4u;
            return;
        }
    }
    ctx->pc = 0x19837Cu;
}
