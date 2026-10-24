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

// Function: Em09_R1_mv17
// Address: 0x34eb30 - 0x34f588
void Em09_R1_mv17_0x34eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv17_0x34eb30");
#endif

    switch (ctx->pc) {
        case 0x34ec0cu: goto label_34ec0c;
        case 0x34ec4cu: goto label_34ec4c;
        case 0x34ec70u: goto label_34ec70;
        case 0x34ee48u: goto label_34ee48;
        case 0x34ee68u: goto label_34ee68;
        case 0x34ee70u: goto label_34ee70;
        case 0x34ee98u: goto label_34ee98;
        case 0x34ef04u: goto label_34ef04;
        case 0x34ef20u: goto label_34ef20;
        case 0x34ef38u: goto label_34ef38;
        case 0x34f18cu: goto label_34f18c;
        case 0x34f1a0u: goto label_34f1a0;
        case 0x34f1b4u: goto label_34f1b4;
        case 0x34f1f0u: goto label_34f1f0;
        case 0x34f21cu: goto label_34f21c;
        case 0x34f248u: goto label_34f248;
        case 0x34f2ecu: goto label_34f2ec;
        case 0x34f544u: goto label_34f544;
        case 0x34f568u: goto label_34f568;
        default: break;
    }

    ctx->pc = 0x34eb30u;

    // 0x34eb30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x34eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34eb34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x34eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x34eb38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34eb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34eb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34eb44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34eb48: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x34eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x34eb4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eb50: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34eb50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34eb54: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34eb58: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x34eb58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34eb5c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x34eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x34eb60: 0x2483a540  addiu       $v1, $a0, -0x5AC0
    ctx->pc = 0x34eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    // 0x34eb64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34eb68: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x34eb68u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3AA540u));
    // 0x34eb6c: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x34eb6cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA550u));
    // 0x34eb70: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x34eb70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x34eb74: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x34eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x34eb78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x34eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x34eb7c: 0x2463a560  addiu       $v1, $v1, -0x5AA0
    ctx->pc = 0x34eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944096));
    // 0x34eb80: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x34eb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34eb84: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x34eb84u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3AA560u));
    // 0x34eb88: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x34eb88u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3AA570u));
    // 0x34eb8c: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x34eb8cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3AA580u));
    // 0x34eb90: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x34eb90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA590u));
    // 0x34eb94: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x34eb94u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x34eb98: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x34eb98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x34eb9c: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x34eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x34eba0: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x34eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x34eba4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eba8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ebac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34ebb0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x34ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x34ebb4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34ebb8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebbc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34ebbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34ebc0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34ebc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ebc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ebc8: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x34EBC8u;
    {
        const bool branch_taken_0x34ebc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ebc8) {
            ctx->pc = 0x34EED8u;
            goto label_34eed8;
        }
    }
    ctx->pc = 0x34EBD0u;
    // 0x34ebd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EBD0u;
    {
        const bool branch_taken_0x34ebd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ebd0) {
            ctx->pc = 0x34EBE0u;
            goto label_34ebe0;
        }
    }
    ctx->pc = 0x34EBD8u;
    // 0x34ebd8: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x34EBD8u;
    {
        const bool branch_taken_0x34ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ebd8) {
            ctx->pc = 0x34F568u;
            goto label_34f568;
        }
    }
    ctx->pc = 0x34EBE0u;
label_34ebe0:
    // 0x34ebe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ebe4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebe8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ebec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebf0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ebf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ebf8: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x34ebf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
    // 0x34ebfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ebfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ec00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ec00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ec04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34EC04u;
    SET_GPR_U32(ctx, 31, 0x34EC0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34EC04u, 0x34EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC0Cu;
label_34ec0c:
    // 0x34ec0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ec0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ec10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ec18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34ec1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34ec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34ec20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34ec24: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34ec2c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34ec30: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ec34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ec38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34ec3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x34ec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34ec40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ec44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EC44u;
    SET_GPR_U32(ctx, 31, 0x34EC4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EC44u, 0x34EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC4Cu;
label_34ec4c:
    // 0x34ec4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ec50: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34ec54: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x34ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34ec58: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x34ec58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34ec5c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x34ec5cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x34ec60: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec64: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x34ec64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
    // 0x34ec68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EC68u;
    SET_GPR_U32(ctx, 31, 0x34EC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EC68u, 0x34EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC70u;
label_34ec70:
    // 0x34ec70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ec74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x34ec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x34ec78: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x34ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x34ec7c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x34ec7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x34ec80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34ec80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34ec84: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec88: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34ec88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ec8c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ec90: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x34ec90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x34ec94: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x34ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34ec98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x34ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34ec9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34eca0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x34eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x34eca4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eca8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x34eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34ecac: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ecb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34ecb4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecb8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ecbc: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x34ecbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ecc0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ecc4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ecc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ecc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eccc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecd0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ecd4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34ecd8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecdc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ece0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34ece4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x34ece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34ece8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34ece8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34ecec: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ecf0: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x34ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x34ecf4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x34ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34ecf8: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x34ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ecfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34ecfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed04: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x34ed04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x34ed08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34ed08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed10: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ed14: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed1c: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ed20: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed28: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34ed28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ed2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed38: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed40: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34ed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34ed44: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed48: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34ed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ed4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed50: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34ed58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34ed5c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x34ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34ed60: 0x3472d70a  ori         $s2, $v1, 0xD70A
    ctx->pc = 0x34ed60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34ed64: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x34ed64u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed68: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed70: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34ed70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34ed74: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ed78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ed88: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34ed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34ed8c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34ed90: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34ed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ed98: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ed9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eda0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x34eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x34eda4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34eda8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34edac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edb8: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34edb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34edbc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34edc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edc4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edcc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34edd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34edd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34edd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edd8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eddc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ede0: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34ede4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34ede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34edec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34edf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34edf4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34edf8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34edfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee04: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x34ee04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ee0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee14: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34ee14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee18: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x34ee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ee1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee24: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34ee24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ee2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee34: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x34ee34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34ee38: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee3c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34ee40: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34EE40u;
    SET_GPR_U32(ctx, 31, 0x34EE48u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34EE40u, 0x34EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE48u;
label_34ee48:
    // 0x34ee48: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x34ee4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34ee4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34ee50: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34ee54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34ee54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34ee58: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee5c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34ee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34ee60: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34EE60u;
    SET_GPR_U32(ctx, 31, 0x34EE68u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34EE60u, 0x34EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE68u;
label_34ee68:
    // 0x34ee68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EE68u;
    SET_GPR_U32(ctx, 31, 0x34EE70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EE68u, 0x34EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE70u;
label_34ee70:
    // 0x34ee70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ee74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34ee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34ee78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ee7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x34ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34ee80: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x34ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ee84: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ee88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ee8c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x34ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x34ee90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34EE90u;
    SET_GPR_U32(ctx, 31, 0x34EE98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34EE90u, 0x34EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE98u;
label_34ee98:
    // 0x34ee98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34ee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ee9c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x34ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34eea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34eea4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x34eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x34eea8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x34eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34eeac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eeb0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eeb4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x34eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x34eeb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34eeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eebc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eec0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eec4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34eec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34eec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34eec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34eecc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eed0: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34eed4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_34eed8:
    // 0x34eed8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eedc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eee0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x34eee4: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x34eee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x34eee8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x34eee8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34eeec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34eef0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34eef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34eef4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34eef8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34eefc: 0xc05c848  jal         func_172120
    ctx->pc = 0x34EEFCu;
    SET_GPR_U32(ctx, 31, 0x34EF04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34EEFCu, 0x34EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF04u;
label_34ef04:
    // 0x34ef04: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x34ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34ef08: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef0c: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x34ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef10: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x34ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34ef14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34ef18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34EF18u;
    SET_GPR_U32(ctx, 31, 0x34EF20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34EF18u, 0x34EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF20u;
label_34ef20:
    // 0x34ef20: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ef28: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34ef30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34EF30u;
    SET_GPR_U32(ctx, 31, 0x34EF38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34EF30u, 0x34EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF38u;
label_34ef38:
    // 0x34ef38: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef40: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34ef40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef44: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef48: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x34ef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x34ef4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef54: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x34ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ef60: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef68: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef6c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef74: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ef78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34ef78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ef7c: 0x0  nop
    ctx->pc = 0x34ef7cu;
    // NOP
    // 0x34ef80: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x34EF80u;
    {
        const bool branch_taken_0x34ef80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ef80) {
            ctx->pc = 0x34EFE8u;
            goto label_34efe8;
        }
    }
    ctx->pc = 0x34EF88u;
    // 0x34ef88: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34ef8c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ef90: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ef94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34ef98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ef98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ef9c: 0x0  nop
    ctx->pc = 0x34ef9cu;
    // NOP
    // 0x34efa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34efa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34efa4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34efa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34efa8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efb0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34efb4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efbc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34efc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34efc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34efc4: 0x0  nop
    ctx->pc = 0x34efc4u;
    // NOP
    // 0x34efc8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34EFC8u;
    {
        const bool branch_taken_0x34efc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34efc8) {
            ctx->pc = 0x34EFE8u;
            goto label_34efe8;
        }
    }
    ctx->pc = 0x34EFD0u;
    // 0x34efd0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efd8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34efd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34efdc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efe0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34efe4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34efe8:
    // 0x34efe8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eff0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34eff4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34effc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f004: 0x0  nop
    ctx->pc = 0x34f004u;
    // NOP
    // 0x34f008: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F008u;
    {
        const bool branch_taken_0x34f008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f008) {
            ctx->pc = 0x34F070u;
            goto label_34f070;
        }
    }
    ctx->pc = 0x34F010u;
    // 0x34f010: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f014: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f018: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f01c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f024: 0x0  nop
    ctx->pc = 0x34f024u;
    // NOP
    // 0x34f028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34f028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f02c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f030: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f038: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f03c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f040: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f044: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f04c: 0x0  nop
    ctx->pc = 0x34f04cu;
    // NOP
    // 0x34f050: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F050u;
    {
        const bool branch_taken_0x34f050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f050) {
            ctx->pc = 0x34F070u;
            goto label_34f070;
        }
    }
    ctx->pc = 0x34F058u;
    // 0x34f058: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f05c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f060: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f064: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f068: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f06c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34f070:
    // 0x34f070: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f078: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f07c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f084: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f08c: 0x0  nop
    ctx->pc = 0x34f08cu;
    // NOP
    // 0x34f090: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F090u;
    {
        const bool branch_taken_0x34f090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f090) {
            ctx->pc = 0x34F0F8u;
            goto label_34f0f8;
        }
    }
    ctx->pc = 0x34F098u;
    // 0x34f098: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f09c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0a0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f0a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34f0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f0ac: 0x0  nop
    ctx->pc = 0x34f0acu;
    // NOP
    // 0x34f0b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f0b4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34f0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f0b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0c0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f0c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0cc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f0d4: 0x0  nop
    ctx->pc = 0x34f0d4u;
    // NOP
    // 0x34f0d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F0D8u;
    {
        const bool branch_taken_0x34f0d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f0d8) {
            ctx->pc = 0x34F0F8u;
            goto label_34f0f8;
        }
    }
    ctx->pc = 0x34F0E0u;
    // 0x34f0e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_34f0f8:
    // 0x34f0f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f100: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f104: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f108: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f10c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f114: 0x0  nop
    ctx->pc = 0x34f114u;
    // NOP
    // 0x34f118: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F118u;
    {
        const bool branch_taken_0x34f118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f118) {
            ctx->pc = 0x34F180u;
            goto label_34f180;
        }
    }
    ctx->pc = 0x34F120u;
    // 0x34f120: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f124: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f128: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f12c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34f130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f134: 0x0  nop
    ctx->pc = 0x34f134u;
    // NOP
    // 0x34f138: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34f138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f13c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34f13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f140: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f144: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f148: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f14c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f150: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f154: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f158: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f15c: 0x0  nop
    ctx->pc = 0x34f15cu;
    // NOP
    // 0x34f160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F160u;
    {
        const bool branch_taken_0x34f160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f160) {
            ctx->pc = 0x34F180u;
            goto label_34f180;
        }
    }
    ctx->pc = 0x34F168u;
    // 0x34f168: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f16c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x34f16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f170: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x34f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f174: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f178: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x34f178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f17c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x34f17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_34f180:
    // 0x34f180: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f184: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F184u;
    SET_GPR_U32(ctx, 31, 0x34F18Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F184u, 0x34F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F18Cu;
label_34f18c:
    // 0x34f18c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f18cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f190: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f198: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F198u;
    SET_GPR_U32(ctx, 31, 0x34F1A0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F198u, 0x34F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1A0u;
label_34f1a0:
    // 0x34f1a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x34f1a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1a4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34f1a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34f1ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F1ACu;
    SET_GPR_U32(ctx, 31, 0x34F1B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F1ACu, 0x34F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1B4u;
label_34f1b4:
    // 0x34f1b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f1b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1bc: 0x84671278  lh          $a3, 0x1278($v1)
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34f1c0: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x34f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x34f1c4: 0xa4661278  sh          $a2, 0x1278($v1)
    ctx->pc = 0x34f1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x34f1c8: 0x14e000e7  bnez        $a3, . + 4 + (0xE7 << 2)
    ctx->pc = 0x34F1C8u;
    {
        const bool branch_taken_0x34f1c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f1c8) {
            ctx->pc = 0x34F568u;
            goto label_34f568;
        }
    }
    ctx->pc = 0x34F1D0u;
    // 0x34f1d0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f1d4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x34f1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x34f1d8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34f1dc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x34f1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f1e0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34F1E0u;
    {
        const bool branch_taken_0x34f1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1e0) {
            ctx->pc = 0x34F270u;
            goto label_34f270;
        }
    }
    ctx->pc = 0x34F1E8u;
    // 0x34f1e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F1E8u;
    SET_GPR_U32(ctx, 31, 0x34F1F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F1E8u, 0x34F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1F0u;
label_34f1f0:
    // 0x34f1f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f1f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f1f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34f1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f1f8: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x34f1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x34f1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f200: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x34f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x34f204: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x34f204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f208: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f20c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f210: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x34f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x34f214: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F214u;
    SET_GPR_U32(ctx, 31, 0x34F21Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F214u, 0x34F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F21Cu;
label_34f21c:
    // 0x34f21c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34f21cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34f220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f224: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x34f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x34f228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34f228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f22c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x34f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x34f230: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x34f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f234: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f238: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34f23c: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x34f23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x34f240: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F240u;
    SET_GPR_U32(ctx, 31, 0x34F248u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F240u, 0x34F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F248u;
label_34f248:
    // 0x34f248: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x34f248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f24c: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x34f24cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x34f250: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x34f250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x34f254: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x34f258: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34f258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34f25c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34f25cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34f260: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f264: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x34f264u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x34f268: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x34F268u;
    {
        const bool branch_taken_0x34f268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f268) {
            ctx->pc = 0x34F568u;
            goto label_34f568;
        }
    }
    ctx->pc = 0x34F270u;
label_34f270:
    // 0x34f270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f274: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f278: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34f278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f280: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x34f280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f284: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x34f284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f288: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f28c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x34f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f290: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f294: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34f294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f298: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f29c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34f2a0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34f2a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f2ac: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34f2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f2b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34f2b8: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34f2bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34f2c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f2c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f2c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f2cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f2d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34f2d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34f2dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f2e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34f2e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F2E4u;
    SET_GPR_U32(ctx, 31, 0x34F2ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F2E4u, 0x34F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2ECu;
label_34f2ec:
    // 0x34f2ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34f2ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f2f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x34f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34f2f4: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x34f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x34f2f8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x34f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x34f2fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x34f2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34f300: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34f300u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34f304: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f308: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f30c: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x34f30cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34f310: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f314: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f318: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34f31c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34f320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f324: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34f324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34f328: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34f32c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f330: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34f330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f334: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f338: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f33c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34f340: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x34f340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34f344: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34F344u;
    {
        const bool branch_taken_0x34f344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f344) {
            ctx->pc = 0x34F380u;
            goto label_34f380;
        }
    }
    ctx->pc = 0x34F34Cu;
    // 0x34f34c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f350: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f354: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34f354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f35c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f364: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x34f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f36c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f374: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34f374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f378: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F378u;
    {
        const bool branch_taken_0x34f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f378) {
            ctx->pc = 0x34F3A8u;
            goto label_34f3a8;
        }
    }
    ctx->pc = 0x34F380u;
label_34f380:
    // 0x34f380: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f384: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f388: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34f388u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f38c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f390: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f394: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x34f394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f39c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3a4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34f3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_34f3a8:
    // 0x34f3a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3ac: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x34f3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x34f3b0: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x34f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34f3b4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x34f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x34f3b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34f3bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f3c0: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x34f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x34f3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f3c8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3cc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x34f3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x34f3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f3d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3d8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34f3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34f3dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3e4: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f3e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3f0: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x34f3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f3f4: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x34f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x34f3f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f400: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f408: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x34f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34f40c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f410: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f414: 0xa040008e  sb          $zero, 0x8E($v0)
    ctx->pc = 0x34f414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f418: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f41c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f420: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34f420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34f424: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34f428: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f430: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f434: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f438: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34f43c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34f440: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f448: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f44c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f450: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34f454: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34f458: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x34f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34f45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f460: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f464: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f468: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34f46c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f470: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f478: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f47c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f480: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x34f484: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f488: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f490: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f494: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34f498: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x34f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x34f49c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f4a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4ac: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4b0: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x34f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x34f4b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34f4b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4c4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34f4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4d8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34f4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4ec: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34f4f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f4f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f4fc: 0xa4620036  sh          $v0, 0x36($v1)
    ctx->pc = 0x34f4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x34f500: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f504: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f508: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f50c: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34f50cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f510: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f514: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f518: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f51c: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34f51cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f520: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f524: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f528: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f52c: 0xa483003c  sh          $v1, 0x3C($a0)
    ctx->pc = 0x34f52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f530: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f534: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34f534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34f538: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34f53c: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34F53Cu;
    SET_GPR_U32(ctx, 31, 0x34F544u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34F53Cu, 0x34F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F544u;
label_34f544:
    // 0x34f544: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x34f544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x34f548: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x34f548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f54c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34f550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34f550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f554: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f558: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34f558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34f55c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34f560: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34F560u;
    SET_GPR_U32(ctx, 31, 0x34F568u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34F560u, 0x34F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F568u;
label_34f568:
    // 0x34f568: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x34f568u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f56c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34f56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34f570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34f570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f57c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x34f57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34f580: 0x3e00008  jr          $ra
    ctx->pc = 0x34F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F588u;
}
