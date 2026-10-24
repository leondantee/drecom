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

// Function: entry_0033c714
// Address: 0x33c714 - 0x33c768
void entry_0033c714_0x33c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c714_0x33c714");
#endif

    switch (ctx->pc) {
        case 0x33c71cu: goto label_33c71c;
        default: break;
    }

    ctx->pc = 0x33c714u;

label_33c714:
    // 0x33c714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33C714u;
    SET_GPR_U32(ctx, 31, 0x33C71Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33C714u, 0x33C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C71Cu;
label_33c71c:
    // 0x33c71c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33c720: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c728: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33c728u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33c72c: 0x0  nop
    ctx->pc = 0x33c72cu;
    // NOP
    // 0x33c730: 0x0  nop
    ctx->pc = 0x33c730u;
    // NOP
    // 0x33c734: 0x1010  mfhi        $v0
    ctx->pc = 0x33c734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c738: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c73c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c73cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c740: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c740u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c744: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c744u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c748: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x33c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x33c74c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c74cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33c750: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c754: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c758: 0x1062ffee  beq         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33C758u;
    {
        const bool branch_taken_0x33c758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c758) {
            ctx->pc = 0x33C714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c714;
        }
    }
    ctx->pc = 0x33C760u;
    // 0x33c760: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x33C760u;
    {
        const bool branch_taken_0x33c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c760) {
            ctx->pc = 0x33CC5Cu;
            return;
        }
    }
    ctx->pc = 0x33C768u;
}
