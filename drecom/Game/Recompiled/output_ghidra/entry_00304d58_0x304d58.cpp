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

// Function: entry_00304d58
// Address: 0x304d58 - 0x304dd0
void entry_00304d58_0x304d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304d58_0x304d58");
#endif

    switch (ctx->pc) {
        case 0x304d68u: goto label_304d68;
        case 0x304d74u: goto label_304d74;
        case 0x304d84u: goto label_304d84;
        case 0x304d90u: goto label_304d90;
        default: break;
    }

    ctx->pc = 0x304d58u;

    // 0x304d58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304D60u;
    SET_GPR_U32(ctx, 31, 0x304D68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304D60u, 0x304D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D68u;
label_304d68:
    // 0x304d68: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304D6Cu;
    SET_GPR_U32(ctx, 31, 0x304D74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304D6Cu, 0x304D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D74u;
label_304d74:
    // 0x304d74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304d78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304d7c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304D7Cu;
    SET_GPR_U32(ctx, 31, 0x304D84u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304D7Cu, 0x304D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D84u;
label_304d84:
    // 0x304d84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d88: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304D88u;
    SET_GPR_U32(ctx, 31, 0x304D90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304D88u, 0x304D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D90u;
label_304d90:
    // 0x304d90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304d94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304d98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x304D98u;
    {
        const bool branch_taken_0x304d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d98) {
            ctx->pc = 0x304DD0u;
            return;
        }
    }
    ctx->pc = 0x304DA0u;
    // 0x304da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304da4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304db0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304db4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304db8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x304dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304dc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304dc8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304dcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x304dd0u;
}
