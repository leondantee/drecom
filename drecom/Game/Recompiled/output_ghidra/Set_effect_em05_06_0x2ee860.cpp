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

// Function: Set_effect_em05_06
// Address: 0x2ee860 - 0x2ef280
void Set_effect_em05_06_0x2ee860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_06_0x2ee860");
#endif

    switch (ctx->pc) {
        case 0x2ee8a8u: goto label_2ee8a8;
        case 0x2ee8c0u: goto label_2ee8c0;
        case 0x2ee95cu: goto label_2ee95c;
        case 0x2eea24u: goto label_2eea24;
        case 0x2eea48u: goto label_2eea48;
        case 0x2eea6cu: goto label_2eea6c;
        case 0x2eea94u: goto label_2eea94;
        case 0x2eeac4u: goto label_2eeac4;
        case 0x2eebc0u: goto label_2eebc0;
        case 0x2eebe0u: goto label_2eebe0;
        case 0x2eec44u: goto label_2eec44;
        case 0x2eecd4u: goto label_2eecd4;
        case 0x2eedb4u: goto label_2eedb4;
        case 0x2eee60u: goto label_2eee60;
        case 0x2eee98u: goto label_2eee98;
        case 0x2eeefcu: goto label_2eeefc;
        case 0x2eef94u: goto label_2eef94;
        case 0x2ef0a8u: goto label_2ef0a8;
        case 0x2ef0ccu: goto label_2ef0cc;
        case 0x2ef0f0u: goto label_2ef0f0;
        case 0x2ef118u: goto label_2ef118;
        case 0x2ef148u: goto label_2ef148;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1fcu: goto label_2ef1fc;
        default: break;
    }

    ctx->pc = 0x2ee860u;

    // 0x2ee860: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ee860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ee864: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2ee864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2ee868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ee868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ee86c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ee86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ee870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ee874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee88c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2ee88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2ee890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee894: 0x0  nop
    ctx->pc = 0x2ee894u;
    // NOP
    // 0x2ee898: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ee898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ee89c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2ee89cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee8a0: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2EE8A0u;
    {
        const bool branch_taken_0x2ee8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8a0) {
            ctx->pc = 0x2EEC20u;
            goto label_2eec20;
        }
    }
    ctx->pc = 0x2EE8A8u;
label_2ee8a8:
    // 0x2ee8a8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ee8ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ee8acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee8b0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2ee8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ee8b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ee8b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee8b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EE8B8u;
    SET_GPR_U32(ctx, 31, 0x2EE8C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EE8B8u, 0x2EE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8C0u;
label_2ee8c0:
    // 0x2ee8c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8c4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ee8c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee8cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8d4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ee8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee8d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee8dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ee8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee8e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8f0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ee8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee8f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee900: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ee900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee908: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee90c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ee90cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee910: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee914: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee918: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ee918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee91c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee920: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee924: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ee924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee928: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee92c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee930: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ee930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee934: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee938: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee93c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ee93cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee940: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee944: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee948: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ee948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee94c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee950: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ee950u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee954: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EE954u;
    SET_GPR_U32(ctx, 31, 0x2EE95Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EE954u, 0x2EE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE95Cu;
label_2ee95c:
    // 0x2ee95c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee960: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ee964: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee968: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee96c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee970: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee974: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE988u;
            goto label_2ee988;
        }
    }
    ctx->pc = 0x2EE97Cu;
    // 0x2ee97c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ee97cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee980: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE980u;
    {
        const bool branch_taken_0x2ee980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee980) {
            ctx->pc = 0x2EE9A8u;
            goto label_2ee9a8;
        }
    }
    ctx->pc = 0x2EE988u;
label_2ee988:
    // 0x2ee988: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee98c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee990: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee994: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee998: 0x24560118  addiu       $s6, $v0, 0x118
    ctx->pc = 0x2ee998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ee99c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x2ee99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ee9a0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ee9a4: 0x0  nop
    ctx->pc = 0x2ee9a4u;
    // NOP
label_2ee9a8:
    // 0x2ee9a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ee9ac: 0x2457a610  addiu       $s7, $v0, -0x59F0
    ctx->pc = 0x2ee9acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2ee9b0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2ee9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee9b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee9b8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee9bc: 0x1202008e  beq         $s0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2EE9BCu;
    {
        const bool branch_taken_0x2ee9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9bc) {
            ctx->pc = 0x2EEBF8u;
            goto label_2eebf8;
        }
    }
    ctx->pc = 0x2EE9C4u;
    // 0x2ee9c4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ee9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ee9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9cc: 0x0  nop
    ctx->pc = 0x2ee9ccu;
    // NOP
    // 0x2ee9d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ee9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ee9d4: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ee9d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ee9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ee9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9e0: 0x0  nop
    ctx->pc = 0x2ee9e0u;
    // NOP
    // 0x2ee9e4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ee9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ee9e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ee9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9f0: 0x0  nop
    ctx->pc = 0x2ee9f0u;
    // NOP
    // 0x2ee9f4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ee9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ee9f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eea00: 0x0  nop
    ctx->pc = 0x2eea00u;
    // NOP
    // 0x2eea04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eea04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eea08: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2eea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2eea0c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2eea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2eea10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eea10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eea14: 0x0  nop
    ctx->pc = 0x2eea14u;
    // NOP
    // 0x2eea18: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2eea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2eea1c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA1Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA24u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA1Cu, 0x2EEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA24u;
label_2eea24:
    // 0x2eea24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea2c: 0x0  nop
    ctx->pc = 0x2eea2cu;
    // NOP
    // 0x2eea30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea34: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea3c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eea3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eea40: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA40u;
    SET_GPR_U32(ctx, 31, 0x2EEA48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA40u, 0x2EEA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA48u;
label_2eea48:
    // 0x2eea48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea50: 0x0  nop
    ctx->pc = 0x2eea50u;
    // NOP
    // 0x2eea54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea58: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea60: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eea64: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEA64u;
    SET_GPR_U32(ctx, 31, 0x2EEA6Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEA64u, 0x2EEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA6Cu;
label_2eea6c:
    // 0x2eea6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eea70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea74: 0x0  nop
    ctx->pc = 0x2eea74u;
    // NOP
    // 0x2eea78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eea78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eea7c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eea80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eea84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eea88: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2eea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eea8c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA94u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EEA8Cu, 0x2EEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA94u;
label_2eea94:
    // 0x2eea94: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eea98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eea98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eea9c: 0x0  nop
    ctx->pc = 0x2eea9cu;
    // NOP
    // 0x2eeaa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eeaa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eeaa4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eeaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eeaa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeab0: 0x0  nop
    ctx->pc = 0x2eeab0u;
    // NOP
    // 0x2eeab4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eeab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eeab8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2eeab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eeabc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EEABCu;
    SET_GPR_U32(ctx, 31, 0x2EEAC4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EEABCu, 0x2EEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAC4u;
label_2eeac4:
    // 0x2eeac4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eeac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eeac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeacc: 0x0  nop
    ctx->pc = 0x2eeaccu;
    // NOP
    // 0x2eead0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eead0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eead4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eead8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eeadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeae0: 0x0  nop
    ctx->pc = 0x2eeae0u;
    // NOP
    // 0x2eeae4: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eeae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eeae8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeaf0: 0x0  nop
    ctx->pc = 0x2eeaf0u;
    // NOP
    // 0x2eeaf4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eeaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eeaf8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2eeafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb00: 0x0  nop
    ctx->pc = 0x2eeb00u;
    // NOP
    // 0x2eeb04: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eeb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eeb08: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2eeb0c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2eeb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2eeb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb14: 0x0  nop
    ctx->pc = 0x2eeb14u;
    // NOP
    // 0x2eeb18: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eeb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eeb1c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2eeb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2eeb20: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2eeb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2eeb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb28: 0x0  nop
    ctx->pc = 0x2eeb28u;
    // NOP
    // 0x2eeb2c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eeb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eeb30: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2eeb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb38: 0x0  nop
    ctx->pc = 0x2eeb38u;
    // NOP
    // 0x2eeb3c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eeb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eeb40: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2eeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2eeb44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb48: 0x0  nop
    ctx->pc = 0x2eeb48u;
    // NOP
    // 0x2eeb4c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2eeb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2eeb50: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2eeb54: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eeb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eeb58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeb5c: 0x0  nop
    ctx->pc = 0x2eeb5cu;
    // NOP
    // 0x2eeb60: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eeb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eeb64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeb68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eeb6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eeb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eeb74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eeb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eeb7c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eeb80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeb84: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eeb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eeb88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eeb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eeb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb94: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eeb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eeb98: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eeb9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eeb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eeba0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eeba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eeba4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eeba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eeba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eeba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eebac: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2eebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2eebb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eebb4: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2eebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eebb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEBB8u;
    SET_GPR_U32(ctx, 31, 0x2EEBC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEBB8u, 0x2EEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBC0u;
label_2eebc0:
    // 0x2eebc0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eebc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2eebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eebc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eebc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eebcc: 0x0  nop
    ctx->pc = 0x2eebccu;
    // NOP
    // 0x2eebd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eebd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eebd4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eebd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEBD8u;
    SET_GPR_U32(ctx, 31, 0x2EEBE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEBD8u, 0x2EEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBE0u;
label_2eebe0:
    // 0x2eebe0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2eebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2eebe4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2eebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2eebe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eebec: 0x0  nop
    ctx->pc = 0x2eebecu;
    // NOP
    // 0x2eebf0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eebf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eebf4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eebf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2eebf8:
    // 0x2eebf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eebf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eebfc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2eebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eec00: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2eec04: 0x34420e56  ori         $v0, $v0, 0xE56
    ctx->pc = 0x2eec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3670);
    // 0x2eec08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec0c: 0x0  nop
    ctx->pc = 0x2eec0cu;
    // NOP
    // 0x2eec10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eec14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eec18: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2eec1c: 0x0  nop
    ctx->pc = 0x2eec1cu;
    // NOP
label_2eec20:
    // 0x2eec20: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2eec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2eec24: 0x1440ff20  bnez        $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x2EEC24u;
    {
        const bool branch_taken_0x2eec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eec24) {
            ctx->pc = 0x2EE8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee8a8;
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
            goto label_2eed00;
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
            goto label_2eed28;
        }
    }
    ctx->pc = 0x2EED00u;
label_2eed00:
    // 0x2eed00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eed04: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eed08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eed0c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eed10: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2eed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eed14: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2eed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2eed18: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eed1c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2eed1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eed20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2eed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eed24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2eed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_2eed28:
    // 0x2eed28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eed28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eed2c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2eed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eed30: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2eed30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2eed34: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x2eed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2eed38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2eed38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eed3c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eed40: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eed44: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EED44u;
    {
        const bool branch_taken_0x2eed44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eed44) {
            ctx->pc = 0x2EED9Cu;
            goto label_2eed9c;
        }
    }
    ctx->pc = 0x2EED4Cu;
    // 0x2eed4c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed54: 0x0  nop
    ctx->pc = 0x2eed54u;
    // NOP
    // 0x2eed58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eed58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eed5c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed64: 0x0  nop
    ctx->pc = 0x2eed64u;
    // NOP
    // 0x2eed68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eed6c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed74: 0x0  nop
    ctx->pc = 0x2eed74u;
    // NOP
    // 0x2eed78: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eed7c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2eed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2eed80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed84: 0x0  nop
    ctx->pc = 0x2eed84u;
    // NOP
    // 0x2eed88: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eed8c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2eed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2eed90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed94: 0x0  nop
    ctx->pc = 0x2eed94u;
    // NOP
    // 0x2eed98: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eed98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_2eed9c:
    // 0x2eed9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eed9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeda0: 0x0  nop
    ctx->pc = 0x2eeda0u;
    // NOP
    // 0x2eeda4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eeda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eeda8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eeda8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eedac: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x2EEDACu;
    {
        const bool branch_taken_0x2eedac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedac) {
            ctx->pc = 0x2EF240u;
            goto label_2ef240;
        }
    }
    ctx->pc = 0x2EEDB4u;
label_2eedb4:
    // 0x2eedb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedb8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eedbc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eedc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eedc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eedc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eedcc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eedd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedd4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eedd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeddc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eede0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eede4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eede8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eedec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eedecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eedf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedf4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eedf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eedf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eedfc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2eedfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2eee00: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2eee00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eee04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eee0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eee0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eee10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eee14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eee18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eee1c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eee20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee24: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eee28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eee2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eee30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eee34: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eee38: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eee3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eee40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee44: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eee44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eee48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eee4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eee50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEE50u;
    {
        const bool branch_taken_0x2eee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee50) {
            ctx->pc = 0x2EEE90u;
            goto label_2eee90;
        }
    }
    ctx->pc = 0x2EEE58u;
    // 0x2eee58: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEE58u;
    SET_GPR_U32(ctx, 31, 0x2EEE60u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEE58u, 0x2EEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE60u;
label_2eee60:
    // 0x2eee60: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eee64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eee68: 0x0  nop
    ctx->pc = 0x2eee68u;
    // NOP
    // 0x2eee6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eee6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eee70: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x2eee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
    // 0x2eee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eee78: 0x0  nop
    ctx->pc = 0x2eee78u;
    // NOP
    // 0x2eee7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eee7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eee80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2eee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eee84: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2eee84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eee88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EEE88u;
    {
        const bool branch_taken_0x2eee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee88) {
            ctx->pc = 0x2EEEC8u;
            goto label_2eeec8;
        }
    }
    ctx->pc = 0x2EEE90u;
label_2eee90:
    // 0x2eee90: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEE90u;
    SET_GPR_U32(ctx, 31, 0x2EEE98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEE90u, 0x2EEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE98u;
label_2eee98:
    // 0x2eee98: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2eee9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eee9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeea0: 0x0  nop
    ctx->pc = 0x2eeea0u;
    // NOP
    // 0x2eeea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eeea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eeea8: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x2eeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x2eeeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeeb0: 0x0  nop
    ctx->pc = 0x2eeeb0u;
    // NOP
    // 0x2eeeb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eeeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eeeb8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2eeeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eeebc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2eeebcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eeec0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eeec4: 0x0  nop
    ctx->pc = 0x2eeec4u;
    // NOP
label_2eeec8:
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
            goto label_2eefc0;
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
            goto label_2eefe0;
        }
    }
    ctx->pc = 0x2EEFC0u;
label_2eefc0:
    // 0x2eefc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eefc4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eefc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2eefcc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2eefd0: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2eefd4: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x2eefd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2eefd8: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eefdc: 0x0  nop
    ctx->pc = 0x2eefdcu;
    // NOP
label_2eefe0:
    // 0x2eefe0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eefe4: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eefe8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2eefe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2eefec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2eefecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2eeff0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eeff4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eeff8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eeff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eeffc: 0x12030086  beq         $s0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2EEFFCu;
    {
        const bool branch_taken_0x2eeffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeffc) {
            ctx->pc = 0x2EF218u;
            goto label_2ef218;
        }
    }
    ctx->pc = 0x2EF004u;
    // 0x2ef004: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ef004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ef008: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EF008u;
    {
        const bool branch_taken_0x2ef008 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef008) {
            ctx->pc = 0x2EF05Cu;
            goto label_2ef05c;
        }
    }
    ctx->pc = 0x2EF010u;
    // 0x2ef010: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef018: 0x0  nop
    ctx->pc = 0x2ef018u;
    // NOP
    // 0x2ef01c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef020: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef024: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ef024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ef028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef02c: 0x0  nop
    ctx->pc = 0x2ef02cu;
    // NOP
    // 0x2ef030: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef034: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef03c: 0x0  nop
    ctx->pc = 0x2ef03cu;
    // NOP
    // 0x2ef040: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef044: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef04c: 0x0  nop
    ctx->pc = 0x2ef04cu;
    // NOP
    // 0x2ef050: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ef054: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EF054u;
    {
        const bool branch_taken_0x2ef054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef054) {
            ctx->pc = 0x2EF0A0u;
            goto label_2ef0a0;
        }
    }
    ctx->pc = 0x2EF05Cu;
label_2ef05c:
    // 0x2ef05c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef064: 0x0  nop
    ctx->pc = 0x2ef064u;
    // NOP
    // 0x2ef068: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef06c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef070: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ef070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ef074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef078: 0x0  nop
    ctx->pc = 0x2ef078u;
    // NOP
    // 0x2ef07c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef080: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef088: 0x0  nop
    ctx->pc = 0x2ef088u;
    // NOP
    // 0x2ef08c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef090: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef098: 0x0  nop
    ctx->pc = 0x2ef098u;
    // NOP
    // 0x2ef09c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2ef0a0:
    // 0x2ef0a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0A0u;
    SET_GPR_U32(ctx, 31, 0x2EF0A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0A0u, 0x2EF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0A8u;
label_2ef0a8:
    // 0x2ef0a8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0b0: 0x0  nop
    ctx->pc = 0x2ef0b0u;
    // NOP
    // 0x2ef0b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef0b8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef0bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef0c0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef0c4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0C4u;
    SET_GPR_U32(ctx, 31, 0x2EF0CCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0C4u, 0x2EF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0CCu;
label_2ef0cc:
    // 0x2ef0cc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0d4: 0x0  nop
    ctx->pc = 0x2ef0d4u;
    // NOP
    // 0x2ef0d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef0dc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef0e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef0e4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef0e8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF0E8u;
    SET_GPR_U32(ctx, 31, 0x2EF0F0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF0E8u, 0x2EF0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0F0u;
label_2ef0f0:
    // 0x2ef0f0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ef0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ef0f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef0f8: 0x0  nop
    ctx->pc = 0x2ef0f8u;
    // NOP
    // 0x2ef0fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef100: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ef104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ef108: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef10c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2ef10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef110: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EF110u;
    SET_GPR_U32(ctx, 31, 0x2EF118u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EF110u, 0x2EF118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF118u;
label_2ef118:
    // 0x2ef118: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ef118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ef11c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef120: 0x0  nop
    ctx->pc = 0x2ef120u;
    // NOP
    // 0x2ef124: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef128: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ef128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ef12c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ef12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ef130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef134: 0x0  nop
    ctx->pc = 0x2ef134u;
    // NOP
    // 0x2ef138: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ef138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ef13c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2ef13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ef140: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EF140u;
    SET_GPR_U32(ctx, 31, 0x2EF148u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EF140u, 0x2EF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF148u;
label_2ef148:
    // 0x2ef148: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ef14c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef150: 0x0  nop
    ctx->pc = 0x2ef150u;
    // NOP
    // 0x2ef154: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef158: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ef158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ef15c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ef15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ef160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef164: 0x0  nop
    ctx->pc = 0x2ef164u;
    // NOP
    // 0x2ef168: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ef168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ef16c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ef16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ef170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef174: 0x0  nop
    ctx->pc = 0x2ef174u;
    // NOP
    // 0x2ef178: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ef178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ef17c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ef17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ef180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef184: 0x0  nop
    ctx->pc = 0x2ef184u;
    // NOP
    // 0x2ef188: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ef188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ef18c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ef18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef190: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ef190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ef194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef198: 0x0  nop
    ctx->pc = 0x2ef198u;
    // NOP
    // 0x2ef19c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ef19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ef1a0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ef1a4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ef1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ef1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef1ac: 0x0  nop
    ctx->pc = 0x2ef1acu;
    // NOP
    // 0x2ef1b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ef1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ef1b4: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
    // 0x2ef1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef1bc: 0x0  nop
    ctx->pc = 0x2ef1bcu;
    // NOP
    // 0x2ef1c0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ef1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ef1c4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2ef1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef1c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ef1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ef1cc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2ef1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ef1d0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2ef1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2ef1d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF1D4u;
    SET_GPR_U32(ctx, 31, 0x2EF1DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF1D4u, 0x2EF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ef1e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ef1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ef1e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef1e8: 0x0  nop
    ctx->pc = 0x2ef1e8u;
    // NOP
    // 0x2ef1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef1f0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ef1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ef1f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EF1F4u;
    SET_GPR_U32(ctx, 31, 0x2EF1FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EF1F4u, 0x2EF1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1FCu;
label_2ef1fc:
    // 0x2ef1fc: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ef1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ef200: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ef200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ef204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef208: 0x0  nop
    ctx->pc = 0x2ef208u;
    // NOP
    // 0x2ef20c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef210: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ef210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ef214: 0x0  nop
    ctx->pc = 0x2ef214u;
    // NOP
label_2ef218:
    // 0x2ef218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ef21c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2ef21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef220: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x2ef224: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x2ef224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ef228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef22c: 0x0  nop
    ctx->pc = 0x2ef22cu;
    // NOP
    // 0x2ef230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ef230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ef234: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ef238: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ef238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ef23c: 0x0  nop
    ctx->pc = 0x2ef23cu;
    // NOP
label_2ef240:
    // 0x2ef240: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x2ef240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ef244: 0x1460fedb  bnez        $v1, . + 4 + (-0x125 << 2)
    ctx->pc = 0x2EF244u;
    {
        const bool branch_taken_0x2ef244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef244) {
            ctx->pc = 0x2EEDB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eedb4;
        }
    }
    ctx->pc = 0x2EF24Cu;
    // 0x2ef24c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2ef24cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef250: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ef250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef254: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ef254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ef258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef25c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef274: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2ef274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ef278: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF280u;
}
