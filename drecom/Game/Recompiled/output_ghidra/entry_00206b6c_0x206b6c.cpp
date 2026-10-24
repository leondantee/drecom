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

// Function: entry_00206b6c
// Address: 0x206b6c - 0x206bbc
void entry_00206b6c_0x206b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206b6c_0x206b6c");
#endif

    switch (ctx->pc) {
        case 0x206b90u: goto label_206b90;
        case 0x206ba4u: goto label_206ba4;
        default: break;
    }

    ctx->pc = 0x206b6cu;

    // 0x206b6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b70: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x206b74: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x206b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x206b78: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x206b78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x206b7c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x206b80: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x206B80u;
    {
        const bool branch_taken_0x206b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x206b80) {
            ctx->pc = 0x206BBCu;
            return;
        }
    }
    ctx->pc = 0x206B88u;
    // 0x206b88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x206B88u;
    SET_GPR_U32(ctx, 31, 0x206B90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x206B88u, 0x206B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B90u;
label_206b90:
    // 0x206b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206b94: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x206b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x206b98: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b9c: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x206B9Cu;
    SET_GPR_U32(ctx, 31, 0x206BA4u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x206B9Cu, 0x206BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206ba8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x206ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x206bac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206bb0: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x206bb4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x206bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x206bb8: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x206bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    ctx->pc = 0x206bbcu;
}
