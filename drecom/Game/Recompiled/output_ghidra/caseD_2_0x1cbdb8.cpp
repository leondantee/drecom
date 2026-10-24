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

// Function: caseD_2
// Address: 0x1cbdb8 - 0x1cbdf4
void caseD_2_0x1cbdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1cbdb8");
#endif

    switch (ctx->pc) {
        case 0x1cbdd8u: goto label_1cbdd8;
        default: break;
    }

    ctx->pc = 0x1cbdb8u;

    // 0x1cbdb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbdc0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbdc4: 0x24063c63  addiu       $a2, $zero, 0x3C63
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15459));
    // 0x1cbdc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbdcc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbdd0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBDD0u;
    SET_GPR_U32(ctx, 31, 0x1CBDD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBDD0u, 0x1CBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDD8u;
label_1cbdd8:
    // 0x1cbdd8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbddc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbde0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbde0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbde4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbde4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbde8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbdec: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1CBDECu;
    {
        const bool branch_taken_0x1cbdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdec) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBDF4u;
}
