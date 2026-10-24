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

// Function: Ectr_set
// Address: 0x18dc70 - 0x18df54
void Ectr_set_0x18dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectr_set_0x18dc70");
#endif

    switch (ctx->pc) {
        case 0x18dce0u: goto label_18dce0;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18de20u: goto label_18de20;
        case 0x18de7cu: goto label_18de7c;
        case 0x18df18u: goto label_18df18;
        default: break;
    }

    ctx->pc = 0x18dc70u;

    // 0x18dc70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18dc74: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x18dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x18dc78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18dc7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18dc80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18dc84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dc8c: 0xffa40078  sd          $a0, 0x78($sp)
    ctx->pc = 0x18dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 4));
    // 0x18dc90: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x18dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x18dc94: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x18dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x18dc98: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x18dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x18dc9c: 0xa3a80098  sb          $t0, 0x98($sp)
    ctx->pc = 0x18dc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 8));
    // 0x18dca0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18dca4: 0x2451a630  addiu       $s1, $v0, -0x59D0
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18dca8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18dcac: 0x2452a6c0  addiu       $s2, $v0, -0x5940
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x18dcb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18dcb4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x18dcb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18dcbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18dcc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DCC0u;
    {
        const bool branch_taken_0x18dcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcc0) {
            ctx->pc = 0x18DCD8u;
            goto label_18dcd8;
        }
    }
    ctx->pc = 0x18DCC8u;
    // 0x18dcc8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18dccc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18dcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18dcd0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x18DCD0u;
    {
        const bool branch_taken_0x18dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcd0) {
            ctx->pc = 0x18DF30u;
            goto label_18df30;
        }
    }
    ctx->pc = 0x18DCD8u;
label_18dcd8:
    // 0x18dcd8: 0xc062f38  jal         func_18BCE0
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BCE0u, 0x18DCD8u, 0x18DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18dce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18dce4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18dce8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18dcec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DCECu;
    {
        const bool branch_taken_0x18dcec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dcec) {
            ctx->pc = 0x18DD00u;
            goto label_18dd00;
        }
    }
    ctx->pc = 0x18DCF4u;
    // 0x18dcf4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18dcf4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18dcf8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x18DCF8u;
    {
        const bool branch_taken_0x18dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dcf8) {
            ctx->pc = 0x18DF30u;
            goto label_18df30;
        }
    }
    ctx->pc = 0x18DD00u;
label_18dd00:
    // 0x18dd00: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x18dd04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD04u;
    {
        const bool branch_taken_0x18dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd04) {
            ctx->pc = 0x18DD20u;
            goto label_18dd20;
        }
    }
    ctx->pc = 0x18DD0Cu;
    // 0x18dd0c: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x18dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x18dd10: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x18dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x18dd14: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x18dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x18dd18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD18u;
    {
        const bool branch_taken_0x18dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd18) {
            ctx->pc = 0x18DD34u;
            goto label_18dd34;
        }
    }
    ctx->pc = 0x18DD20u;
label_18dd20:
    // 0x18dd20: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x18dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18dd24: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x18dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x18dd28: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x18dd2c: 0xac5000e8  sw          $s0, 0xE8($v0)
    ctx->pc = 0x18dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 16));
    // 0x18dd30: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x18dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
label_18dd34:
    // 0x18dd34: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x18dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x18dd38: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dd38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18dd3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dd40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dd44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dd48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18dd4c: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dd4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18dd50: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x18dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x18dd54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dd58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dd60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x18dd64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18dd68: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18DD68u;
    {
        const bool branch_taken_0x18dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd68) {
            ctx->pc = 0x18DDCCu;
            goto label_18ddcc;
        }
    }
    ctx->pc = 0x18DD70u;
    // 0x18dd70: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18dd70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18dd74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18DD74u;
    {
        const bool branch_taken_0x18dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd74) {
            ctx->pc = 0x18DDA0u;
            goto label_18dda0;
        }
    }
    ctx->pc = 0x18DD7Cu;
label_18dd7c:
    // 0x18dd7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18dd80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18dd84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DD84u;
    {
        const bool branch_taken_0x18dd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dd84) {
            ctx->pc = 0x18DD98u;
            goto label_18dd98;
        }
    }
    ctx->pc = 0x18DD8Cu;
    // 0x18dd8c: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x18dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x18dd90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18DD90u;
    {
        const bool branch_taken_0x18dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd90) {
            ctx->pc = 0x18DDB0u;
            goto label_18ddb0;
        }
    }
    ctx->pc = 0x18DD98u;
label_18dd98:
    // 0x18dd98: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x18dd9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18dda0:
    // 0x18dda0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18dda4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x18dda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18dda8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18DDA8u;
    {
        const bool branch_taken_0x18dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dda8) {
            ctx->pc = 0x18DD7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dd7c;
        }
    }
    ctx->pc = 0x18DDB0u;
label_18ddb0:
    // 0x18ddb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ddb4: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DDB4u;
    {
        const bool branch_taken_0x18ddb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ddb4) {
            ctx->pc = 0x18DDCCu;
            goto label_18ddcc;
        }
    }
    ctx->pc = 0x18DDBCu;
    // 0x18ddbc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18ddc0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18ddc4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DF30u;
            goto label_18df30;
        }
    }
    ctx->pc = 0x18DDCCu;
label_18ddcc:
    // 0x18ddcc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ddd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18ddd4: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18ddd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18ddd8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x18ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x18dddc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18dde0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18dde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18dde4: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18dde4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dde8: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dde8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18ddec: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x18ddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18ddf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18ddf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18ddf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18ddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18ddfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18de00: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x18de00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18de04: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x18de04u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x18de08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DE0Cu;
    {
        const bool branch_taken_0x18de0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de0c) {
            ctx->pc = 0x18DE38u;
            goto label_18de38;
        }
    }
    ctx->pc = 0x18DE14u;
    // 0x18de14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18DE18u;
    SET_GPR_U32(ctx, 31, 0x18DE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18DE18u, 0x18DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE20u;
label_18de20:
    // 0x18de20: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de28: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x18de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18de2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18DE30u;
    {
        const bool branch_taken_0x18de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de30) {
            ctx->pc = 0x18DE64u;
            goto label_18de64;
        }
    }
    ctx->pc = 0x18DE38u;
label_18de38:
    // 0x18de38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de40: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18de44: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18de4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18de4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18de50: 0x0  nop
    ctx->pc = 0x18de50u;
    // NOP
    // 0x18de54: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x18de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x18de58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x18de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18de60: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x18de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_18de64:
    // 0x18de64: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x18de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18de68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18DE94u;
            goto label_18de94;
        }
    }
    ctx->pc = 0x18DE70u;
    // 0x18de70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de74: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18DE74u;
    SET_GPR_U32(ctx, 31, 0x18DE7Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18DE74u, 0x18DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE7Cu;
label_18de7c:
    // 0x18de7c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18de80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de84: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18de88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18DE8Cu;
    {
        const bool branch_taken_0x18de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18de8c) {
            ctx->pc = 0x18DEB4u;
            goto label_18deb4;
        }
    }
    ctx->pc = 0x18DE94u;
label_18de94:
    // 0x18de94: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18de98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de9c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18dea0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18dea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18deac: 0x0  nop
    ctx->pc = 0x18deacu;
    // NOP
    // 0x18deb0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x18deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_18deb4:
    // 0x18deb4: 0xae1400c4  sw          $s4, 0xC4($s0)
    ctx->pc = 0x18deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 20));
    // 0x18deb8: 0x93a20098  lbu         $v0, 0x98($sp)
    ctx->pc = 0x18deb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18debc: 0xa20200e2  sb          $v0, 0xE2($s0)
    ctx->pc = 0x18debcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 226), (uint8_t)GPR_U32(ctx, 2));
    // 0x18dec0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x18dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x18dec4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x18dec8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x18decc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x18deccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x18ded0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x18ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x18ded4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ded4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ded8: 0x0  nop
    ctx->pc = 0x18ded8u;
    // NOP
    // 0x18dedc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x18dedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x18dee0: 0xa20000d0  sb          $zero, 0xD0($s0)
    ctx->pc = 0x18dee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x18dee4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18dee8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18deec: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x18deecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x18def0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x18def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18def4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18DEF4u;
    {
        const bool branch_taken_0x18def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18def4) {
            ctx->pc = 0x18DF2Cu;
            goto label_18df2c;
        }
    }
    ctx->pc = 0x18DEFCu;
    // 0x18defc: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x18defcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x18df00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18df04: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18df04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
    // 0x18df08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18df0c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x18df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x18df10: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18DF10u;
    SET_GPR_U32(ctx, 31, 0x18DF18u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18DF18u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DF18u) { return; }
    ctx->pc = 0x18DF18u;
label_18df18:
    // 0x18df18: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DF18u;
    {
        const bool branch_taken_0x18df18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df18) {
            ctx->pc = 0x18DF2Cu;
            goto label_18df2c;
        }
    }
    ctx->pc = 0x18DF20u;
    // 0x18df20: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x18df20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x18df24: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18df28: 0xa60200e0  sh          $v0, 0xE0($s0)
    ctx->pc = 0x18df28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
label_18df2c:
    // 0x18df2c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18df2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18df30:
    // 0x18df30: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x18df30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18df34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18df34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18df38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18df38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18df3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18df3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18df40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18df40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18df44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df48: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18df48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18df4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF54u;
}
