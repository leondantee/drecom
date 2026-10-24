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

// Function: entry_0016dbd0
// Address: 0x16dbd0 - 0x16dc28
void entry_0016dbd0_0x16dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbd0_0x16dbd0");
#endif

    switch (ctx->pc) {
        case 0x16dbf0u: goto label_16dbf0;
        case 0x16dc14u: goto label_16dc14;
        default: break;
    }

    ctx->pc = 0x16dbd0u;

    // 0x16dbd0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dbd4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dbd8: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dbdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dbe0: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dbe4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16dbe8: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DBE8u;
    SET_GPR_U32(ctx, 31, 0x16DBF0u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DBE8u, 0x16DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBF0u;
label_16dbf0:
    // 0x16dbf0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dbf0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dbf4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16dbf8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dbfc: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16dc00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dc04: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16dc08: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x16dc0c: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DC0Cu;
    SET_GPR_U32(ctx, 31, 0x16DC14u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DC0Cu, 0x16DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC14u;
label_16dc14:
    // 0x16dc14: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x16dc14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dc18: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DC18u;
    {
        const bool branch_taken_0x16dc18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dc18) {
            ctx->pc = 0x16DC28u;
            return;
        }
    }
    ctx->pc = 0x16DC20u;
    // 0x16dc20: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x16DC20u;
    {
        const bool branch_taken_0x16dc20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc20) {
            ctx->pc = 0x16DCA8u;
            return;
        }
    }
    ctx->pc = 0x16DC28u;
}
