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

// Function: entry_001ead7c
// Address: 0x1ead7c - 0x1eae80
void entry_001ead7c_0x1ead7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ead7c_0x1ead7c");
#endif

    switch (ctx->pc) {
        case 0x1eadacu: goto label_1eadac;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae44u: goto label_1eae44;
        default: break;
    }

    ctx->pc = 0x1ead7cu;

    // 0x1ead7c: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1ead80: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ead84: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EAD84u;
    {
        const bool branch_taken_0x1ead84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ead84) {
            ctx->pc = 0x1EAE80u;
            return;
        }
    }
    ctx->pc = 0x1EAD8Cu;
    // 0x1ead8c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead90: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead94: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ead98: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ead9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ead9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eada0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1eada0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eada4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EADA4u;
    SET_GPR_U32(ctx, 31, 0x1EADACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EADA4u, 0x1EADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADACu;
label_1eadac:
    // 0x1eadac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eadb0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadb4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1eadb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eadb8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1eadbc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadc0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x1eadc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eadc4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eadc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadc8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1eadc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eadcc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eadccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadd0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eadd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eadd4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eaddc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eade0: 0x24901330  addiu       $s0, $a0, 0x1330
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eade4: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eade8: 0x34e22018  ori         $v0, $a3, 0x2018
    ctx->pc = 0x1eade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8216);
    // 0x1eadec: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1eadecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1eadf0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eadf4: 0x25081330  addiu       $t0, $t0, 0x1330
    ctx->pc = 0x1eadf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1eadf8: 0x8d090030  lw          $t1, 0x30($t0)
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1eadfc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1eae00: 0x1225025  or          $t2, $t1, $v0
    ctx->pc = 0x1eae00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1eae04: 0xad0a0030  sw          $t2, 0x30($t0)
    ctx->pc = 0x1eae04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 10));
    // 0x1eae08: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1eae0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eae10: 0x2405027c  addiu       $a1, $zero, 0x27C
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1eae14: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EAE14u;
    SET_GPR_U32(ctx, 31, 0x1EAE1Cu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EAE14u, 0x1EAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE1Cu;
label_1eae1c:
    // 0x1eae1c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eae24: 0xc096188  jal         func_258620
    ctx->pc = 0x1EAE24u;
    SET_GPR_U32(ctx, 31, 0x1EAE2Cu);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EAE24u, 0x1EAE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE2Cu;
label_1eae2c:
    // 0x1eae2c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae30: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eae30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eae34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1eae38: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eae38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eae3c: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE44u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EAE3Cu, 0x1EAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE44u;
label_1eae44:
    // 0x1eae44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae48: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1eae4c: 0x24620480  addiu       $v0, $v1, 0x480
    ctx->pc = 0x1eae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1eae50: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae54: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eae58: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1eae60: 0x24620510  addiu       $v0, $v1, 0x510
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1eae64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae68: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eae6c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eae70: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x1eae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1eae74: 0x246205a0  addiu       $v0, $v1, 0x5A0
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x1eae78: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eae78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eae7c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1eae80u;
}
