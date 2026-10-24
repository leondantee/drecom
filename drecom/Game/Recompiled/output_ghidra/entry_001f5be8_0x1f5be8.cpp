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

// Function: entry_001f5be8
// Address: 0x1f5be8 - 0x1f5c30
void entry_001f5be8_0x1f5be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5be8_0x1f5be8");
#endif

    switch (ctx->pc) {
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c1cu: goto label_1f5c1c;
        default: break;
    }

    ctx->pc = 0x1f5be8u;

    // 0x1f5be8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5bec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f5becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f5bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5bf4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5bf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5BF8u;
    SET_GPR_U32(ctx, 31, 0x1F5C00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5BF8u, 0x1F5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C00u;
label_1f5c00:
    // 0x1f5c00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5c04: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1f5c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f5c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5C0Cu;
    {
        const bool branch_taken_0x1f5c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f5c0c) {
            ctx->pc = 0x1F5C30u;
            return;
        }
    }
    ctx->pc = 0x1F5C14u;
    // 0x1f5c14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5C14u;
    SET_GPR_U32(ctx, 31, 0x1F5C1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5C14u, 0x1F5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C1Cu;
label_1f5c1c:
    // 0x1f5c1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5c20: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1f5c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f5c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5c28: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5C28u;
    {
        const bool branch_taken_0x1f5c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5c28) {
            ctx->pc = 0x1F5C58u;
            return;
        }
    }
    ctx->pc = 0x1F5C30u;
}
