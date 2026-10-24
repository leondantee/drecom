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

// Function: entry_002ecba8
// Address: 0x2ecba8 - 0x2eccc8
void entry_002ecba8_0x2ecba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecba8_0x2ecba8");
#endif

    switch (ctx->pc) {
        case 0x2ecc04u: goto label_2ecc04;
        case 0x2ecc9cu: goto label_2ecc9c;
        default: break;
    }

    ctx->pc = 0x2ecba8u;

    // 0x2ecba8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2ecba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2ecbac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ecbacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ecbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecbb4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ecbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2ecbb8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ecbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ecbbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecbc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ecbc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecbc4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ecbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ecbc8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ecbcc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ecbd0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ecbd4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2ecbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecbdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ecbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecbe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ecbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ecbe4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ecbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ecbe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ecbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ecbec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ecbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ecbf0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ecbf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ecbf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ecbf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ecbf8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ecbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ecbfc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ECBFCu;
    SET_GPR_U32(ctx, 31, 0x2ECC04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ECBFCu, 0x2ECC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC04u;
label_2ecc04:
    // 0x2ecc04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc08: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ecc0c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ecc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ecc10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc18: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ecc18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ecc1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ecc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ecc20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc24: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc28: 0xa082011d  sb          $v0, 0x11D($a0)
    ctx->pc = 0x2ecc28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 285), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ecc2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc34: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ecc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc3c: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ecc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc40: 0xa060011b  sb          $zero, 0x11B($v1)
    ctx->pc = 0x2ecc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc4c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ecc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc58: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ecc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc64: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ecc64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc70: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ecc70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc7c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ecc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ecc84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc88: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ecc88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ecc8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecc90: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ecc90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ecc94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ECC94u;
    SET_GPR_U32(ctx, 31, 0x2ECC9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ECC94u, 0x2ECC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC9Cu;
label_2ecc9c:
    // 0x2ecc9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecca0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ecca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ecca4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ecca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ecca8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ecca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eccac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eccacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eccb0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eccb4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECCB4u;
    {
        const bool branch_taken_0x2eccb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eccb4) {
            ctx->pc = 0x2ECCC8u;
            return;
        }
    }
    ctx->pc = 0x2ECCBCu;
    // 0x2eccbc: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2eccbcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eccc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ECCC0u;
    {
        const bool branch_taken_0x2eccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eccc0) {
            ctx->pc = 0x2ECCF0u;
            return;
        }
    }
    ctx->pc = 0x2ECCC8u;
}
