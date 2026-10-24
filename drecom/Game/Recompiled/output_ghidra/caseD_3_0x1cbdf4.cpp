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

// Function: caseD_3
// Address: 0x1cbdf4 - 0x1cbe34
void caseD_3_0x1cbdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1cbdf4");
#endif

    switch (ctx->pc) {
        case 0x1cbe14u: goto label_1cbe14;
        default: break;
    }

    ctx->pc = 0x1cbdf4u;

    // 0x1cbdf4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbdf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbdfc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbe00: 0x24063c9e  addiu       $a2, $zero, 0x3C9E
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15518));
    // 0x1cbe04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbe08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbe0c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBE0Cu, 0x1CBE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE14u;
label_1cbe14:
    // 0x1cbe14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cbe18: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1cbe18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbe1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbe20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe24: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbe24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbe28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbe2c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1CBE2Cu;
    {
        const bool branch_taken_0x1cbe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe2c) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBE34u;
}
