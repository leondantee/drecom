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

// Function: entry_0030eb08
// Address: 0x30eb08 - 0x30eb88
void entry_0030eb08_0x30eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030eb08_0x30eb08");
#endif

    switch (ctx->pc) {
        case 0x30eb1cu: goto label_30eb1c;
        case 0x30eb2cu: goto label_30eb2c;
        case 0x30eb3cu: goto label_30eb3c;
        case 0x30eb48u: goto label_30eb48;
        default: break;
    }

    ctx->pc = 0x30eb08u;

    // 0x30eb08: 0x8fa70298  lw          $a3, 0x298($sp)
    ctx->pc = 0x30eb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb0c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x30eb0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x30eb10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eb10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eb14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30EB14u;
    SET_GPR_U32(ctx, 31, 0x30EB1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30EB14u, 0x30EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB1Cu;
label_30eb1c:
    // 0x30eb1c: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x30eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb20: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x30eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x30eb24: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30EB24u;
    SET_GPR_U32(ctx, 31, 0x30EB2Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30EB24u, 0x30EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB2Cu;
label_30eb2c:
    // 0x30eb2c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eb30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eb34: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30EB34u;
    SET_GPR_U32(ctx, 31, 0x30EB3Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30EB34u, 0x30EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB3Cu;
label_30eb3c:
    // 0x30eb3c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb40: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30EB40u;
    SET_GPR_U32(ctx, 31, 0x30EB48u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30EB40u, 0x30EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB48u;
label_30eb48:
    // 0x30eb48: 0x8fb50298  lw          $s5, 0x298($sp)
    ctx->pc = 0x30eb48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb4c: 0x92a309e7  lbu         $v1, 0x9E7($s5)
    ctx->pc = 0x30eb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2535)));
    // 0x30eb50: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30EB50u;
    {
        const bool branch_taken_0x30eb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eb50) {
            ctx->pc = 0x30EB88u;
            return;
        }
    }
    ctx->pc = 0x30EB58u;
    // 0x30eb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30eb5c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb60: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x30eb60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x30eb64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30eb68: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb6c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x30eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30eb70: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30eb74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30eb78: 0x8fb70298  lw          $s7, 0x298($sp)
    ctx->pc = 0x30eb78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb7c: 0xa2e00003  sb          $zero, 0x3($s7)
    ctx->pc = 0x30eb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30eb80: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eb84: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30eb88u;
}
