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

// Function: entry_0026bc98
// Address: 0x26bc98 - 0x26bddc
void entry_0026bc98_0x26bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bc98_0x26bc98");
#endif

    switch (ctx->pc) {
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd94u: goto label_26bd94;
        default: break;
    }

    ctx->pc = 0x26bc98u;

    // 0x26bc98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bc9c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x26bc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x26bca0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x26bca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26bca4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x26bca8: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26BCA8u;
    {
        const bool branch_taken_0x26bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bca8) {
            ctx->pc = 0x26BDDCu;
            return;
        }
    }
    ctx->pc = 0x26BCB0u;
    // 0x26bcb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bcb4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26bcb8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26bcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26bcbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bcc0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26bcc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bcc8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26bccc: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x26bcd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bcd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26bcd8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26bcd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26bcdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bce0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bce8: 0x8c821344  lw          $v0, 0x1344($a0)
    ctx->pc = 0x26bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x26bcec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bcecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26bcf0: 0x8cc51334  lw          $a1, 0x1334($a2)
    ctx->pc = 0x26bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4916)));
    // 0x26bcf4: 0x8c66133c  lw          $a2, 0x133C($v1)
    ctx->pc = 0x26bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x26bcf8: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x26BCF8u;
    SET_GPR_U32(ctx, 31, 0x26BD00u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26BCF8u, 0x26BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD00u;
label_26bd00:
    // 0x26bd00: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26bd00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26bd04: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26bd04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd08: 0xad0013e8  sw          $zero, 0x13E8($t0)
    ctx->pc = 0x26bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5096), GPR_U32(ctx, 0));
    // 0x26bd0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd10: 0xac4013ec  sw          $zero, 0x13EC($v0)
    ctx->pc = 0x26bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5100), GPR_U32(ctx, 0));
    // 0x26bd14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26bd1c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26bd20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bd24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26bd28: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x26bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26bd2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd30: 0xa44313c0  sh          $v1, 0x13C0($v0)
    ctx->pc = 0x26bd30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 3));
    // 0x26bd34: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x26bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x26bd38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd3c: 0xa48213c2  sh          $v0, 0x13C2($a0)
    ctx->pc = 0x26bd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5058), (uint16_t)GPR_U32(ctx, 2));
    // 0x26bd40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bd44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd48: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x26bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
    // 0x26bd4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26bd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26bd54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26bd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26bd58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26bd5c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x26bd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x26bd60: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x26bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26bd64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bd68: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x26bd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26bd6c: 0x34820012  ori         $v0, $a0, 0x12
    ctx->pc = 0x26bd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x26bd70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bd74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26bd78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bd78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bd7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26bd7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bd80: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x26bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x26bd84: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26bd84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26bd88: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26bd88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bd8c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x26BD8Cu;
    SET_GPR_U32(ctx, 31, 0x26BD94u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26BD8Cu, 0x26BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD94u;
label_26bd94:
    // 0x26bd94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bd98: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x26bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x26bd9c: 0xa0400b40  sb          $zero, 0xB40($v0)
    ctx->pc = 0x26bd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2880), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bda0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bda4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x26bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x26bda8: 0xa0400bd0  sb          $zero, 0xBD0($v0)
    ctx->pc = 0x26bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bdac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bdb0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26bdb4: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x26bdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bdb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bdbc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26bdc0: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x26bdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bdc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bdc8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26bdcc: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x26bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bdd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bdd4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x26bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x26bdd8: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x26bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x26bddcu;
}
