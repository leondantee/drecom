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

// Function: Em09_R1_mv0f
// Address: 0x34aba0 - 0x34b360
void Em09_R1_mv0f_0x34aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0f_0x34aba0");
#endif

    switch (ctx->pc) {
        case 0x34ac2cu: goto label_34ac2c;
        case 0x34ac84u: goto label_34ac84;
        case 0x34acf0u: goto label_34acf0;
        case 0x34acfcu: goto label_34acfc;
        case 0x34ad0cu: goto label_34ad0c;
        case 0x34ad18u: goto label_34ad18;
        case 0x34ad54u: goto label_34ad54;
        case 0x34ad78u: goto label_34ad78;
        case 0x34adc8u: goto label_34adc8;
        case 0x34ade4u: goto label_34ade4;
        case 0x34ae14u: goto label_34ae14;
        case 0x34ae34u: goto label_34ae34;
        case 0x34ae64u: goto label_34ae64;
        case 0x34aeb0u: goto label_34aeb0;
        case 0x34aebcu: goto label_34aebc;
        case 0x34af0cu: goto label_34af0c;
        case 0x34af24u: goto label_34af24;
        case 0x34af30u: goto label_34af30;
        case 0x34af40u: goto label_34af40;
        case 0x34af4cu: goto label_34af4c;
        case 0x34afe0u: goto label_34afe0;
        case 0x34b02cu: goto label_34b02c;
        case 0x34b038u: goto label_34b038;
        case 0x34b08cu: goto label_34b08c;
        case 0x34b0a0u: goto label_34b0a0;
        case 0x34b0ecu: goto label_34b0ec;
        case 0x34b0f8u: goto label_34b0f8;
        case 0x34b134u: goto label_34b134;
        case 0x34b184u: goto label_34b184;
        case 0x34b198u: goto label_34b198;
        case 0x34b220u: goto label_34b220;
        case 0x34b230u: goto label_34b230;
        case 0x34b284u: goto label_34b284;
        case 0x34b29cu: goto label_34b29c;
        case 0x34b2acu: goto label_34b2ac;
        case 0x34b2bcu: goto label_34b2bc;
        case 0x34b2ccu: goto label_34b2cc;
        default: break;
    }

    ctx->pc = 0x34aba0u;

    // 0x34aba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34aba4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34aba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34abac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34abacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34abb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34abb4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34abb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34abbc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34abc0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x34abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34abc4: 0x2483000a  addiu       $v1, $a0, 0xA
    ctx->pc = 0x34abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x34abc8: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x34abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x34abcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34abd0: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x34abd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34abd4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34abd8: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x34abd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34abdc: 0x102001db  beqz        $at, . + 4 + (0x1DB << 2)
    ctx->pc = 0x34ABDCu;
    {
        const bool branch_taken_0x34abdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34abdc) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34ABE4u;
    // 0x34abe4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x34abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x34abe8: 0x248429a0  addiu       $a0, $a0, 0x29A0
    ctx->pc = 0x34abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
    // 0x34abec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34abecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34abf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34abf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34abf8: 0x600008  jr          $v1
    ctx->pc = 0x34ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34AC00u: goto label_34ac00;
            case 0x34ACE0u: goto label_34ace0;
            case 0x34AE58u: goto label_34ae58;
            case 0x34AF14u: goto label_34af14;
            case 0x34AFD4u: goto label_34afd4;
            case 0x34B094u: goto label_34b094;
            case 0x34B18Cu: goto label_34b18c;
            case 0x34B28Cu: goto label_34b28c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34AC00u;
label_34ac00:
    // 0x34ac00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ac08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ac0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ac18: 0x24060f1b  addiu       $a2, $zero, 0xF1B
    ctx->pc = 0x34ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3867));
    // 0x34ac1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ac20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ac20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ac24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AC24u;
    SET_GPR_U32(ctx, 31, 0x34AC2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AC24u, 0x34AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC2Cu;
label_34ac2c:
    // 0x34ac2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac30: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x34ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34ac34: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34ac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34ac38: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x34ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ac3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ac40: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34ac44: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x34ac44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34ac48: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x34ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x34ac4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac50: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x34ac50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ac54: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x34ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x34ac58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ac58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac60: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ac64: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34ac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34ac68: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x34ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x34ac6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34ac6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ac70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ac74: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34ac78: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34ac78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34ac7c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34AC7Cu;
    SET_GPR_U32(ctx, 31, 0x34AC84u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34AC7Cu, 0x34AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC84u;
label_34ac84:
    // 0x34ac84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ac84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ac88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34ac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ac8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34ac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34ac90: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34AC90u;
    {
        const bool branch_taken_0x34ac90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac90) {
            ctx->pc = 0x34ACCCu;
            goto label_34accc;
        }
    }
    ctx->pc = 0x34AC98u;
    // 0x34ac98: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x34ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x34ac9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34ac9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34aca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aca4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34aca8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34acac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34acb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acb4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34acb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34acb8: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x34acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x34acbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34acbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34acc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34acc8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_34accc:
    // 0x34accc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34acccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acd0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34acd4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34acd8: 0x34830020  ori         $v1, $a0, 0x20
    ctx->pc = 0x34acd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x34acdc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_34ace0:
    // 0x34ace0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ace4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ace4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ace8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34ACE8u;
    SET_GPR_U32(ctx, 31, 0x34ACF0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34ACE8u, 0x34ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACF0u;
label_34acf0:
    // 0x34acf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34acf4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34ACF4u;
    SET_GPR_U32(ctx, 31, 0x34ACFCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34ACF4u, 0x34ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ACFCu;
label_34acfc:
    // 0x34acfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ad00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ad04: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AD04u;
    SET_GPR_U32(ctx, 31, 0x34AD0Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AD04u, 0x34AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD0Cu;
label_34ad0c:
    // 0x34ad0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad10: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AD10u;
    SET_GPR_U32(ctx, 31, 0x34AD18u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AD10u, 0x34AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD18u;
label_34ad18:
    // 0x34ad18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad1c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34ad1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34ad20: 0x1060018a  beqz        $v1, . + 4 + (0x18A << 2)
    ctx->pc = 0x34AD20u;
    {
        const bool branch_taken_0x34ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ad20) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AD28u;
    // 0x34ad28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ad2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad30: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ad30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ad34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ad40: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x34ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x34ad44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ad48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ad48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ad4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AD4Cu;
    SET_GPR_U32(ctx, 31, 0x34AD54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AD4Cu, 0x34AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD54u;
label_34ad54:
    // 0x34ad54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34ad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x34ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x34ad60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34ad64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ad64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ad68: 0x0  nop
    ctx->pc = 0x34ad68u;
    // NOP
    // 0x34ad6c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x34ad6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ad70: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AD70u;
    SET_GPR_U32(ctx, 31, 0x34AD78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AD70u, 0x34AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AD78u;
label_34ad78:
    // 0x34ad78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ad7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ad80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ad88: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ad8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ad90: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ad94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34ad94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ad98: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34ad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34ad9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ada0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ada4: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x34ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x34ada8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x34ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x34adac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34adacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34adb0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34adb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34adb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34adbc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34adc0: 0xc05c848  jal         func_172120
    ctx->pc = 0x34ADC0u;
    SET_GPR_U32(ctx, 31, 0x34ADC8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34ADC0u, 0x34ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADC8u;
label_34adc8:
    // 0x34adc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34adc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34adcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34add0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34add0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34add4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34add8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34add8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34addc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34ADDCu;
    SET_GPR_U32(ctx, 31, 0x34ADE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34ADDCu, 0x34ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ADE4u;
label_34ade4:
    // 0x34ade4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ade8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x34ade8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x34adec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34adf0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x34adf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x34adf4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34ADF4u;
    {
        const bool branch_taken_0x34adf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34adf4) {
            ctx->pc = 0x34AE34u;
            goto label_34ae34;
        }
    }
    ctx->pc = 0x34ADFCu;
    // 0x34adfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34ae00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae04: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ae08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AE0Cu;
    SET_GPR_U32(ctx, 31, 0x34AE14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AE0Cu, 0x34AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE14u;
label_34ae14:
    // 0x34ae14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34ae20: 0x2406140f  addiu       $a2, $zero, 0x140F
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5135));
    // 0x34ae24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34ae24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ae28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34ae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34ae2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AE2Cu;
    SET_GPR_U32(ctx, 31, 0x34AE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AE2Cu, 0x34AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE34u;
label_34ae34:
    // 0x34ae34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae38: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34ae3c: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x34ae3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x34ae40: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34ae44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ae48: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34ae48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34ae4c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x34ae50: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x34AE50u;
    {
        const bool branch_taken_0x34ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae50) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AE58u;
label_34ae58:
    // 0x34ae58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AE5Cu;
    SET_GPR_U32(ctx, 31, 0x34AE64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AE5Cu, 0x34AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE64u;
label_34ae64:
    // 0x34ae64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ae6c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ae70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae74: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ae78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34ae78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ae7c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34ae80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ae84: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34ae88: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ae8c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x34ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x34ae90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34ae94: 0x0  nop
    ctx->pc = 0x34ae94u;
    // NOP
    // 0x34ae98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34ae98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34ae9c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34aea0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aea4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34aea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34aea8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AEA8u;
    SET_GPR_U32(ctx, 31, 0x34AEB0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AEA8u, 0x34AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEB0u;
label_34aeb0:
    // 0x34aeb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aeb4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AEB4u;
    SET_GPR_U32(ctx, 31, 0x34AEBCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AEB4u, 0x34AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEBCu;
label_34aebc:
    // 0x34aebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34aec4: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aecc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34aed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34aed4: 0x0  nop
    ctx->pc = 0x34aed4u;
    // NOP
    // 0x34aed8: 0x4501011c  bc1t        . + 4 + (0x11C << 2)
    ctx->pc = 0x34AED8u;
    {
        const bool branch_taken_0x34aed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34aed8) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AEE0u;
    // 0x34aee0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34aee4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aee8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34aeec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aef0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aef4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34aef8: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x34aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x34aefc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34aefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34af00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34af04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34AF04u;
    SET_GPR_U32(ctx, 31, 0x34AF0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34AF04u, 0x34AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF0Cu;
label_34af0c:
    // 0x34af0c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x34AF0Cu;
    {
        const bool branch_taken_0x34af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af0c) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AF14u;
label_34af14:
    // 0x34af14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34af18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34af1c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34AF1Cu;
    SET_GPR_U32(ctx, 31, 0x34AF24u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34AF1Cu, 0x34AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF24u;
label_34af24:
    // 0x34af24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af28: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AF28u;
    SET_GPR_U32(ctx, 31, 0x34AF30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AF28u, 0x34AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF30u;
label_34af30:
    // 0x34af30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34af34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34af38: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AF38u;
    SET_GPR_U32(ctx, 31, 0x34AF40u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AF38u, 0x34AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF40u;
label_34af40:
    // 0x34af40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af44: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34AF44u;
    SET_GPR_U32(ctx, 31, 0x34AF4Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34AF44u, 0x34AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF4Cu;
label_34af4c:
    // 0x34af4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34af50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34af54: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x34AF54u;
    {
        const bool branch_taken_0x34af54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34af54) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AF5Cu;
    // 0x34af5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34af64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34af68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34af6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34af70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34af74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34af78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34af7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34af80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34af84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34af88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34af8c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34af90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34af94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34af98: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34af98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34af9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afa0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34afa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34afa4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34afa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34afa8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34afac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34afb0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34afb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afb8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34afbc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34afc0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34afc4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34afc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34afc8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34afcc: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x34AFCCu;
    {
        const bool branch_taken_0x34afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34afcc) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34AFD4u;
label_34afd4:
    // 0x34afd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afd8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AFD8u;
    SET_GPR_U32(ctx, 31, 0x34AFE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AFD8u, 0x34AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AFE0u;
label_34afe0:
    // 0x34afe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34afe4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34afe8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34afec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aff0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34aff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34aff8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34aff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34affc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b000: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b004: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b008: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b010: 0x0  nop
    ctx->pc = 0x34b010u;
    // NOP
    // 0x34b014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b018: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b01c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b020: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b020u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b024: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B024u;
    SET_GPR_U32(ctx, 31, 0x34B02Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B024u, 0x34B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B02Cu;
label_34b02c:
    // 0x34b02c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b030: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B030u;
    SET_GPR_U32(ctx, 31, 0x34B038u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B030u, 0x34B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B038u;
label_34b038:
    // 0x34b038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b03c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b040: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b044: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34b044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x34b048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34b048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b04c: 0x0  nop
    ctx->pc = 0x34b04cu;
    // NOP
    // 0x34b050: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b054: 0x0  nop
    ctx->pc = 0x34b054u;
    // NOP
    // 0x34b058: 0x450000bc  bc1f        . + 4 + (0xBC << 2)
    ctx->pc = 0x34B058u;
    {
        const bool branch_taken_0x34b058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b058) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B060u;
    // 0x34b060: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b064: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b068: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b06c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b074: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b078: 0x24060810  addiu       $a2, $zero, 0x810
    ctx->pc = 0x34b078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x34b07c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b080: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b084: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B084u;
    SET_GPR_U32(ctx, 31, 0x34B08Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B084u, 0x34B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B08Cu;
label_34b08c:
    // 0x34b08c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x34B08Cu;
    {
        const bool branch_taken_0x34b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b08c) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B094u;
label_34b094:
    // 0x34b094: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b098: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B098u;
    SET_GPR_U32(ctx, 31, 0x34B0A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B098u, 0x34B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0A0u;
label_34b0a0:
    // 0x34b0a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b0a8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b0ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b0b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b0b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34b0bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0c0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b0c4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b0c8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b0d0: 0x0  nop
    ctx->pc = 0x34b0d0u;
    // NOP
    // 0x34b0d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b0d8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b0dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b0e4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B0E4u;
    SET_GPR_U32(ctx, 31, 0x34B0ECu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B0E4u, 0x34B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0ECu;
label_34b0ec:
    // 0x34b0ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B0F0u;
    SET_GPR_U32(ctx, 31, 0x34B0F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B0F0u, 0x34B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0F8u;
label_34b0f8:
    // 0x34b0f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b0fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b100: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34B100u;
    {
        const bool branch_taken_0x34b100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b100) {
            ctx->pc = 0x34B134u;
            goto label_34b134;
        }
    }
    ctx->pc = 0x34B108u;
    // 0x34b108: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b10c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b110: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b118: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b11c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b120: 0x24060811  addiu       $a2, $zero, 0x811
    ctx->pc = 0x34b120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2065));
    // 0x34b124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b128: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b12c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B12Cu;
    SET_GPR_U32(ctx, 31, 0x34B134u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B12Cu, 0x34B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B134u;
label_34b134:
    // 0x34b134: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b138: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b13c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b144: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b14c: 0x0  nop
    ctx->pc = 0x34b14cu;
    // NOP
    // 0x34b150: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x34B150u;
    {
        const bool branch_taken_0x34b150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b150) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B158u;
    // 0x34b158: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x34b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b15c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b160: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b164: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b168: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b16c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b170: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x34b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x34b174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b178: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b17c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B17Cu;
    SET_GPR_U32(ctx, 31, 0x34B184u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B17Cu, 0x34B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B184u;
label_34b184:
    // 0x34b184: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34B184u;
    {
        const bool branch_taken_0x34b184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b184) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B18Cu;
label_34b18c:
    // 0x34b18c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b190: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B190u;
    SET_GPR_U32(ctx, 31, 0x34B198u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B190u, 0x34B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B198u;
label_34b198:
    // 0x34b198: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b19c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b1a0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b1a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b1ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b1b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34b1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34b1b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b1bc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b1c0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b1c8: 0x0  nop
    ctx->pc = 0x34b1c8u;
    // NOP
    // 0x34b1cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b1ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b1d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b1d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1d8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x34b1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b1dc: 0x3c053f7a  lui         $a1, 0x3F7A
    ctx->pc = 0x34b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16250 << 16));
    // 0x34b1e0: 0x34a3e148  ori         $v1, $a1, 0xE148
    ctx->pc = 0x34b1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57672);
    // 0x34b1e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b1e8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x34b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b1ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b1f0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x34b1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x34b1f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1f8: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x34b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x34b1fc: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x34b1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x34b200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b204: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b20c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x34b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x34b210: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b218: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B218u;
    SET_GPR_U32(ctx, 31, 0x34B220u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B218u, 0x34B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B220u;
label_34b220:
    // 0x34b220: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b220u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b224: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b228: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B228u;
    SET_GPR_U32(ctx, 31, 0x34B230u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B228u, 0x34B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B230u;
label_34b230:
    // 0x34b230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34b230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b238: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b23c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b240: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b244: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b24c: 0x0  nop
    ctx->pc = 0x34b24cu;
    // NOP
    // 0x34b250: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x34B250u;
    {
        const bool branch_taken_0x34b250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b250) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B258u;
    // 0x34b258: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x34b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b25c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b260: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b26c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b270: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x34b270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x34b274: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b278: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b27c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B27Cu;
    SET_GPR_U32(ctx, 31, 0x34B284u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B27Cu, 0x34B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B284u;
label_34b284:
    // 0x34b284: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x34B284u;
    {
        const bool branch_taken_0x34b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b284) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B28Cu;
label_34b28c:
    // 0x34b28c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b290: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b294: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B294u;
    SET_GPR_U32(ctx, 31, 0x34B29Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B294u, 0x34B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B29Cu;
label_34b29c:
    // 0x34b29c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34b2a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34b2a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B2A4u;
    SET_GPR_U32(ctx, 31, 0x34B2ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B2A4u, 0x34B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2ACu;
label_34b2ac:
    // 0x34b2ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b2b4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B2B4u;
    SET_GPR_U32(ctx, 31, 0x34B2BCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B2B4u, 0x34B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2BCu;
label_34b2bc:
    // 0x34b2bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b2bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b2c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2c4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B2C4u;
    SET_GPR_U32(ctx, 31, 0x34B2CCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B2C4u, 0x34B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2CCu;
label_34b2cc:
    // 0x34b2cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2d0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b2d4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34B2D4u;
    {
        const bool branch_taken_0x34b2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b2d4) {
            ctx->pc = 0x34B34Cu;
            goto label_34b34c;
        }
    }
    ctx->pc = 0x34B2DCu;
    // 0x34b2dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b2e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b2ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b2f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b2f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b2fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b300: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b304: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b308: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34b30c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34b310: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b314: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b318: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34b318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b31c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b320: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b324: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b328: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b32c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b330: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34b330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34b334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b338: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b33c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b340: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34b344: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x34b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b348: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x34b348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_34b34c:
    // 0x34b34c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34b34cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b354: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34b354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34b358: 0x3e00008  jr          $ra
    ctx->pc = 0x34B358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B360u;
}
