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

// Function: entry_0026ff90
// Address: 0x26ff90 - 0x26ffcc
void entry_0026ff90_0x26ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ff90_0x26ff90");
#endif

    switch (ctx->pc) {
        case 0x26ffb4u: goto label_26ffb4;
        default: break;
    }

    ctx->pc = 0x26ff90u;

    // 0x26ff90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff94: 0x8c621b6c  lw          $v0, 0x1B6C($v1)
    ctx->pc = 0x26ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x26ff98: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26FF98u;
    {
        const bool branch_taken_0x26ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff98) {
            ctx->pc = 0x27001Cu;
            return;
        }
    }
    ctx->pc = 0x26FFA0u;
    // 0x26ffa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ffa4: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x26ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x26ffa8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x26ffa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26ffac: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x26FFACu;
    SET_GPR_U32(ctx, 31, 0x26FFB4u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26FFACu, 0x26FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFB4u;
label_26ffb4:
    // 0x26ffb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ffb8: 0x8c821b6c  lw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x26ffbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26ffc0: 0xac821b6c  sw          $v0, 0x1B6C($a0)
    ctx->pc = 0x26ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 2));
    // 0x26ffc4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26FFC4u;
    {
        const bool branch_taken_0x26ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ffc4) {
            ctx->pc = 0x27001Cu;
            return;
        }
    }
    ctx->pc = 0x26FFCCu;
}
