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

// Function: entry_0021af5c
// Address: 0x21af5c - 0x21b058
void entry_0021af5c_0x21af5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021af5c_0x21af5c");
#endif

    switch (ctx->pc) {
        case 0x21af90u: goto label_21af90;
        case 0x21b02cu: goto label_21b02c;
        default: break;
    }

    ctx->pc = 0x21af5cu;

    // 0x21af5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21af60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x21af64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21af64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21af68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21af6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21af70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21af70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21af74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21af74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21af78: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x21af78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21af7c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21af80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21af80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21af84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21af84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21af88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AF88u;
    SET_GPR_U32(ctx, 31, 0x21AF90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AF88u, 0x21AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF90u;
label_21af90:
    // 0x21af90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21af90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21af94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21af98: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x21af98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21af9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afa0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afa4: 0xa060013a  sb          $zero, 0x13A($v1)
    ctx->pc = 0x21afa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afa8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21afac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afb0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afb4: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x21afb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x21afb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afbc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afc0: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x21afc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21afc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afcc: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afd0: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x21afd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x21afd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afd8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afdc: 0xa060011c  sb          $zero, 0x11C($v1)
    ctx->pc = 0x21afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21afe4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21afe8: 0xa060013b  sb          $zero, 0x13B($v1)
    ctx->pc = 0x21afe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21afec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aff0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x21aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aff4: 0xa060013c  sb          $zero, 0x13C($v1)
    ctx->pc = 0x21aff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21affc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21affcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b000: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21b000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b004: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b008: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b00c: 0xa080013e  sb          $zero, 0x13E($a0)
    ctx->pc = 0x21b00cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b010: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b014: 0x8c26a618  lw          $a2, -0x59E8($at)
    ctx->pc = 0x21b014u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b018: 0xa0c0013f  sb          $zero, 0x13F($a2)
    ctx->pc = 0x21b018u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b01c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b020: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21b020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21b024: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B024u;
    SET_GPR_U32(ctx, 31, 0x21B02Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B024u, 0x21B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B02Cu;
label_21b02c:
    // 0x21b02c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b030: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21b030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21b034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b038: 0x8c25a610  lw          $a1, -0x59F0($at)
    ctx->pc = 0x21b038u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b03c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x21b040: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x21b040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x21b044: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B044u;
    {
        const bool branch_taken_0x21b044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x21b044) {
            ctx->pc = 0x21B058u;
            return;
        }
    }
    ctx->pc = 0x21B04Cu;
    // 0x21b04c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21b04cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b050: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21B050u;
    {
        const bool branch_taken_0x21b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b050) {
            ctx->pc = 0x21B078u;
            return;
        }
    }
    ctx->pc = 0x21B058u;
}
