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
// Address: 0x140fb0 - 0x141014
void caseD_1_0x140fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x140fb0");
#endif

    switch (ctx->pc) {
        case 0x140fe8u: goto label_140fe8;
        case 0x140ff0u: goto label_140ff0;
        case 0x140ff8u: goto label_140ff8;
        default: break;
    }

    ctx->pc = 0x140fb0u;

    // 0x140fb0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x140fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x140fb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x140fb8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x140fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x140fbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140fc4: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x140FC4u;
    {
        const bool branch_taken_0x140fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140fc4) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x140FCCu;
    // 0x140fcc: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x140fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x140fd0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x140fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140fd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x140fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140fd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x140fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140fdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x140fdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x140fe0: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x140FE0u;
    SET_GPR_U32(ctx, 31, 0x140FE8u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x140FE0u, 0x140FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FE8u;
label_140fe8:
    // 0x140fe8: 0xc050538  jal         func_1414E0
    ctx->pc = 0x140FE8u;
    SET_GPR_U32(ctx, 31, 0x140FF0u);
    ctx->pc = 0x1414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414E0u, 0x140FE8u, 0x140FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FF0u;
label_140ff0:
    // 0x140ff0: 0xc067c40  jal         func_19F100
    ctx->pc = 0x140FF0u;
    SET_GPR_U32(ctx, 31, 0x140FF8u);
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x140FF0u, 0x140FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141000: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x141000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x141004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141008: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x141008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14100c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x14100Cu;
    {
        const bool branch_taken_0x14100c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14100c) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x141014u;
}
