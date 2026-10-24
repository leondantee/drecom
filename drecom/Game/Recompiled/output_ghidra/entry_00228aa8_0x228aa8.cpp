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

// Function: entry_00228aa8
// Address: 0x228aa8 - 0x228acc
void entry_00228aa8_0x228aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228aa8_0x228aa8");
#endif

    switch (ctx->pc) {
        case 0x228ab0u: goto label_228ab0;
        default: break;
    }

    ctx->pc = 0x228aa8u;

    // 0x228aa8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228AA8u;
    SET_GPR_U32(ctx, 31, 0x228AB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228AA8u, 0x228AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AB0u;
label_228ab0:
    // 0x228ab0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x228ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228ab4: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x228ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x228ab8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x228abc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228ac0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228ac0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228ac4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ac8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x228ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x228accu;
}
