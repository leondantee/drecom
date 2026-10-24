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

// Function: set_eff_201_fire1
// Address: 0x281cb0 - 0x281fd0
void set_eff_201_fire1_0x281cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_201_fire1_0x281cb0");
#endif

    switch (ctx->pc) {
        case 0x281cd8u: goto label_281cd8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281decu: goto label_281dec;
        case 0x281f7cu: goto label_281f7c;
        default: break;
    }

    ctx->pc = 0x281cb0u;

    // 0x281cb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x281cb4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x281cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x281cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x281cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x281cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281ccc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x281cccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281cd0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x281CD0u;
    {
        const bool branch_taken_0x281cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281cd0) {
            ctx->pc = 0x281FA0u;
            goto label_281fa0;
        }
    }
    ctx->pc = 0x281CD8u;
label_281cd8:
    // 0x281cd8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x281cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x281cdc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281ce0: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x281ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x281ce4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281ce8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x281ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x281cec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281cecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281cf0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281cf0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281cf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281CF4u;
    SET_GPR_U32(ctx, 31, 0x281CFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281CF4u, 0x281CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CFCu;
label_281cfc:
    // 0x281cfc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d00: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x281d00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x281d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281d08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281d10: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x281d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x281d14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281d1c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x281d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x281d20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281d24: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x281d28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x281d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281d2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281d38: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x281d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x281d3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281d40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x281d44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x281d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281d48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281d50: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x281d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x281d54: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x281d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x281d58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281d5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281d60: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x281d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x281d64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x281d6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281d70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281d74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x281d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x281d78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x281d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281d7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281d84: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x281d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x281d88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281d90: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x281d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x281d94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281d98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281d9c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x281d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x281da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281da4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281da8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x281da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x281dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281db4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x281db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x281db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281dc0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x281dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x281dc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281dc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281dcc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x281dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x281dd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281dd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281dd8: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x281dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x281ddc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281de0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x281de0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x281de4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281DE4u;
    SET_GPR_U32(ctx, 31, 0x281DECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281DE4u, 0x281DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281DECu;
label_281dec:
    // 0x281dec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281df0: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x281df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x281df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281df8: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x281df8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x281dfc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281e00: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281e04: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281E04u;
    {
        const bool branch_taken_0x281e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x281e04) {
            ctx->pc = 0x281E18u;
            goto label_281e18;
        }
    }
    ctx->pc = 0x281E0Cu;
    // 0x281e0c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x281e0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281e10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x281E10u;
    {
        const bool branch_taken_0x281e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281e10) {
            ctx->pc = 0x281E38u;
            goto label_281e38;
        }
    }
    ctx->pc = 0x281E18u;
label_281e18:
    // 0x281e18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281e1c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281e20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281e24: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281e28: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x281e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x281e2c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x281e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x281e30: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x281e30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x281e34: 0x0  nop
    ctx->pc = 0x281e34u;
    // NOP
label_281e38:
    // 0x281e38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x281e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x281e3c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x281e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x281e40: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x281e40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281e44: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281e48: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281e4c: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x281E4Cu;
    {
        const bool branch_taken_0x281e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x281e4c) {
            ctx->pc = 0x281F98u;
            goto label_281f98;
        }
    }
    ctx->pc = 0x281E54u;
    // 0x281e54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e5c: 0x0  nop
    ctx->pc = 0x281e5cu;
    // NOP
    // 0x281e60: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281e64: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e6c: 0x0  nop
    ctx->pc = 0x281e6cu;
    // NOP
    // 0x281e70: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281e74: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e7c: 0x0  nop
    ctx->pc = 0x281e7cu;
    // NOP
    // 0x281e80: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281e84: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x281e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x281e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e8c: 0x0  nop
    ctx->pc = 0x281e8cu;
    // NOP
    // 0x281e90: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281e94: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x281e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x281e98: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x281e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x281e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ea0: 0x0  nop
    ctx->pc = 0x281ea0u;
    // NOP
    // 0x281ea4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x281ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x281ea8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281eac: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281eb4: 0x0  nop
    ctx->pc = 0x281eb4u;
    // NOP
    // 0x281eb8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x281eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x281ebc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281ec0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ec8: 0x0  nop
    ctx->pc = 0x281ec8u;
    // NOP
    // 0x281ecc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x281eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x281ed0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x281ed4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x281ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x281ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281edc: 0x0  nop
    ctx->pc = 0x281edcu;
    // NOP
    // 0x281ee0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x281ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x281ee4: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x281ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x281ee8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x281ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x281eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ef0: 0x0  nop
    ctx->pc = 0x281ef0u;
    // NOP
    // 0x281ef4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281ef8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x281efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f00: 0x0  nop
    ctx->pc = 0x281f00u;
    // NOP
    // 0x281f04: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x281f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x281f08: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x281f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x281f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f10: 0x0  nop
    ctx->pc = 0x281f10u;
    // NOP
    // 0x281f14: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x281f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x281f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f20: 0x0  nop
    ctx->pc = 0x281f20u;
    // NOP
    // 0x281f24: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281f28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f30: 0x0  nop
    ctx->pc = 0x281f30u;
    // NOP
    // 0x281f34: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281f38: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f3c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f44: 0x0  nop
    ctx->pc = 0x281f44u;
    // NOP
    // 0x281f48: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x281f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x281f4c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f58: 0x0  nop
    ctx->pc = 0x281f58u;
    // NOP
    // 0x281f5c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x281f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x281f60: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f64: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f6c: 0x0  nop
    ctx->pc = 0x281f6cu;
    // NOP
    // 0x281f70: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x281f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x281f74: 0xc067648  jal         func_19D920
    ctx->pc = 0x281F74u;
    SET_GPR_U32(ctx, 31, 0x281F7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x281F74u, 0x281F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F7Cu;
label_281f7c:
    // 0x281f7c: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x281f80: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x281f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x281f84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281f88: 0x0  nop
    ctx->pc = 0x281f88u;
    // NOP
    // 0x281f8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x281f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281f90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x281f90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x281f94: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x281f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_281f98:
    // 0x281f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x281f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x281f9c: 0x0  nop
    ctx->pc = 0x281f9cu;
    // NOP
label_281fa0:
    // 0x281fa0: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x281fa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281fa4: 0x1460ff4c  bnez        $v1, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x281FA4u;
    {
        const bool branch_taken_0x281fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281fa4) {
            ctx->pc = 0x281CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281cd8;
        }
    }
    ctx->pc = 0x281FACu;
    // 0x281fac: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x281facu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281fb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281fb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281fb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281fc4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x281fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x281fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x281FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281FD0u;
}
