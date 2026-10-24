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

// Function: Set_effect_pl00_01
// Address: 0x314390 - 0x314708
void Set_effect_pl00_01_0x314390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_01_0x314390");
#endif

    switch (ctx->pc) {
        case 0x314488u: goto label_314488;
        case 0x31457cu: goto label_31457c;
        default: break;
    }

    ctx->pc = 0x314390u;

    // 0x314390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x314390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x314394: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x314394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x314398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31439c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3143a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3143a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3143a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3143a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3143a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3143a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3143ac: 0x0  nop
    ctx->pc = 0x3143acu;
    // NOP
    // 0x3143b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3143b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3143b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3143b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3143b8: 0x0  nop
    ctx->pc = 0x3143b8u;
    // NOP
    // 0x3143bc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3143bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3143c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3143c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3143c4: 0x0  nop
    ctx->pc = 0x3143c4u;
    // NOP
    // 0x3143c8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3143c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3143cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3143ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3143d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3143d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3143d4: 0x0  nop
    ctx->pc = 0x3143d4u;
    // NOP
    // 0x3143d8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3143d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3143dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3143dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3143e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3143e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3143e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3143e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3143ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3143ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3143f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3143f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3143f4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3143f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3143f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3143f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3143fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x314400: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x314400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x314404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x314408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31440c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x31440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x314410: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x314410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x314414: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x314414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x314418: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x314418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31441c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x31441cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x314420: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x314420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314424: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x314424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x314428: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x314428u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31442c: 0x0  nop
    ctx->pc = 0x31442cu;
    // NOP
    // 0x314430: 0x0  nop
    ctx->pc = 0x314430u;
    // NOP
    // 0x314434: 0x1810  mfhi        $v1
    ctx->pc = 0x314434u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x314438: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x314438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31443c: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x31443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
    // 0x314440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x314444: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x314444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x314448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31444c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31444cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x314450: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x314450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x314454: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x314454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x314458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31445c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314460: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314464: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314468: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31446c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x314470: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x314470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x314474: 0x24040602  addiu       $a0, $zero, 0x602
    ctx->pc = 0x314474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x314478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31447c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x314480: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x314480u;
    SET_GPR_U32(ctx, 31, 0x314488u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x314480u, 0x314488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314488u;
label_314488:
    // 0x314488: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31448c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x31448cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x314490: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314494: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314498: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x314498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x31449c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3144a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3144a4: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x3144a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x3144a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3144a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3144ac: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3144acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3144b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3144b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3144b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3144b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3144b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3144bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3144bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3144c0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3144c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3144c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3144c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3144c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3144c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3144cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3144ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3144d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3144d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3144d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3144d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3144d8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3144d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3144dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3144dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3144e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3144e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3144e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3144e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3144e8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3144e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3144ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3144ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3144f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3144f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3144f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3144f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3144f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3144f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3144fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3144fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x314500: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x314500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x314504: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314508: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31450c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x31450cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x314510: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314514: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314518: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x314518u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x31451c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31451cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314520: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314520u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314524: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x314524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x314528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31452c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31452cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314530: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314534: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x314534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x314538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31453c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31453cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314540: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314544: 0xa043013c  sb          $v1, 0x13C($v0)
    ctx->pc = 0x314544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 3));
    // 0x314548: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31454c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31454cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314550: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x314550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x314554: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314558: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314558u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31455c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x31455cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x314560: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314564: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x314564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x314568: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x314568u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x31456c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314570: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x314570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x314574: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x314574u;
    SET_GPR_U32(ctx, 31, 0x31457Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x314574u, 0x31457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31457Cu;
label_31457c:
    // 0x31457c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314580: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x314580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x314584: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x314584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x314588: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x314588u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x31458c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31458cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x314590: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x314590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x314594: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314594u;
    {
        const bool branch_taken_0x314594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314594) {
            ctx->pc = 0x3145A8u;
            goto label_3145a8;
        }
    }
    ctx->pc = 0x31459Cu;
    // 0x31459c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31459cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3145a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3145A0u;
    {
        const bool branch_taken_0x3145a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3145a0) {
            ctx->pc = 0x3145DCu;
            goto label_3145dc;
        }
    }
    ctx->pc = 0x3145A8u;
label_3145a8:
    // 0x3145a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3145ac: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3145acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145b0: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x3145b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3145b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3145b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3145b8: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x3145b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x3145bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3145bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3145c0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3145c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145c4: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x3145c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3145c8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3145c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3145cc: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x3145ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x3145d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3145d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3145d4: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x3145d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3145d8: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x3145d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_3145dc:
    // 0x3145dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3145e0: 0x2472a610  addiu       $s2, $v1, -0x59F0
    ctx->pc = 0x3145e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x3145e4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3145e4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3145ec: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3145ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3145f0: 0x1203003d  beq         $s0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3145F0u;
    {
        const bool branch_taken_0x3145f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3145f0) {
            ctx->pc = 0x3146E8u;
            goto label_3146e8;
        }
    }
    ctx->pc = 0x3145F8u;
    // 0x3145f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3145f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3145fc: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x3145fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x314600: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x314604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314608: 0x0  nop
    ctx->pc = 0x314608u;
    // NOP
    // 0x31460c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x31460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x314610: 0x3c033f68  lui         $v1, 0x3F68
    ctx->pc = 0x314610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
    // 0x314614: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x314614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x314618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31461c: 0x0  nop
    ctx->pc = 0x31461cu;
    // NOP
    // 0x314620: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x314620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x314624: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x314628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31462c: 0x0  nop
    ctx->pc = 0x31462cu;
    // NOP
    // 0x314630: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x314630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x314634: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x314634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x314638: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x314638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x31463c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31463cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314640: 0x0  nop
    ctx->pc = 0x314640u;
    // NOP
    // 0x314644: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x314644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x314648: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x314648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31464c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31464cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314650: 0x0  nop
    ctx->pc = 0x314650u;
    // NOP
    // 0x314654: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x314654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x314658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31465c: 0x0  nop
    ctx->pc = 0x31465cu;
    // NOP
    // 0x314660: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x314660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x314664: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31466c: 0x0  nop
    ctx->pc = 0x31466cu;
    // NOP
    // 0x314670: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x314670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x314674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314678: 0x0  nop
    ctx->pc = 0x314678u;
    // NOP
    // 0x31467c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x31467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x314680: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314688: 0x0  nop
    ctx->pc = 0x314688u;
    // NOP
    // 0x31468c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x31468cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x314690: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x314690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x314694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314698: 0x0  nop
    ctx->pc = 0x314698u;
    // NOP
    // 0x31469c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x31469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3146a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3146a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146a8: 0x0  nop
    ctx->pc = 0x3146a8u;
    // NOP
    // 0x3146ac: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3146acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3146b0: 0x3c033d44  lui         $v1, 0x3D44
    ctx->pc = 0x3146b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15684 << 16));
    // 0x3146b4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x3146b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x3146b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146bc: 0x0  nop
    ctx->pc = 0x3146bcu;
    // NOP
    // 0x3146c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x3146c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x3146c4: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x3146c8: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x3146c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x3146cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3146ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146d0: 0x0  nop
    ctx->pc = 0x3146d0u;
    // NOP
    // 0x3146d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x3146d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x3146d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3146d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3146dc: 0xa2030139  sb          $v1, 0x139($s0)
    ctx->pc = 0x3146dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x3146e0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3146e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3146e4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x3146e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_3146e8:
    // 0x3146e8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3146e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3146ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3146ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3146f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3146f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3146f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3146f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3146f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3146f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3146fc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3146fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x314700: 0x3e00008  jr          $ra
    ctx->pc = 0x314700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314708u;
}
