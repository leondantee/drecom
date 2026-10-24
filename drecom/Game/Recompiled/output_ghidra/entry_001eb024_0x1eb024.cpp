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

// Function: entry_001eb024
// Address: 0x1eb024 - 0x1eb0b4
void entry_001eb024_0x1eb024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb024_0x1eb024");
#endif

    switch (ctx->pc) {
        case 0x1eb060u: goto label_1eb060;
        case 0x1eb0a0u: goto label_1eb0a0;
        default: break;
    }

    ctx->pc = 0x1eb024u;

    // 0x1eb024: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eb024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb028: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1eb02c: 0x14640021  bne         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EB02Cu;
    {
        const bool branch_taken_0x1eb02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eb02c) {
            ctx->pc = 0x1EB0B4u;
            return;
        }
    }
    ctx->pc = 0x1EB034u;
    // 0x1eb034: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb038: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb03c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1eb03cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1eb040: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1eb040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eb044: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1eb044u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1eb048: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb04c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1eb04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1eb050: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb054: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eb058: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EB058u;
    SET_GPR_U32(ctx, 31, 0x1EB060u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EB058u, 0x1EB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB060u;
label_1eb060:
    // 0x1eb060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb064: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb068: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1eb068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb06c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1eb070: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb074: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eb074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb078: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb07c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eb07cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb080: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb084: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1eb084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb088: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb08c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eb090: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1eb094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eb098: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EB098u;
    SET_GPR_U32(ctx, 31, 0x1EB0A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EB098u, 0x1EB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0A0u;
label_1eb0a0:
    // 0x1eb0a0: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0a4: 0x26a31330  addiu       $v1, $s5, 0x1330
    ctx->pc = 0x1eb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4912));
    // 0x1eb0a8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1eb0ac: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1eb0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1eb0b0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1eb0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1eb0b4u;
}
