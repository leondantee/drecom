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

// Function: set_eff_203_fire1
// Address: 0x268c00 - 0x268efc
void set_eff_203_fire1_0x268c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_203_fire1_0x268c00");
#endif

    switch (ctx->pc) {
        case 0x268c44u: goto label_268c44;
        case 0x268d34u: goto label_268d34;
        case 0x268ec0u: goto label_268ec0;
        default: break;
    }

    ctx->pc = 0x268c00u;

    // 0x268c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x268c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x268c04: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x268c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x268c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x268c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x268c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268c18: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x268c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x268c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x268c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x268c20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268c24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268c28: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x268c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x268c2c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x268c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268c30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x268c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x268c34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x268c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268c38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268c38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268c3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x268C3Cu;
    SET_GPR_U32(ctx, 31, 0x268C44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x268C3Cu, 0x268C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C44u;
label_268c44:
    // 0x268c44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268c48: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x268c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x268c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268c54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268c54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268c58: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x268c58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x268c5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268c60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268c64: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x268c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x268c68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268c6c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268c70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268c74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268c7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268c80: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x268c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x268c84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268c88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x268c88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x268c8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x268c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268c90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x268c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x268c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268c98: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x268c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x268c9c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x268c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x268ca0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x268ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268ca4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x268ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x268ca8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x268ca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x268cac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268cb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x268cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268cb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x268cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268cbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x268cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x268cc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x268cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x268cc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268cc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ccc: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x268cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x268cd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268cd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268cd8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x268cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x268cdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ce0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ce4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x268ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ce8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268cec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268cf0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x268cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x268cf4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268cf8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268cfc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x268cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x268d00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268d08: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x268d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x268d0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d10: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268d14: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x268d14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x268d18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268d20: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x268d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x268d24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d28: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x268d28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x268d2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x268D2Cu;
    SET_GPR_U32(ctx, 31, 0x268D34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x268D2Cu, 0x268D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D34u;
label_268d34:
    // 0x268d34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d38: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x268d38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x268d3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d40: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x268d40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d44: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268d48: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268d4c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x268D4Cu;
    {
        const bool branch_taken_0x268d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x268d4c) {
            ctx->pc = 0x268D60u;
            goto label_268d60;
        }
    }
    ctx->pc = 0x268D54u;
    // 0x268d54: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x268d54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268d58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268D58u;
    {
        const bool branch_taken_0x268d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d58) {
            ctx->pc = 0x268D7Cu;
            goto label_268d7c;
        }
    }
    ctx->pc = 0x268D60u;
label_268d60:
    // 0x268d60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d64: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268d64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d6c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d70: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x268d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x268d74: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x268d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268d78: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x268d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_268d7c:
    // 0x268d7c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x268d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x268d80: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x268d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x268d84: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x268d84u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d88: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268d8c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268d90: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x268D90u;
    {
        const bool branch_taken_0x268d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x268d90) {
            ctx->pc = 0x268EDCu;
            goto label_268edc;
        }
    }
    ctx->pc = 0x268D98u;
    // 0x268d98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268da0: 0x0  nop
    ctx->pc = 0x268da0u;
    // NOP
    // 0x268da4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x268da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x268da8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268db0: 0x0  nop
    ctx->pc = 0x268db0u;
    // NOP
    // 0x268db4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x268db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x268db8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268dc0: 0x0  nop
    ctx->pc = 0x268dc0u;
    // NOP
    // 0x268dc4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x268dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x268dc8: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x268dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x268dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268dd0: 0x0  nop
    ctx->pc = 0x268dd0u;
    // NOP
    // 0x268dd4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268dd8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x268dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x268ddc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x268ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x268de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268de4: 0x0  nop
    ctx->pc = 0x268de4u;
    // NOP
    // 0x268de8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x268de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x268dec: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268df0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268df8: 0x0  nop
    ctx->pc = 0x268df8u;
    // NOP
    // 0x268dfc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x268dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x268e00: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268e04: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e0c: 0x0  nop
    ctx->pc = 0x268e0cu;
    // NOP
    // 0x268e10: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x268e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x268e14: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x268e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x268e18: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x268e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x268e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e20: 0x0  nop
    ctx->pc = 0x268e20u;
    // NOP
    // 0x268e24: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x268e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x268e28: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x268e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x268e2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x268e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x268e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e34: 0x0  nop
    ctx->pc = 0x268e34u;
    // NOP
    // 0x268e38: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x268e3c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x268e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e44: 0x0  nop
    ctx->pc = 0x268e44u;
    // NOP
    // 0x268e48: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x268e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x268e4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x268e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e54: 0x0  nop
    ctx->pc = 0x268e54u;
    // NOP
    // 0x268e58: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x268e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x268e5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e64: 0x0  nop
    ctx->pc = 0x268e64u;
    // NOP
    // 0x268e68: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268e6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e74: 0x0  nop
    ctx->pc = 0x268e74u;
    // NOP
    // 0x268e78: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268e7c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268e80: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e88: 0x0  nop
    ctx->pc = 0x268e88u;
    // NOP
    // 0x268e8c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x268e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x268e90: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268e94: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e9c: 0x0  nop
    ctx->pc = 0x268e9cu;
    // NOP
    // 0x268ea0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x268ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x268ea4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268ea8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268eb0: 0x0  nop
    ctx->pc = 0x268eb0u;
    // NOP
    // 0x268eb4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x268eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x268eb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x268EB8u;
    SET_GPR_U32(ctx, 31, 0x268EC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268EB8u, 0x268EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EC0u;
label_268ec0:
    // 0x268ec0: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x268ec4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x268ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x268ec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x268ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268ecc: 0x0  nop
    ctx->pc = 0x268eccu;
    // NOP
    // 0x268ed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268ed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268ed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268ed8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x268ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_268edc:
    // 0x268edc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x268edcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ef0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x268ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x268EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268EFCu;
}
