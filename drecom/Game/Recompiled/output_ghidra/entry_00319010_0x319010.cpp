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

// Function: entry_00319010
// Address: 0x319010 - 0x31905c
void entry_00319010_0x319010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00319010_0x319010");
#endif

    switch (ctx->pc) {
        case 0x31901cu: goto label_31901c;
        default: break;
    }

    ctx->pc = 0x319010u;

    // 0x319010: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319014: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x319014u;
    SET_GPR_U32(ctx, 31, 0x31901Cu);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x319014u, 0x31901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31901Cu;
label_31901c:
    // 0x31901c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31901Cu;
    {
        const bool branch_taken_0x31901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31901c) {
            ctx->pc = 0x31905Cu;
            return;
        }
    }
    ctx->pc = 0x319024u;
    // 0x319024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x319024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x319028: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31902c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31902cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x319030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319034: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319038: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x319038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31903c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x319040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x319044: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x319044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x319048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31904c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x319050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x319050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x319054: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x319054u;
    {
        const bool branch_taken_0x319054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319054) {
            ctx->pc = 0x3191D0u;
            return;
        }
    }
    ctx->pc = 0x31905Cu;
}
