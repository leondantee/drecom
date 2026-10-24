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

// Function: entry_00217dd4
// Address: 0x217dd4 - 0x217eac
void entry_00217dd4_0x217dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217dd4_0x217dd4");
#endif

    switch (ctx->pc) {
        case 0x217decu: goto label_217dec;
        case 0x217e80u: goto label_217e80;
        default: break;
    }

    ctx->pc = 0x217dd4u;

    // 0x217dd4: 0x24041109  addiu       $a0, $zero, 0x1109
    ctx->pc = 0x217dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4361));
    // 0x217dd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x217dd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217ddc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x217de0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x217de0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217de4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x217DE4u;
    SET_GPR_U32(ctx, 31, 0x217DECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x217DE4u, 0x217DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DECu;
label_217dec:
    // 0x217dec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217df0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x217df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x217df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217df8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217dfc: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x217dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x217e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217e04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e08: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e0c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x217e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x217e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e18: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x217e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e24: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x217e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e2c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e30: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x217e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e3c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x217e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e40: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e44: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e48: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x217e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e50: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e54: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x217e54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e60: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x217e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e68: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x217e68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e6c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x217e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x217e70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e74: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x217e74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x217e78: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x217E78u;
    SET_GPR_U32(ctx, 31, 0x217E80u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x217E78u, 0x217E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E80u;
label_217e80:
    // 0x217e80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e84: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x217e84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x217e88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217e8c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x217e90: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x217e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x217e94: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x217e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x217e98: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x217E98u;
    {
        const bool branch_taken_0x217e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x217e98) {
            ctx->pc = 0x217EACu;
            return;
        }
    }
    ctx->pc = 0x217EA0u;
    // 0x217ea0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x217ea0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217ea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217EA4u;
    {
        const bool branch_taken_0x217ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ea4) {
            ctx->pc = 0x217EC8u;
            return;
        }
    }
    ctx->pc = 0x217EACu;
}
