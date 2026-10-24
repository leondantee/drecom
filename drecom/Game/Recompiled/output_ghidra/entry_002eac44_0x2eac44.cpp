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

// Function: entry_002eac44
// Address: 0x2eac44 - 0x2eadbc
void entry_002eac44_0x2eac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eac44_0x2eac44");
#endif

    switch (ctx->pc) {
        case 0x2eacfcu: goto label_2eacfc;
        case 0x2ead90u: goto label_2ead90;
        default: break;
    }

    ctx->pc = 0x2eac44u;

    // 0x2eac44: 0x2415000f  addiu       $s5, $zero, 0xF
    ctx->pc = 0x2eac44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2eac48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eac50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eac50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eac54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eac58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eac5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eac60: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eac64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eac68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eac6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eac70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eac74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eac78: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eac7c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eac80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eac84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eac88: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eac88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eac8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eac90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eac94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eac98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2eac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2eac9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2eac9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eaca0: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2eaca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2eaca4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eaca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eaca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eaca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eacac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2eacacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2eacb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eacb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eacb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eacb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eacb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eacb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eacbc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2eacbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eacc0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2eacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eacc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2eacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2eacc8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eaccc: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2eacccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2eacd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eacd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eacd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eacd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eacd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eacdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eace0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eace4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eace4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eace8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eace8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eacec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eacecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eacf0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2eacf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2eacf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EACF4u;
    SET_GPR_U32(ctx, 31, 0x2EACFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EACF4u, 0x2EACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACFCu;
label_2eacfc:
    // 0x2eacfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eacfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead00: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ead04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead0c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ead0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ead10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ead14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead1c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ead1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ead20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead28: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ead28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead34: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ead34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead40: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ead40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead4c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ead4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead58: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ead58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead64: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ead64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead70: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ead70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ead78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead7c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ead7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ead80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead84: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ead84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ead88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EAD88u;
    SET_GPR_U32(ctx, 31, 0x2EAD90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EAD88u, 0x2EAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD90u;
label_2ead90:
    // 0x2ead90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead94: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ead94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ead98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ead98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ead9c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ead9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eada0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eada4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eada8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EADA8u;
    {
        const bool branch_taken_0x2eada8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eada8) {
            ctx->pc = 0x2EADBCu;
            return;
        }
    }
    ctx->pc = 0x2EADB0u;
    // 0x2eadb0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eadb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eadb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EADB4u;
    {
        const bool branch_taken_0x2eadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eadb4) {
            ctx->pc = 0x2EADD8u;
            return;
        }
    }
    ctx->pc = 0x2EADBCu;
}
