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

// Function: entry_002fceb4
// Address: 0x2fceb4 - 0x2fcf40
void entry_002fceb4_0x2fceb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fceb4_0x2fceb4");
#endif

    switch (ctx->pc) {
        case 0x2fcf00u: goto label_2fcf00;
        case 0x2fcf20u: goto label_2fcf20;
        case 0x2fcf3cu: goto label_2fcf3c;
        default: break;
    }

    ctx->pc = 0x2fceb4u;

    // 0x2fceb4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fceb8: 0x8c8700d4  lw          $a3, 0xD4($a0)
    ctx->pc = 0x2fceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fcebc: 0x28e30023  slti        $v1, $a3, 0x23
    ctx->pc = 0x2fcebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x2fcec0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FCEC0u;
    {
        const bool branch_taken_0x2fcec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcec0) {
            ctx->pc = 0x2FCF40u;
            return;
        }
    }
    ctx->pc = 0x2FCEC8u;
    // 0x2fcec8: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcecc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fced0: 0x38680010  xori        $t0, $v1, 0x10
    ctx->pc = 0x2fced0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2fced4: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fced8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2fced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2fcedc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcee0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fcee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcee4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2fcee4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcee8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fcee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fceec: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2fceecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcef0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcef4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fcef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fcef8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x2FCEF8u;
    SET_GPR_U32(ctx, 31, 0x2FCF00u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x2FCEF8u, 0x2FCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF00u;
label_2fcf00:
    // 0x2fcf00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fcf00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcf04: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf08: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2fcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2fcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf10: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2fcf10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fcf14: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fcf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcf18: 0xc065580  jal         func_195600
    ctx->pc = 0x2FCF18u;
    SET_GPR_U32(ctx, 31, 0x2FCF20u);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2FCF18u, 0x2FCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF20u;
label_2fcf20:
    // 0x2fcf20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2fcf20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fcf24: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fcf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2fcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf2c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2fcf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fcf30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fcf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fcf34: 0xc0655c0  jal         func_195700
    ctx->pc = 0x2FCF34u;
    SET_GPR_U32(ctx, 31, 0x2FCF3Cu);
    ctx->pc = 0x195700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195700u, 0x2FCF34u, 0x2FCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF3Cu;
label_2fcf3c:
    // 0x2fcf3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fcf3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fcf40u;
}
