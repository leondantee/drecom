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

// Function: entry_001eda44
// Address: 0x1eda44 - 0x1edabc
void entry_001eda44_0x1eda44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eda44_0x1eda44");
#endif

    switch (ctx->pc) {
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda88u: goto label_1eda88;
        default: break;
    }

    ctx->pc = 0x1eda44u;

    // 0x1eda44: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eda44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda48: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1eda48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1eda4c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eda50: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1eda50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eda54: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EDA54u;
    {
        const bool branch_taken_0x1eda54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda54) {
            ctx->pc = 0x1EDABCu;
            return;
        }
    }
    ctx->pc = 0x1EDA5Cu;
    // 0x1eda5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDA64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDA5Cu, 0x1EDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA64u;
label_1eda64:
    // 0x1eda64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eda64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eda68: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1eda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1eda6c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1eda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1eda70: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1eda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eda74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eda74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eda78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eda78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda7c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1eda7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eda80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDA80u;
    SET_GPR_U32(ctx, 31, 0x1EDA88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDA80u, 0x1EDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA88u;
label_1eda88:
    // 0x1eda88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eda88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eda8c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1eda8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1eda90: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EDA90u;
    {
        const bool branch_taken_0x1eda90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda90) {
            ctx->pc = 0x1EDABCu;
            return;
        }
    }
    ctx->pc = 0x1EDA98u;
    // 0x1eda98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda9c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1eda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1edaa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1edaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1edaa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1edaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1edaa8: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1edaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1edaac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1edaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1edab0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1edab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1edab4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EDAB4u;
    SET_GPR_U32(ctx, 31, 0x1EDABCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EDAB4u, 0x1EDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDABCu;
}
