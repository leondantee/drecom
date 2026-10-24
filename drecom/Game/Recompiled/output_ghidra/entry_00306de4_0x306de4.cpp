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

// Function: entry_00306de4
// Address: 0x306de4 - 0x306e4c
void entry_00306de4_0x306de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306de4_0x306de4");
#endif

    switch (ctx->pc) {
        case 0x306df4u: goto label_306df4;
        case 0x306e00u: goto label_306e00;
        case 0x306e10u: goto label_306e10;
        case 0x306e1cu: goto label_306e1c;
        default: break;
    }

    ctx->pc = 0x306de4u;

    // 0x306de4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306de8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306DECu;
    SET_GPR_U32(ctx, 31, 0x306DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306DECu, 0x306DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF4u;
label_306df4:
    // 0x306df4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306df8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306DF8u;
    SET_GPR_U32(ctx, 31, 0x306E00u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306DF8u, 0x306E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E00u;
label_306e00:
    // 0x306e00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306e08: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306E08u;
    SET_GPR_U32(ctx, 31, 0x306E10u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306E08u, 0x306E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E10u;
label_306e10:
    // 0x306e10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e14: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306E14u;
    SET_GPR_U32(ctx, 31, 0x306E1Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306E14u, 0x306E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E1Cu;
label_306e1c:
    // 0x306e1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306e24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306E24u;
    {
        const bool branch_taken_0x306e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306e24) {
            ctx->pc = 0x306E5Cu;
            return;
        }
    }
    ctx->pc = 0x306E2Cu;
    // 0x306e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306e30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306e3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306e48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x306e4cu;
}
