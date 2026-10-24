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

// Function: entry_00270df8
// Address: 0x270df8 - 0x270e50
void entry_00270df8_0x270df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270df8_0x270df8");
#endif

    switch (ctx->pc) {
        case 0x270e1cu: goto label_270e1c;
        case 0x270e30u: goto label_270e30;
        default: break;
    }

    ctx->pc = 0x270df8u;

    // 0x270df8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dfc: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x270dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x270e00: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x270E00u;
    {
        const bool branch_taken_0x270e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e00) {
            ctx->pc = 0x270E50u;
            return;
        }
    }
    ctx->pc = 0x270E08u;
    // 0x270e08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e0c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x270e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x270e10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x270e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270e14: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x270E14u;
    SET_GPR_U32(ctx, 31, 0x270E1Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x270E14u, 0x270E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E1Cu;
label_270e1c:
    // 0x270e1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e20: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x270e24: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x270e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270e28: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x270E28u;
    SET_GPR_U32(ctx, 31, 0x270E30u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x270E28u, 0x270E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270E30u;
label_270e30:
    // 0x270e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x270e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x270e34: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x270e34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x270e38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270E38u;
    {
        const bool branch_taken_0x270e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e38) {
            ctx->pc = 0x270E50u;
            return;
        }
    }
    ctx->pc = 0x270E40u;
    // 0x270e40: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270e44: 0x8ca31b6c  lw          $v1, 0x1B6C($a1)
    ctx->pc = 0x270e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7020)));
    // 0x270e48: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x270e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x270e4c: 0xaca41b6c  sw          $a0, 0x1B6C($a1)
    ctx->pc = 0x270e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 4));
    ctx->pc = 0x270e50u;
}
