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

// Function: entry_00129418
// Address: 0x129418 - 0x129468
void entry_00129418_0x129418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129418_0x129418");
#endif

    switch (ctx->pc) {
        case 0x129428u: goto label_129428;
        default: break;
    }

    ctx->pc = 0x129418u;

    // 0x129418: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12941c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129420: 0xc05d25c  jal         func_174970
    ctx->pc = 0x129420u;
    SET_GPR_U32(ctx, 31, 0x129428u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129420u, 0x129428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129428u;
label_129428:
    // 0x129428: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x129428u;
    {
        const bool branch_taken_0x129428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129428) {
            ctx->pc = 0x129468u;
            return;
        }
    }
    ctx->pc = 0x129430u;
    // 0x129430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129434: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129438: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12943c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x129440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129444: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129448: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12944c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12944cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129454: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129458: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12945c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12945cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129460: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x129460u;
    {
        const bool branch_taken_0x129460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129460) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x129468u;
}
