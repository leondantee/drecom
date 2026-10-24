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

// Function: entry_0021c9c0
// Address: 0x21c9c0 - 0x21cb04
void entry_0021c9c0_0x21c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c9c0_0x21c9c0");
#endif

    switch (ctx->pc) {
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9ecu: goto label_21c9ec;
        case 0x21ca48u: goto label_21ca48;
        case 0x21cad8u: goto label_21cad8;
        default: break;
    }

    ctx->pc = 0x21c9c0u;

    // 0x21c9c0: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x21c9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c9c4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21C9C4u;
    SET_GPR_U32(ctx, 31, 0x21C9CCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21C9C4u, 0x21C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9CCu;
label_21c9cc:
    // 0x21c9cc: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x21c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x21c9d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c9d4: 0x0  nop
    ctx->pc = 0x21c9d4u;
    // NOP
    // 0x21c9d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21c9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c9dc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x21c9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x21c9e0: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x21c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c9e4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21C9E4u;
    SET_GPR_U32(ctx, 31, 0x21C9ECu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21C9E4u, 0x21C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9ECu;
label_21c9ec:
    // 0x21c9ec: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x21c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x21c9f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c9f4: 0x0  nop
    ctx->pc = 0x21c9f4u;
    // NOP
    // 0x21c9f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21c9f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c9fc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21c9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21ca00: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x21ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21ca04: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x21CA04u;
    {
        const bool branch_taken_0x21ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ca04) {
            ctx->pc = 0x21CB34u;
            return;
        }
    }
    ctx->pc = 0x21CA0Cu;
    // 0x21ca0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x21ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21ca10: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x21ca14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x21ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x21ca18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ca1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ca20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ca24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ca24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ca28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ca2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ca30: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21ca30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ca34: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21ca38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21ca38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ca3c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x21ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21ca40: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21CA40u;
    SET_GPR_U32(ctx, 31, 0x21CA48u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21CA40u, 0x21CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA48u;
label_21ca48:
    // 0x21ca48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca4c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21ca50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca58: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21ca58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca64: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca70: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca7c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca84: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca88: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21ca88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ca94: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ca98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ca98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ca9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21caa0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21caa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21caa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21caa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21caac: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21caacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cab0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cab4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cab8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21cab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cabc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cac0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cac4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21cac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cac8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cacc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cad0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21CAD0u;
    SET_GPR_U32(ctx, 31, 0x21CAD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21CAD0u, 0x21CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAD8u;
label_21cad8:
    // 0x21cad8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cadc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21cadcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21cae0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cae4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cae8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21caec: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21caf0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CAF0u;
    {
        const bool branch_taken_0x21caf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21caf0) {
            ctx->pc = 0x21CB04u;
            return;
        }
    }
    ctx->pc = 0x21CAF8u;
    // 0x21caf8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21caf8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cafc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21CAFCu;
    {
        const bool branch_taken_0x21cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cafc) {
            ctx->pc = 0x21CB20u;
            return;
        }
    }
    ctx->pc = 0x21CB04u;
}
