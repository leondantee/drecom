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

// Function: entry_0020e13c
// Address: 0x20e13c - 0x20e18c
void entry_0020e13c_0x20e13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e13c_0x20e13c");
#endif

    switch (ctx->pc) {
        case 0x20e178u: goto label_20e178;
        default: break;
    }

    ctx->pc = 0x20e13cu;

    // 0x20e13c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e140: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20e144: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20e144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20e148: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20e148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20e14c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e150: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E150u;
    {
        const bool branch_taken_0x20e150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e150) {
            ctx->pc = 0x20E194u;
            return;
        }
    }
    ctx->pc = 0x20E158u;
    // 0x20e158: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e15c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e164: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20e168: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20E168u;
    {
        const bool branch_taken_0x20e168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e168) {
            ctx->pc = 0x20E18Cu;
            return;
        }
    }
    ctx->pc = 0x20E170u;
    // 0x20e170: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20E170u;
    SET_GPR_U32(ctx, 31, 0x20E178u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20E170u, 0x20E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E178u;
label_20e178:
    // 0x20e178: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e17c: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20e17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20e180: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e184: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20E184u;
    SET_GPR_U32(ctx, 31, 0x20E18Cu);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20E184u, 0x20E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E18Cu;
}
