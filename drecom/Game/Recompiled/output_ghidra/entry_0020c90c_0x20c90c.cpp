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

// Function: entry_0020c90c
// Address: 0x20c90c - 0x20c970
void entry_0020c90c_0x20c90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c90c_0x20c90c");
#endif

    switch (ctx->pc) {
        case 0x20c91cu: goto label_20c91c;
        default: break;
    }

    ctx->pc = 0x20c90cu;

    // 0x20c90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c910: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c914: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C914u;
    SET_GPR_U32(ctx, 31, 0x20C91Cu);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C914u, 0x20C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C91Cu;
label_20c91c:
    // 0x20c91c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c920: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20c920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20c924: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20C924u;
    {
        const bool branch_taken_0x20c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c924) {
            ctx->pc = 0x20C9A8u;
            return;
        }
    }
    ctx->pc = 0x20C92Cu;
    // 0x20c92c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20c930: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c934: 0xac43134c  sw          $v1, 0x134C($v0)
    ctx->pc = 0x20c934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 3));
    // 0x20c938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c940: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20c940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c94c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x20c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c954: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20c954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c95c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x20c95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c964: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20c964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20c968: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20C968u;
    {
        const bool branch_taken_0x20c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c968) {
            ctx->pc = 0x20C9A8u;
            return;
        }
    }
    ctx->pc = 0x20C970u;
}
