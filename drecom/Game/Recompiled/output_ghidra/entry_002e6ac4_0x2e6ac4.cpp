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

// Function: entry_002e6ac4
// Address: 0x2e6ac4 - 0x2e6b18
void entry_002e6ac4_0x2e6ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6ac4_0x2e6ac4");
#endif

    switch (ctx->pc) {
        case 0x2e6ad0u: goto label_2e6ad0;
        default: break;
    }

    ctx->pc = 0x2e6ac4u;

    // 0x2e6ac4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ac8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6AC8u;
    SET_GPR_U32(ctx, 31, 0x2E6AD0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6AC8u, 0x2E6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AD0u;
label_2e6ad0:
    // 0x2e6ad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ad4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e6ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e6ad8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6AD8u;
    {
        const bool branch_taken_0x2e6ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ad8) {
            ctx->pc = 0x2E6B18u;
            return;
        }
    }
    ctx->pc = 0x2E6AE0u;
    // 0x2e6ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ae8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6aec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6af0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6af4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e6af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6af8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6afc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6b00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6b04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e6b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6b0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e6b10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6B10u;
    {
        const bool branch_taken_0x2e6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b10) {
            ctx->pc = 0x2E6B18u;
            return;
        }
    }
    ctx->pc = 0x2E6B18u;
}
