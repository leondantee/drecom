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

// Function: entry_002f8f74
// Address: 0x2f8f74 - 0x2f9068
void entry_002f8f74_0x2f8f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8f74_0x2f8f74");
#endif

    switch (ctx->pc) {
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f903cu: goto label_2f903c;
        default: break;
    }

    ctx->pc = 0x2f8f74u;

    // 0x2f8f74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f78: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f8f7c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2f8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2f8f80: 0x148300a1  bne         $a0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2F8F80u;
    {
        const bool branch_taken_0x2f8f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8f80) {
            ctx->pc = 0x2F9208u;
            return;
        }
    }
    ctx->pc = 0x2F8F88u;
    // 0x2f8f88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f8f8c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f8f90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f8f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f94: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2f8f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8f98: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f8f98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8f9c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F8F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F8FA4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F8F9Cu, 0x2F8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8FA4u;
label_2f8fa4:
    // 0x2f8fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fa8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f8fac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fb0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fb4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f8fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8fbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fc0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fc4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f8fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fcc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fd0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f8fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8fd8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fdc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fe0: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f8fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8fe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8fe8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8fec: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f8fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ff0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f8ff4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f8ff8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f8ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ffc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f8ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9000: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9004: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f9004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9008: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f900c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f900cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9010: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f9010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9014: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9018: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f901c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f901cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f9020: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9024: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f9024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9028: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f9028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f902c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9030: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f9030u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f9034: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9034u;
    SET_GPR_U32(ctx, 31, 0x2F903Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9034u, 0x2F903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F903Cu;
label_2f903c:
    // 0x2f903c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9040: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f9040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f9044: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f9044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f9048: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f9048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f904c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f904cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9050: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f9050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9054: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9054u;
    {
        const bool branch_taken_0x2f9054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9054) {
            ctx->pc = 0x2F9068u;
            return;
        }
    }
    ctx->pc = 0x2F905Cu;
    // 0x2f905c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f905cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9060u;
    {
        const bool branch_taken_0x2f9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9060) {
            ctx->pc = 0x2F9084u;
            return;
        }
    }
    ctx->pc = 0x2F9068u;
}
