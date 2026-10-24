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

// Function: entry_00290454
// Address: 0x290454 - 0x290488
void entry_00290454_0x290454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290454_0x290454");
#endif

    ctx->pc = 0x290454u;

    // 0x290454: 0x9202660d  lbu         $v0, 0x660D($s0)
    ctx->pc = 0x290454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26125)));
    // 0x290458: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x290458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29045c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290460: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290460) {
            ctx->pc = 0x290488u;
            return;
        }
    }
    ctx->pc = 0x290468u;
    // 0x290468: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x290468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29046c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x29046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x290470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x290470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x290474: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x290474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x290478: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x290478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29047c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x29047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x290480: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x290480u;
    SET_GPR_U32(ctx, 31, 0x290488u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x290480u, 0x290488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290488u;
}
