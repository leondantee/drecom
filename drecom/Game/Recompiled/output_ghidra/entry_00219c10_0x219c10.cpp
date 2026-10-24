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

// Function: entry_00219c10
// Address: 0x219c10 - 0x219d10
void entry_00219c10_0x219c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219c10_0x219c10");
#endif

    switch (ctx->pc) {
        case 0x219c54u: goto label_219c54;
        case 0x219ce4u: goto label_219ce4;
        default: break;
    }

    ctx->pc = 0x219c10u;

    // 0x219c10: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x219c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x219c14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219c18: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x219C18u;
    {
        const bool branch_taken_0x219c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219c18) {
            ctx->pc = 0x219D40u;
            return;
        }
    }
    ctx->pc = 0x219C20u;
    // 0x219c20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x219c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219c24: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x219c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x219c28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219c2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219c30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219c34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219c38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219c3c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219c40: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x219c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x219c44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219c48: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219c4c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x219C4Cu;
    SET_GPR_U32(ctx, 31, 0x219C54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x219C4Cu, 0x219C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219C54u;
label_219c54:
    // 0x219c54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c58: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x219c5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c64: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c70: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x219c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c7c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c88: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219c94: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x219c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219c98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219c9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219ca0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219ca4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ca8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cac: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cb4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cb8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cbc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cc0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cc4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ccc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219cccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cd0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219cd4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cd8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219cdc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219CDCu;
    SET_GPR_U32(ctx, 31, 0x219CE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219CDCu, 0x219CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CE4u;
label_219ce4:
    // 0x219ce4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219ce8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219cec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219cf0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219cf4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219cf8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219cfc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219CFCu;
    {
        const bool branch_taken_0x219cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219cfc) {
            ctx->pc = 0x219D10u;
            return;
        }
    }
    ctx->pc = 0x219D04u;
    // 0x219d04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219d04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219d08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219D08u;
    {
        const bool branch_taken_0x219d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d08) {
            ctx->pc = 0x219D2Cu;
            return;
        }
    }
    ctx->pc = 0x219D10u;
}
