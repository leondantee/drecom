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

// Function: entry_0016dde0
// Address: 0x16dde0 - 0x16de38
void entry_0016dde0_0x16dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dde0_0x16dde0");
#endif

    switch (ctx->pc) {
        case 0x16de00u: goto label_16de00;
        case 0x16de24u: goto label_16de24;
        default: break;
    }

    ctx->pc = 0x16dde0u;

    // 0x16dde0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dde4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dde8: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16ddec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ddf0: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16ddf4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16ddf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ddf8: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DDF8u;
    SET_GPR_U32(ctx, 31, 0x16DE00u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DDF8u, 0x16DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE00u;
label_16de00:
    // 0x16de00: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16de00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16de04: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16de08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16de0c: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16de10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16de14: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16de18: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16de1c: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DE1Cu;
    SET_GPR_U32(ctx, 31, 0x16DE24u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DE1Cu, 0x16DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE24u;
label_16de24:
    // 0x16de24: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16de24u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16de28: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DE28u;
    {
        const bool branch_taken_0x16de28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16de28) {
            ctx->pc = 0x16DE38u;
            return;
        }
    }
    ctx->pc = 0x16DE30u;
    // 0x16de30: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16DE30u;
    {
        const bool branch_taken_0x16de30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de30) {
            ctx->pc = 0x16DEB8u;
            return;
        }
    }
    ctx->pc = 0x16DE38u;
}
