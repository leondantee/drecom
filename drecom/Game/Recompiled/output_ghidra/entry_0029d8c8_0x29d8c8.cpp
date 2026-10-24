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

// Function: entry_0029d8c8
// Address: 0x29d8c8 - 0x29d8f0
void entry_0029d8c8_0x29d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d8c8_0x29d8c8");
#endif

    ctx->pc = 0x29d8c8u;

    // 0x29d8c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d8cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d8d0: 0x94420042  lhu         $v0, 0x42($v0)
    ctx->pc = 0x29d8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x29d8d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D8D4u;
    {
        const bool branch_taken_0x29d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8d4) {
            ctx->pc = 0x29D8F0u;
            return;
        }
    }
    ctx->pc = 0x29D8DCu;
    // 0x29d8dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d8e0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d8e4: 0x94620042  lhu         $v0, 0x42($v1)
    ctx->pc = 0x29d8e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x29d8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d8ec: 0xa4620042  sh          $v0, 0x42($v1)
    ctx->pc = 0x29d8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29d8f0u;
}
