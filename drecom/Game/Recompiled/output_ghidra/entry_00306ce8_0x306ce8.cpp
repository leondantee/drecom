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

// Function: entry_00306ce8
// Address: 0x306ce8 - 0x306d60
void entry_00306ce8_0x306ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306ce8_0x306ce8");
#endif

    switch (ctx->pc) {
        case 0x306cf8u: goto label_306cf8;
        case 0x306d04u: goto label_306d04;
        case 0x306d14u: goto label_306d14;
        case 0x306d20u: goto label_306d20;
        default: break;
    }

    ctx->pc = 0x306ce8u;

    // 0x306ce8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306cecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306cf0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306CF0u;
    SET_GPR_U32(ctx, 31, 0x306CF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306CF0u, 0x306CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CF8u;
label_306cf8:
    // 0x306cf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306cfc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306CFCu;
    SET_GPR_U32(ctx, 31, 0x306D04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306CFCu, 0x306D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D04u;
label_306d04:
    // 0x306d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306d08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306d0c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306D0Cu;
    SET_GPR_U32(ctx, 31, 0x306D14u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306D0Cu, 0x306D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D14u;
label_306d14:
    // 0x306d14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d18: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306D18u;
    SET_GPR_U32(ctx, 31, 0x306D20u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306D18u, 0x306D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D20u;
label_306d20:
    // 0x306d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306d28: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306D28u;
    {
        const bool branch_taken_0x306d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d28) {
            ctx->pc = 0x306D60u;
            return;
        }
    }
    ctx->pc = 0x306D30u;
    // 0x306d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306d34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306d40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306d48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306d5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x306d60u;
}
