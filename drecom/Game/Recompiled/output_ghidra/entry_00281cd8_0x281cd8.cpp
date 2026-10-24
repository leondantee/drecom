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

// Function: entry_00281cd8
// Address: 0x281cd8 - 0x281e18
void entry_00281cd8_0x281cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281cd8_0x281cd8");
#endif

    switch (ctx->pc) {
        case 0x281cfcu: goto label_281cfc;
        case 0x281decu: goto label_281dec;
        default: break;
    }

    ctx->pc = 0x281cd8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x281E18u;
}
