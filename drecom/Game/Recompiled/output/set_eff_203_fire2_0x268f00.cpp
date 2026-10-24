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

// Function: set_eff_203_fire2
// Address: 0x268f00 - 0x2691fc
void set_eff_203_fire2_0x268f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_203_fire2_0x268f00");
#endif

    switch (ctx->pc) {
        case 0x268f44u: goto label_268f44;
        case 0x269034u: goto label_269034;
        case 0x2691c0u: goto label_2691c0;
        default: break;
    }

    ctx->pc = 0x268f00u;

    // 0x268f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x268f04: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x268f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x268f08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x268f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x268f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268f18: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x268f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x268f1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x268f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x268f20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268f24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268f28: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x268f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x268f2c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x268f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268f30: 0x24042109  addiu       $a0, $zero, 0x2109
    ctx->pc = 0x268f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8457));
    // 0x268f34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x268f34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268f38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268f38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268f3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x268F3Cu;
    SET_GPR_U32(ctx, 31, 0x268F44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x268F3Cu, 0x268F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F44u;
label_268f44:
    // 0x268f44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268f48: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x268f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x268f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268f50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268f54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268f58: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x268f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x268f5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268f60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268f60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268f64: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x268f64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268f6c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268f70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268f74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268f7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268f80: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x268f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x268f84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268f88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268f88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268f8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268f98: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x268f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x268f9c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x268f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268fa0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268fa4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268fa8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x268fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x268fac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268fb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268fb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268fbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x268fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x268fc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x268fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268fc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268fc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268fcc: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x268fccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x268fd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268fd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268fd8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x268fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x268fdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268fe0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268fe4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x268fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x268fe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268fec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268fecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ff0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x268ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ff4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ff8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ffc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x268ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x269000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269004: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269008: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x269008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x26900c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x269010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269014: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x269014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x269018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26901c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26901cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x269020: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x269020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x269024: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269028: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x269028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x26902c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x26902Cu;
    SET_GPR_U32(ctx, 31, 0x269034u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26902Cu, 0x269034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269034u;
label_269034:
    // 0x269034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269038: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x269038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x26903c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269040: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x269044: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x269044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x269048: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x269048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x26904c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26904Cu;
    {
        const bool branch_taken_0x26904c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26904c) {
            ctx->pc = 0x269060u;
            goto label_269060;
        }
    }
    ctx->pc = 0x269054u;
    // 0x269054: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x269054u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x269058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269058u;
    {
        const bool branch_taken_0x269058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269058) {
            ctx->pc = 0x26907Cu;
            goto label_26907c;
        }
    }
    ctx->pc = 0x269060u;
label_269060:
    // 0x269060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x269064: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x269064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x269068: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x269068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26906c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x26906cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x269070: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x269074: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x269074u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x269078: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x269078u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26907c:
    // 0x26907c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x26907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x269080: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x269084: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x269084u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x269088: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x269088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x26908c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x269090: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x269090u;
    {
        const bool branch_taken_0x269090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x269090) {
            ctx->pc = 0x2691DCu;
            goto label_2691dc;
        }
    }
    ctx->pc = 0x269098u;
    // 0x269098: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x269098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26909c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26909cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690a0: 0x0  nop
    ctx->pc = 0x2690a0u;
    // NOP
    // 0x2690a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2690a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2690a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2690a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2690ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690b0: 0x0  nop
    ctx->pc = 0x2690b0u;
    // NOP
    // 0x2690b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2690b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2690b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2690b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2690bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690c0: 0x0  nop
    ctx->pc = 0x2690c0u;
    // NOP
    // 0x2690c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2690c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2690c8: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x2690c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x2690cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690d0: 0x0  nop
    ctx->pc = 0x2690d0u;
    // NOP
    // 0x2690d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2690d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2690d8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2690dc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2690dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2690e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690e4: 0x0  nop
    ctx->pc = 0x2690e4u;
    // NOP
    // 0x2690e8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2690e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2690ec: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2690ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2690f0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2690f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2690f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2690f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2690f8: 0x0  nop
    ctx->pc = 0x2690f8u;
    // NOP
    // 0x2690fc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2690fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x269100: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x269104: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x269104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x269108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26910c: 0x0  nop
    ctx->pc = 0x26910cu;
    // NOP
    // 0x269110: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x269110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x269114: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x269114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x269118: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x269118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x26911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269120: 0x0  nop
    ctx->pc = 0x269120u;
    // NOP
    // 0x269124: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x269124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x269128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269130: 0x0  nop
    ctx->pc = 0x269130u;
    // NOP
    // 0x269134: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x269134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x269138: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x269138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26913c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269140: 0x0  nop
    ctx->pc = 0x269140u;
    // NOP
    // 0x269144: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x269144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x269148: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x269148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x26914c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269150: 0x0  nop
    ctx->pc = 0x269150u;
    // NOP
    // 0x269154: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x269154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x269158: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x26915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269160: 0x0  nop
    ctx->pc = 0x269160u;
    // NOP
    // 0x269164: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x269164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x269168: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x26916c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x26916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269174: 0x0  nop
    ctx->pc = 0x269174u;
    // NOP
    // 0x269178: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x269178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26917c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269180: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269188: 0x0  nop
    ctx->pc = 0x269188u;
    // NOP
    // 0x26918c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x26918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x269190: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x269190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x269194: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x269194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x269198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26919c: 0x0  nop
    ctx->pc = 0x26919cu;
    // NOP
    // 0x2691a0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2691a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2691a4: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x2691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x2691a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2691a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2691ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2691acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2691b0: 0x0  nop
    ctx->pc = 0x2691b0u;
    // NOP
    // 0x2691b4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2691b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2691b8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2691B8u;
    SET_GPR_U32(ctx, 31, 0x2691C0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2691B8u, 0x2691C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691C0u;
label_2691c0:
    // 0x2691c0: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x2691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x2691c4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2691c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2691c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2691c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2691cc: 0x0  nop
    ctx->pc = 0x2691ccu;
    // NOP
    // 0x2691d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2691d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2691d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2691d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2691d8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2691d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_2691dc:
    // 0x2691dc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2691dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2691e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2691e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2691e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2691e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2691e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2691e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2691ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2691ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2691f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2691f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2691f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2691F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2691F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2691FCu;
}
