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

// Function: entry_0025ae94
// Address: 0x25ae94 - 0x25aec4
void entry_0025ae94_0x25ae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ae94_0x25ae94");
#endif

    ctx->pc = 0x25ae94u;

    // 0x25ae94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae98: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25ae98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25ae9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25aea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aea4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AEA4u;
    {
        const bool branch_taken_0x25aea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aea4) {
            ctx->pc = 0x25AEC4u;
            return;
        }
    }
    ctx->pc = 0x25AEACu;
    // 0x25aeac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aeb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aeb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aeb8: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25aebc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x25AEBCu;
    SET_GPR_U32(ctx, 31, 0x25AEC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x25AEBCu, 0x25AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEC4u;
}
