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

// Function: entry_002eeec8
// Address: 0x2eeec8 - 0x2eefc0
void entry_002eeec8_0x2eeec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eeec8_0x2eeec8");
#endif

    switch (ctx->pc) {
        case 0x2eeefcu: goto label_2eeefc;
        case 0x2eef94u: goto label_2eef94;
        default: break;
    }

    ctx->pc = 0x2eeec8u;

    // 0x2eeec8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2eeec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2eeecc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eeeccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eeed0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eeed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eeed4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2eeed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2eeed8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2eeed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2eeedc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eeedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eeee0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2eeee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2eeee4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2eeee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eeee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eeeec: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2eeeecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eeef0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2eeef0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eeef4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EEEF4u;
    SET_GPR_U32(ctx, 31, 0x2EEEFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EEEF4u, 0x2EEEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEFCu;
label_2eeefc:
    // 0x2eeefc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eeefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef00: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2eef04: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2eef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2eef08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef10: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2eef10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eef14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2eef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eef18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef20: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2eef20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eef24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef28: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef2c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2eef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef30: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef34: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef38: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2eef38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef44: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2eef44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef4c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef50: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2eef50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef58: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef5c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2eef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef68: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2eef68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef74: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2eef74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef80: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2eef80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef88: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2eef88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2eef8c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EEF8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEF94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EEF8Cu, 0x2EEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEF94u;
label_2eef94:
    // 0x2eef94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eef98: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2eef98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2eef9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eef9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eefa0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2eefa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eefa4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eefa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eefa8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eefa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eefac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEFACu;
    {
        const bool branch_taken_0x2eefac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eefac) {
            ctx->pc = 0x2EEFC0u;
            return;
        }
    }
    ctx->pc = 0x2EEFB4u;
    // 0x2eefb4: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2eefb4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eefb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEFB8u;
    {
        const bool branch_taken_0x2eefb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eefb8) {
            ctx->pc = 0x2EEFE0u;
            return;
        }
    }
    ctx->pc = 0x2EEFC0u;
}
