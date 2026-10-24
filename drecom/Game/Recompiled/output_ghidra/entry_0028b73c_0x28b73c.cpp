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

// Function: entry_0028b73c
// Address: 0x28b73c - 0x28b780
void entry_0028b73c_0x28b73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b73c_0x28b73c");
#endif

    switch (ctx->pc) {
        case 0x28b75cu: goto label_28b75c;
        case 0x28b76cu: goto label_28b76c;
        default: break;
    }

    ctx->pc = 0x28b73cu;

    // 0x28b73c: 0x24026a02  addiu       $v0, $zero, 0x6A02
    ctx->pc = 0x28b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27138));
    // 0x28b740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b744: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b744u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b748: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x28b748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b74c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x28b74cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b750: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b750u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b754: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B754u;
    SET_GPR_U32(ctx, 31, 0x28B75Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B754u, 0x28B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B75Cu;
label_28b75c:
    // 0x28b75c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28b75cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b760: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b764: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B764u;
    SET_GPR_U32(ctx, 31, 0x28B76Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B764u, 0x28B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B76Cu;
label_28b76c:
    // 0x28b76c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b76cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b770: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b774: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b778: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B778u;
    {
        const bool branch_taken_0x28b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b778) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B780u;
}
