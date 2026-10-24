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

// Function: entry_0012d9fc
// Address: 0x12d9fc - 0x12da68
void entry_0012d9fc_0x12d9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d9fc_0x12d9fc");
#endif

    switch (ctx->pc) {
        case 0x12da60u: goto label_12da60;
        default: break;
    }

    ctx->pc = 0x12d9fcu;

    // 0x12d9fc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12da00: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x12da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12da04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12da08: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12da08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12da0c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12da14: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12da18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12da1c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12DA1Cu;
    {
        const bool branch_taken_0x12da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da1c) {
            ctx->pc = 0x12DA90u;
            return;
        }
    }
    ctx->pc = 0x12DA24u;
    // 0x12da24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12da2c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x12DA2Cu;
    {
        const bool branch_taken_0x12da2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da2c) {
            ctx->pc = 0x12DA68u;
            return;
        }
    }
    ctx->pc = 0x12DA34u;
    // 0x12da34: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12da34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da38: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12da3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x12da40: 0x8ca20368  lw          $v0, 0x368($a1)
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x12da44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12da44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12da48: 0x24073c14  addiu       $a3, $zero, 0x3C14
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
    // 0x12da4c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x12da4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x12da50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12da54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12da58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DA58u;
    SET_GPR_U32(ctx, 31, 0x12DA60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DA58u, 0x12DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DA60u;
label_12da60:
    // 0x12da60: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x12DA60u;
    {
        const bool branch_taken_0x12da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da60) {
            ctx->pc = 0x12DB74u;
            return;
        }
    }
    ctx->pc = 0x12DA68u;
}
