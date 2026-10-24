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

// Function: entry_0019b248
// Address: 0x19b248 - 0x19b298
void entry_0019b248_0x19b248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b248_0x19b248");
#endif

    switch (ctx->pc) {
        case 0x19b284u: goto label_19b284;
        default: break;
    }

    ctx->pc = 0x19b248u;

    // 0x19b248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b24c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19b250: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b254: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19b254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19b258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b25c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B25Cu;
    {
        const bool branch_taken_0x19b25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b25c) {
            ctx->pc = 0x19B2A0u;
            return;
        }
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b268: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b270: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19b274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B274u;
    {
        const bool branch_taken_0x19b274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b274) {
            ctx->pc = 0x19B298u;
            return;
        }
    }
    ctx->pc = 0x19B27Cu;
    // 0x19b27c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x19B27Cu;
    SET_GPR_U32(ctx, 31, 0x19B284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x19B27Cu, 0x19B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B284u;
label_19b284:
    // 0x19b284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b288: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x19b288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19b28c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b290: 0xc0ba2f0  jal         func_2E8BC0
    ctx->pc = 0x19B290u;
    SET_GPR_U32(ctx, 31, 0x19B298u);
    ctx->pc = 0x2E8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BC0u, 0x19B290u, 0x19B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B298u;
}
