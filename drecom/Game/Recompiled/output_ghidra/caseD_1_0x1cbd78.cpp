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

// Function: caseD_1
// Address: 0x1cbd78 - 0x1cbdb8
void caseD_1_0x1cbd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1cbd78");
#endif

    switch (ctx->pc) {
        case 0x1cbd98u: goto label_1cbd98;
        default: break;
    }

    ctx->pc = 0x1cbd78u;

    // 0x1cbd78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbd7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbd80: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbd84: 0x24063c62  addiu       $a2, $zero, 0x3C62
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15458));
    // 0x1cbd88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbd8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbd90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBD90u;
    SET_GPR_U32(ctx, 31, 0x1CBD98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBD90u, 0x1CBD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD98u;
label_1cbd98:
    // 0x1cbd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cbd9c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbda0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbda0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbda4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbda4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbda8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbdac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbdb0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1CBDB0u;
    {
        const bool branch_taken_0x1cbdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb0) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBDB8u;
}
