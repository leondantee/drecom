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

// Function: entry_00219d40
// Address: 0x219d40 - 0x219e3c
void entry_00219d40_0x219d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219d40_0x219d40");
#endif

    switch (ctx->pc) {
        case 0x219d80u: goto label_219d80;
        case 0x219e10u: goto label_219e10;
        default: break;
    }

    ctx->pc = 0x219d40u;

    // 0x219d40: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219d44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x219d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219d48: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219d4c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x219d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219d54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219d58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219d5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219d60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219d68: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219d6c: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219d70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219d70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219d74: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219d78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219D78u;
    SET_GPR_U32(ctx, 31, 0x219D80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219D78u, 0x219D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D80u;
label_219d80:
    // 0x219d80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d84: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219d88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219d90: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219d94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219d98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219d9c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x219d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x219da0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219da4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219da8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219db0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219db4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219db8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dc0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dcc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219dd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dd8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ddc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219de0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219de4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219de8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219dec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219df0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219df8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219dfc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e04: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219e04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219e08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219E08u;
    SET_GPR_U32(ctx, 31, 0x219E10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219E08u, 0x219E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E10u;
label_219e10:
    // 0x219e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e14: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219e18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e1c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e20: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219e24: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219e28: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219E28u;
    {
        const bool branch_taken_0x219e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219e28) {
            ctx->pc = 0x219E3Cu;
            return;
        }
    }
    ctx->pc = 0x219E30u;
    // 0x219e30: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x219e30u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219E34u;
    {
        const bool branch_taken_0x219e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e34) {
            ctx->pc = 0x219E58u;
            return;
        }
    }
    ctx->pc = 0x219E3Cu;
}
