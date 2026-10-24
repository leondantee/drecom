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

// Function: entry_00124714
// Address: 0x124714 - 0x124754
void entry_00124714_0x124714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124714_0x124714");
#endif

    switch (ctx->pc) {
        case 0x12474cu: goto label_12474c;
        default: break;
    }

    ctx->pc = 0x124714u;

    // 0x124714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124718: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12471c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124720: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124724u;
    {
        const bool branch_taken_0x124724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124724) {
            ctx->pc = 0x124754u;
            return;
        }
    }
    ctx->pc = 0x12472Cu;
    // 0x12472c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124734: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124738: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x124738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12473c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x12473cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124740: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124744: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124744u;
    SET_GPR_U32(ctx, 31, 0x12474Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124744u, 0x12474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12474Cu;
label_12474c:
    // 0x12474c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12474c) {
            ctx->pc = 0x124774u;
            return;
        }
    }
    ctx->pc = 0x124754u;
}
