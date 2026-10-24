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

// Function: Set_eff_stopsire_kari
// Address: 0x21c960 - 0x21cd20
void Set_eff_stopsire_kari_0x21c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_eff_stopsire_kari_0x21c960");
#endif

    switch (ctx->pc) {
        case 0x21c9c0u: goto label_21c9c0;
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9ecu: goto label_21c9ec;
        case 0x21ca48u: goto label_21ca48;
        case 0x21cad8u: goto label_21cad8;
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cbe0u: goto label_21cbe0;
        default: break;
    }

    ctx->pc = 0x21c960u;

    // 0x21c960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21c964: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x21c964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x21c968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21c96c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21c970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21c970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21c974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21c978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21c97c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21c980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c98c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x21c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x21c990: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x21c990u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c994: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21c994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x21c998: 0x2463ab20  addiu       $v1, $v1, -0x54E0
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945568));
    // 0x21c99c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x21c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21c9a0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21c9a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38AB20u));
    // 0x21c9a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x21c9a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21c9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c9ac: 0x0  nop
    ctx->pc = 0x21c9acu;
    // NOP
    // 0x21c9b0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x21c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21c9b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21c9b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c9b8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x21C9B8u;
    {
        const bool branch_taken_0x21c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c9b8) {
            ctx->pc = 0x21CCE0u;
            goto label_21cce0;
        }
    }
    ctx->pc = 0x21C9C0u;
label_21c9c0:
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
            goto label_21cb34;
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
            goto label_21cb04;
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
            goto label_21cb20;
        }
    }
    ctx->pc = 0x21CB04u;
label_21cb04:
    // 0x21cb04: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb08: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cb0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb10: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cb14: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x21cb14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21cb18: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x21cb18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21cb1c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21cb1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21cb20:
    // 0x21cb20: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21cb24: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21cb28: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21cb28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cb2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x21CB2Cu;
    {
        const bool branch_taken_0x21cb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb2c) {
            ctx->pc = 0x21CC38u;
            goto label_21cc38;
        }
    }
    ctx->pc = 0x21CB34u;
label_21cb34:
    // 0x21cb34: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21cb38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21cb38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cb3c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x21cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21cb40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21cb40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cb44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21CB44u;
    SET_GPR_U32(ctx, 31, 0x21CB4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21CB44u, 0x21CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB4Cu;
label_21cb4c:
    // 0x21cb4c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb50: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21cb54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cb58: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb5c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb60: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cb64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb68: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb6c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb78: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21cb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb84: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21cb84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb90: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb94: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cb98: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cb9c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21cb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cba0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cba4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cba8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21cba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbb0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbb4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbbc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbc0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21cbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbc4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbc8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbcc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21cbccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cbd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbd4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21cbd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21CBD8u;
    SET_GPR_U32(ctx, 31, 0x21CBE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21CBD8u, 0x21CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBE0u;
label_21cbe0:
    // 0x21cbe0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbe4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21cbe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21cbe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cbec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cbf0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cbf4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cbf8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CBF8u;
    {
        const bool branch_taken_0x21cbf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21cbf8) {
            ctx->pc = 0x21CC0Cu;
            goto label_21cc0c;
        }
    }
    ctx->pc = 0x21CC00u;
    // 0x21cc00: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21cc00u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21cc04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21CC04u;
    {
        const bool branch_taken_0x21cc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc04) {
            ctx->pc = 0x21CC28u;
            goto label_21cc28;
        }
    }
    ctx->pc = 0x21CC0Cu;
label_21cc0c:
    // 0x21cc0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cc10: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cc14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21cc18: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cc1c: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x21cc1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21cc20: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x21cc20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21cc24: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21cc24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21cc28:
    // 0x21cc28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21cc2c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x21cc2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21cc30: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21cc34: 0x0  nop
    ctx->pc = 0x21cc34u;
    // NOP
label_21cc38:
    // 0x21cc38: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cc3c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cc40: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21CC40u;
    {
        const bool branch_taken_0x21cc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21cc40) {
            ctx->pc = 0x21CCB8u;
            goto label_21ccb8;
        }
    }
    ctx->pc = 0x21CC48u;
    // 0x21cc48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc50: 0x0  nop
    ctx->pc = 0x21cc50u;
    // NOP
    // 0x21cc54: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21cc58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc60: 0x0  nop
    ctx->pc = 0x21cc60u;
    // NOP
    // 0x21cc64: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21cc68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cc6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc70: 0x0  nop
    ctx->pc = 0x21cc70u;
    // NOP
    // 0x21cc74: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21cc78: 0x3c0342be  lui         $v1, 0x42BE
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17086 << 16));
    // 0x21cc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc80: 0x0  nop
    ctx->pc = 0x21cc80u;
    // NOP
    // 0x21cc84: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21cc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21cc88: 0x3c033f7c  lui         $v1, 0x3F7C
    ctx->pc = 0x21cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16252 << 16));
    // 0x21cc8c: 0x346328f6  ori         $v1, $v1, 0x28F6
    ctx->pc = 0x21cc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10486);
    // 0x21cc90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cc94: 0x0  nop
    ctx->pc = 0x21cc94u;
    // NOP
    // 0x21cc98: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21cc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21cc9c: 0x3c03442a  lui         $v1, 0x442A
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17450 << 16));
    // 0x21cca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cca4: 0x0  nop
    ctx->pc = 0x21cca4u;
    // NOP
    // 0x21cca8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21cca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21ccac: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x21ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x21ccb0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x21ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x21ccb4: 0x0  nop
    ctx->pc = 0x21ccb4u;
    // NOP
label_21ccb8:
    // 0x21ccb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21ccbc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x21ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ccc0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x21ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x21ccc4: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x21ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x21ccc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ccc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cccc: 0x0  nop
    ctx->pc = 0x21ccccu;
    // NOP
    // 0x21ccd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21ccd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ccd4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x21ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21ccd8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x21ccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x21ccdc: 0x0  nop
    ctx->pc = 0x21ccdcu;
    // NOP
label_21cce0:
    // 0x21cce0: 0x2e630040  sltiu       $v1, $s3, 0x40
    ctx->pc = 0x21cce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x21cce4: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x21CCE4u;
    {
        const bool branch_taken_0x21cce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cce4) {
            ctx->pc = 0x21C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c9c0;
        }
    }
    ctx->pc = 0x21CCECu;
    // 0x21ccec: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x21ccecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ccf0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21ccf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ccf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ccf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ccf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ccf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ccfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ccfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cd00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21cd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cd04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cd04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cd08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21cd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd14: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD20u;
}
