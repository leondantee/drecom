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

// Function: caseD_7
// Address: 0x1cbefc - 0x1cbf40
void caseD_7_0x1cbefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1cbefc");
#endif

    switch (ctx->pc) {
        case 0x1cbf1cu: goto label_1cbf1c;
        default: break;
    }

    ctx->pc = 0x1cbefcu;

    // 0x1cbefc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbf04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbf08: 0x24060a74  addiu       $a2, $zero, 0xA74
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2676));
    // 0x1cbf0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbf10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbf14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBF14u;
    SET_GPR_U32(ctx, 31, 0x1CBF1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBF14u, 0x1CBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF1Cu;
label_1cbf1c:
    // 0x1cbf1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbf1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbf20: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cbf24: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbf28: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbf28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf2c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf30: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbf34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbf38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CBF38u;
    {
        const bool branch_taken_0x1cbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf38) {
            ctx->pc = 0x1CBFB8u;
            return;
        }
    }
    ctx->pc = 0x1CBF40u;
}
