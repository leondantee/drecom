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

// Function: entry_00127928
// Address: 0x127928 - 0x127978
void entry_00127928_0x127928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127928_0x127928");
#endif

    switch (ctx->pc) {
        case 0x127938u: goto label_127938;
        default: break;
    }

    ctx->pc = 0x127928u;

    // 0x127928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12792c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127930: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127930u;
    SET_GPR_U32(ctx, 31, 0x127938u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127930u, 0x127938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127938u;
label_127938:
    // 0x127938: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x127938u;
    {
        const bool branch_taken_0x127938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127938) {
            ctx->pc = 0x127978u;
            return;
        }
    }
    ctx->pc = 0x127940u;
    // 0x127940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127944: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127948: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12794c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x127950: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127954: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12795c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12795cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127964: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12796c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12796cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127970: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x127970u;
    {
        const bool branch_taken_0x127970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127970) {
            ctx->pc = 0x127A58u;
            return;
        }
    }
    ctx->pc = 0x127978u;
}
