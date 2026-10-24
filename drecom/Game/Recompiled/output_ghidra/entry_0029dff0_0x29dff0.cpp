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

// Function: entry_0029dff0
// Address: 0x29dff0 - 0x29e090
void entry_0029dff0_0x29dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029dff0_0x29dff0");
#endif

    switch (ctx->pc) {
        case 0x29e000u: goto label_29e000;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e01cu: goto label_29e01c;
        case 0x29e028u: goto label_29e028;
        case 0x29e054u: goto label_29e054;
        case 0x29e088u: goto label_29e088;
        default: break;
    }

    ctx->pc = 0x29dff0u;

    // 0x29dff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29dff4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29dff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29dff8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29DFF8u;
    SET_GPR_U32(ctx, 31, 0x29E000u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29DFF8u, 0x29E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E000u;
label_29e000:
    // 0x29e000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e004: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E004u;
    SET_GPR_U32(ctx, 31, 0x29E00Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E004u, 0x29E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E00Cu;
label_29e00c:
    // 0x29e00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e014: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E014u;
    SET_GPR_U32(ctx, 31, 0x29E01Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E014u, 0x29E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E01Cu;
label_29e01c:
    // 0x29e01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e020: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E020u;
    SET_GPR_U32(ctx, 31, 0x29E028u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E020u, 0x29E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E028u;
label_29e028:
    // 0x29e028: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e02c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29e02cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29e030: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e034: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29e034u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e038: 0x1480003b  bnez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x29E038u;
    {
        const bool branch_taken_0x29e038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e038) {
            ctx->pc = 0x29E128u;
            return;
        }
    }
    ctx->pc = 0x29E040u;
    // 0x29e040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e044: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e048: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29e048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e04c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E04Cu;
    SET_GPR_U32(ctx, 31, 0x29E054u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E04Cu, 0x29E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E054u;
label_29e054:
    // 0x29e054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e058: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e05c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e060: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29e060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29e064: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e068: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x29e068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x29e06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e078: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e07c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e080: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E080u;
    SET_GPR_U32(ctx, 31, 0x29E088u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E080u, 0x29E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E088u;
label_29e088:
    // 0x29e088: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x29E088u;
    {
        const bool branch_taken_0x29e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e088) {
            ctx->pc = 0x29E128u;
            return;
        }
    }
    ctx->pc = 0x29E090u;
}
