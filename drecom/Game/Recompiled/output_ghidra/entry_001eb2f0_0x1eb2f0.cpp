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

// Function: entry_001eb2f0
// Address: 0x1eb2f0 - 0x1eb334
void entry_001eb2f0_0x1eb2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb2f0_0x1eb2f0");
#endif

    switch (ctx->pc) {
        case 0x1eb320u: goto label_1eb320;
        default: break;
    }

    ctx->pc = 0x1eb2f0u;

    // 0x1eb2f0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb2f4: 0x90851308  lbu         $a1, 0x1308($a0)
    ctx->pc = 0x1eb2f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x1eb2f8: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1eb2f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1eb2fc: 0x30c70080  andi        $a3, $a2, 0x80
    ctx->pc = 0x1eb2fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1eb300: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1EB300u;
    {
        const bool branch_taken_0x1eb300 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb300) {
            ctx->pc = 0x1EB334u;
            return;
        }
    }
    ctx->pc = 0x1EB308u;
    // 0x1eb308: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb30c: 0x25020234  addiu       $v0, $t0, 0x234
    ctx->pc = 0x1eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 564));
    // 0x1eb310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb314: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb318: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1EB318u;
    SET_GPR_U32(ctx, 31, 0x1EB320u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1EB318u, 0x1EB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB320u;
label_1eb320:
    // 0x1eb320: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb324: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x1eb324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x1eb328: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb32c: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1EB32Cu;
    SET_GPR_U32(ctx, 31, 0x1EB334u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x1EB32Cu, 0x1EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB334u;
}
