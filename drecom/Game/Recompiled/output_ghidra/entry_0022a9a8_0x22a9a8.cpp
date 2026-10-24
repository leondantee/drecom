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

// Function: entry_0022a9a8
// Address: 0x22a9a8 - 0x22a9e4
void entry_0022a9a8_0x22a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a9a8_0x22a9a8");
#endif

    switch (ctx->pc) {
        case 0x22a9c8u: goto label_22a9c8;
        default: break;
    }

    ctx->pc = 0x22a9a8u;

    // 0x22a9a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a9ac: 0x94850a00  lhu         $a1, 0xA00($a0)
    ctx->pc = 0x22a9acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x22a9b0: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x22a9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x22a9b4: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x22a9b8: 0x14c7000a  bne         $a2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x22A9B8u;
    {
        const bool branch_taken_0x22a9b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x22a9b8) {
            ctx->pc = 0x22A9E4u;
            return;
        }
    }
    ctx->pc = 0x22A9C0u;
    // 0x22a9c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22A9C0u;
    SET_GPR_U32(ctx, 31, 0x22A9C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22A9C0u, 0x22A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9C8u;
label_22a9c8:
    // 0x22a9c8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x22a9c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22a9cc: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x22a9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x22a9d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22a9d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A9D4u;
    {
        const bool branch_taken_0x22a9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9d4) {
            ctx->pc = 0x22A9E4u;
            return;
        }
    }
    ctx->pc = 0x22A9DCu;
    // 0x22a9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a9e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22a9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22a9e4u;
}
