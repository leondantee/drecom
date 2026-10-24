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

// Function: entry_002eec20
// Address: 0x2eec20 - 0x2eed00
void entry_002eec20_0x2eec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eec20_0x2eec20");
#endif

    switch (ctx->pc) {
        case 0x2eec44u: goto label_2eec44;
        case 0x2eecd4u: goto label_2eecd4;
        default: break;
    }

    ctx->pc = 0x2eec20u;

    // 0x2eec20: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2eec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eec24: 0x1440ff20  bnez        $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x2EEC24u;
    {
        const bool branch_taken_0x2eec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eec24) {
            ctx->pc = 0x2EE8A8u;
            return;
        }
    }
    ctx->pc = 0x2EEC2Cu;
    // 0x2eec2c: 0x24040309  addiu       $a0, $zero, 0x309
    ctx->pc = 0x2eec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x2eec30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eec30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eec34: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2eec34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eec38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2eec38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eec3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EEC3Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EEC3Cu, 0x2EEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC44u;
label_2eec44:
    // 0x2eec44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec48: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2eec4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec50: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec54: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2eec54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec60: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2eec60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec68: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec6c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2eec6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec78: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2eec78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec84: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2eec84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec90: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2eec90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eec98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eec98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eec9c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2eec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eeca0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eeca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eeca4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eeca8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2eeca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eecac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eecacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eecb0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eecb4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2eecb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eecb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eecb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eecbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eecc0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2eecc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eecc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eecc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eecc8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2eecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eeccc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EECCCu;
    SET_GPR_U32(ctx, 31, 0x2EECD4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EECCCu, 0x2EECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EECD4u;
label_2eecd4:
    // 0x2eecd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eecd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eecd8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2eecd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2eecdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eecdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eece0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2eece0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eece4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eece8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eecec: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EECECu;
    {
        const bool branch_taken_0x2eecec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eecec) {
            ctx->pc = 0x2EED00u;
            return;
        }
    }
    ctx->pc = 0x2EECF4u;
    // 0x2eecf4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x2eecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x2eecf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EECF8u;
    {
        const bool branch_taken_0x2eecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eecf8) {
            ctx->pc = 0x2EED28u;
            return;
        }
    }
    ctx->pc = 0x2EED00u;
}
