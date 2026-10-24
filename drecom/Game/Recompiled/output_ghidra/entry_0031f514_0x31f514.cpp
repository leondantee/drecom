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

// Function: entry_0031f514
// Address: 0x31f514 - 0x31f56c
void entry_0031f514_0x31f514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f514_0x31f514");
#endif

    switch (ctx->pc) {
        case 0x31f520u: goto label_31f520;
        case 0x31f540u: goto label_31f540;
        default: break;
    }

    ctx->pc = 0x31f514u;

    // 0x31f514: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f518: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x31F518u;
    SET_GPR_U32(ctx, 31, 0x31F520u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x31F518u, 0x31F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F520u;
label_31f520:
    // 0x31f520: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f528: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f52c: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x31f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x31f530: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31f534: 0x244602f0  addiu       $a2, $v0, 0x2F0
    ctx->pc = 0x31f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x31f538: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x31F538u;
    SET_GPR_U32(ctx, 31, 0x31F540u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x31F538u, 0x31F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F540u;
label_31f540:
    // 0x31f540: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f544: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x31f544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x31f548: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f54c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31f550: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F550u;
    {
        const bool branch_taken_0x31f550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f550) {
            ctx->pc = 0x31F56Cu;
            return;
        }
    }
    ctx->pc = 0x31F558u;
    // 0x31f558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f55c: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x31f560: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31f560u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f564: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f568: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31f568u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x31f56cu;
}
