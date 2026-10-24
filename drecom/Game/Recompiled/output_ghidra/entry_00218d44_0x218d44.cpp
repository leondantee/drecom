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

// Function: entry_00218d44
// Address: 0x218d44 - 0x218e48
void entry_00218d44_0x218d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218d44_0x218d44");
#endif

    switch (ctx->pc) {
        case 0x218d84u: goto label_218d84;
        case 0x218e1cu: goto label_218e1c;
        default: break;
    }

    ctx->pc = 0x218d44u;

    // 0x218d44: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218d48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x218d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x218d4c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x218d50: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x218d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x218d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218d58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x218d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x218d5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x218d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x218d60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x218d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x218d64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x218d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x218d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x218d6c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x218d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218d70: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x218d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x218d74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218d74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218d78: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x218d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218d7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x218D7Cu;
    SET_GPR_U32(ctx, 31, 0x218D84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x218D7Cu, 0x218D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D84u;
label_218d84:
    // 0x218d84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d88: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x218d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x218d8c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x218d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x218d90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218d94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218d98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218d9c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x218d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x218da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218da4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218da8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x218da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218db4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dc0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dcc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218dd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dd8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ddc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218de0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218de4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218de8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218dec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218df0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218df8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218dfc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218e08: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218e0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e10: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218e10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218e14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218E14u;
    SET_GPR_U32(ctx, 31, 0x218E1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218E14u, 0x218E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E1Cu;
label_218e1c:
    // 0x218e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e20: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218e24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218e28: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218e28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218e2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218e30: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218e34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218E34u;
    {
        const bool branch_taken_0x218e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218e34) {
            ctx->pc = 0x218E48u;
            return;
        }
    }
    ctx->pc = 0x218E3Cu;
    // 0x218e3c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x218e3cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218e40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218E40u;
    {
        const bool branch_taken_0x218e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218e40) {
            ctx->pc = 0x218E64u;
            return;
        }
    }
    ctx->pc = 0x218E48u;
}
