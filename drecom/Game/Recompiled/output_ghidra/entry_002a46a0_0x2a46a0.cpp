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

// Function: entry_002a46a0
// Address: 0x2a46a0 - 0x2a4708
void entry_002a46a0_0x2a46a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a46a0_0x2a46a0");
#endif

    switch (ctx->pc) {
        case 0x2a46c0u: goto label_2a46c0;
        default: break;
    }

    ctx->pc = 0x2a46a0u;

    // 0x2a46a0: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46a4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a46a8: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x2a46a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2a46ac: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x2a46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2a46b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A46B0u;
    {
        const bool branch_taken_0x2a46b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a46b0) {
            ctx->pc = 0x2A4708u;
            return;
        }
    }
    ctx->pc = 0x2A46B8u;
    // 0x2a46b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A46B8u;
    SET_GPR_U32(ctx, 31, 0x2A46C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A46B8u, 0x2A46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46C0u;
label_2a46c0:
    // 0x2a46c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a46c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a46c4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a46c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a46c8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x2a46c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a46cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a46ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a46d0: 0x14c7000d  bne         $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A46D0u;
    {
        const bool branch_taken_0x2a46d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a46d0) {
            ctx->pc = 0x2A4708u;
            return;
        }
    }
    ctx->pc = 0x2A46D8u;
    // 0x2a46d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a46dc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46e0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a46e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a46e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a46e8: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46ec: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x2a46ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a46f0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a46f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46f4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x2a46f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a46f8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a46fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a46fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4700: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4704: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a4708u;
}
