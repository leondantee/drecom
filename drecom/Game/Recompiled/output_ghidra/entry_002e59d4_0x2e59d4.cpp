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

// Function: entry_002e59d4
// Address: 0x2e59d4 - 0x2e5a24
void entry_002e59d4_0x2e59d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e59d4_0x2e59d4");
#endif

    switch (ctx->pc) {
        case 0x2e59dcu: goto label_2e59dc;
        default: break;
    }

    ctx->pc = 0x2e59d4u;

    // 0x2e59d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E59D4u;
    SET_GPR_U32(ctx, 31, 0x2E59DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E59D4u, 0x2E59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e59dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e59e0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e59e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e59e4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E59E4u;
    {
        const bool branch_taken_0x2e59e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e59e4) {
            ctx->pc = 0x2E5A24u;
            return;
        }
    }
    ctx->pc = 0x2E59ECu;
    // 0x2e59ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e59f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e59f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e59f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e59f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e59fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a00: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e5a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5a04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5a18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5a1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2E5A1Cu;
    {
        const bool branch_taken_0x2e5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a1c) {
            ctx->pc = 0x2E5AC8u;
            return;
        }
    }
    ctx->pc = 0x2E5A24u;
}
