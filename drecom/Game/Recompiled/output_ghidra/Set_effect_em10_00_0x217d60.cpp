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

// Function: Set_effect_em10_00
// Address: 0x217d60 - 0x218558
void Set_effect_em10_00_0x217d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em10_00_0x217d60");
#endif

    switch (ctx->pc) {
        case 0x217dd4u: goto label_217dd4;
        case 0x217decu: goto label_217dec;
        case 0x217e80u: goto label_217e80;
        case 0x217f2cu: goto label_217f2c;
        case 0x217f50u: goto label_217f50;
        case 0x217f74u: goto label_217f74;
        case 0x217fa4u: goto label_217fa4;
        case 0x218064u: goto label_218064;
        case 0x2180e4u: goto label_2180e4;
        case 0x218104u: goto label_218104;
        case 0x218124u: goto label_218124;
        case 0x21816cu: goto label_21816c;
        case 0x2181d4u: goto label_2181d4;
        case 0x21826cu: goto label_21826c;
        case 0x21831cu: goto label_21831c;
        case 0x218340u: goto label_218340;
        case 0x218364u: goto label_218364;
        case 0x218394u: goto label_218394;
        case 0x218454u: goto label_218454;
        case 0x2184d4u: goto label_2184d4;
        default: break;
    }

    ctx->pc = 0x217d60u;

    // 0x217d60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x217d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x217d64: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x217d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x217d68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x217d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x217d6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x217d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x217d70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x217d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x217d74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x217d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x217d78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x217d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x217d7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x217d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x217d80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x217d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217d8c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x217d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x217d90: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x217d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x217d94: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x217d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217d98: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x217d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x217d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x217d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217da0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x217da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217da4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x217da8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x217da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217dac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x217dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x217db0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217db4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x217db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x217db8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x217db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217dbc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x217dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217dc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x217dc4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x217dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x217dc8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x217dc8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217dcc: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x217DCCu;
    {
        const bool branch_taken_0x217dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217dcc) {
            ctx->pc = 0x218148u;
            goto label_218148;
        }
    }
    ctx->pc = 0x217DD4u;
label_217dd4:
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
            goto label_217eac;
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
            goto label_217ec8;
        }
    }
    ctx->pc = 0x217EACu;
label_217eac:
    // 0x217eac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217eb0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x217eb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x217eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x217eb8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x217eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x217ebc: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x217ec0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x217ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x217ec4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x217ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_217ec8:
    // 0x217ec8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x217ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x217ecc: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x217ed0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x217ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x217ed4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x217ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x217ed8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x217ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x217edc: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x217EDCu;
    {
        const bool branch_taken_0x217edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x217edc) {
            ctx->pc = 0x218140u;
            goto label_218140;
        }
    }
    ctx->pc = 0x217EE4u;
    // 0x217ee4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217eec: 0x0  nop
    ctx->pc = 0x217eecu;
    // NOP
    // 0x217ef0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x217ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x217ef4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217efc: 0x0  nop
    ctx->pc = 0x217efcu;
    // NOP
    // 0x217f00: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x217f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x217f04: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f0c: 0x0  nop
    ctx->pc = 0x217f0cu;
    // NOP
    // 0x217f10: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x217f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x217f14: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x217f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x217f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f1c: 0x0  nop
    ctx->pc = 0x217f1cu;
    // NOP
    // 0x217f20: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x217f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x217f24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F24u;
    SET_GPR_U32(ctx, 31, 0x217F2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F24u, 0x217F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F2Cu;
label_217f2c:
    // 0x217f2c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f34: 0x0  nop
    ctx->pc = 0x217f34u;
    // NOP
    // 0x217f38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f3c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x217f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x217f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x217f48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F48u;
    SET_GPR_U32(ctx, 31, 0x217F50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F48u, 0x217F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f58: 0x0  nop
    ctx->pc = 0x217f58u;
    // NOP
    // 0x217f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f60: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x217f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x217f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x217f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F6Cu;
    SET_GPR_U32(ctx, 31, 0x217F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F6Cu, 0x217F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F74u;
label_217f74:
    // 0x217f74: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x217f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f7c: 0x0  nop
    ctx->pc = 0x217f7cu;
    // NOP
    // 0x217f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f84: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x217f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217f8c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x217f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x217f90: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217f94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x217f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f98: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x217f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x217f9c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x217F9Cu;
    SET_GPR_U32(ctx, 31, 0x217FA4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x217F9Cu, 0x217FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FA4u;
label_217fa4:
    // 0x217fa4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x217fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x217fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217fac: 0x0  nop
    ctx->pc = 0x217facu;
    // NOP
    // 0x217fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217fb4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217fb8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x217fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217fc0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x217fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x217fc4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x217fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x217fc8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x217fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fcc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x217fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x217fd0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x217fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x217fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217fd8: 0x0  nop
    ctx->pc = 0x217fd8u;
    // NOP
    // 0x217fdc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x217fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x217fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x217fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217fe4: 0x0  nop
    ctx->pc = 0x217fe4u;
    // NOP
    // 0x217fe8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x217fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x217fec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x217ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x217ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ff4: 0x0  nop
    ctx->pc = 0x217ff4u;
    // NOP
    // 0x217ff8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x217ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x217ffc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x217ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x218000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218004: 0x0  nop
    ctx->pc = 0x218004u;
    // NOP
    // 0x218008: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x218008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x21800c: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x21800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x218010: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x218014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218018: 0x0  nop
    ctx->pc = 0x218018u;
    // NOP
    // 0x21801c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x218020: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218024: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21802c: 0x0  nop
    ctx->pc = 0x21802cu;
    // NOP
    // 0x218030: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x218030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x218034: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218038: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x21803c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21803cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218040: 0x0  nop
    ctx->pc = 0x218040u;
    // NOP
    // 0x218044: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x218044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x218048: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x21804c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218054: 0x0  nop
    ctx->pc = 0x218054u;
    // NOP
    // 0x218058: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x218058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21805c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21805Cu;
    SET_GPR_U32(ctx, 31, 0x218064u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21805Cu, 0x218064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218064u;
label_218064:
    // 0x218064: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x218064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x218068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21806c: 0x0  nop
    ctx->pc = 0x21806cu;
    // NOP
    // 0x218070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218074: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x218074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x218078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21807c: 0x0  nop
    ctx->pc = 0x21807cu;
    // NOP
    // 0x218080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218084: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218088: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21808c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21808cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218090: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218094: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21809c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2180a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2180a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2180a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2180a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2180ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2180acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2180b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2180b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2180b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2180b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2180b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2180bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2180bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2180c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2180c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2180c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2180c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2180c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2180cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2180ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2180d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2180d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2180d4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2180d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2180d8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2180d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2180dc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2180DCu;
    SET_GPR_U32(ctx, 31, 0x2180E4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2180DCu, 0x2180E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E4u;
label_2180e4:
    // 0x2180e4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2180e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2180ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2180ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2180f0: 0x0  nop
    ctx->pc = 0x2180f0u;
    // NOP
    // 0x2180f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2180f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2180f8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2180f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2180fc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2180FCu;
    SET_GPR_U32(ctx, 31, 0x218104u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2180FCu, 0x218104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218104u;
label_218104:
    // 0x218104: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x218108: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x21810c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21810cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218110: 0x0  nop
    ctx->pc = 0x218110u;
    // NOP
    // 0x218114: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x218114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218118: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x218118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x21811c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21811Cu;
    SET_GPR_U32(ctx, 31, 0x218124u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21811Cu, 0x218124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218124u;
label_218124:
    // 0x218124: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x218124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x218128: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x218128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21812c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21812cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218130: 0x0  nop
    ctx->pc = 0x218130u;
    // NOP
    // 0x218134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x218134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218138: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x218138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x21813c: 0x0  nop
    ctx->pc = 0x21813cu;
    // NOP
label_218140:
    // 0x218140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x218144: 0x0  nop
    ctx->pc = 0x218144u;
    // NOP
label_218148:
    // 0x218148: 0x2e23000c  sltiu       $v1, $s1, 0xC
    ctx->pc = 0x218148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x21814c: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x21814Cu;
    {
        const bool branch_taken_0x21814c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21814c) {
            ctx->pc = 0x217DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217dd4;
        }
    }
    ctx->pc = 0x218154u;
    // 0x218154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x218154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218158: 0x0  nop
    ctx->pc = 0x218158u;
    // NOP
    // 0x21815c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218160: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x218160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218164: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x218164u;
    {
        const bool branch_taken_0x218164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218164) {
            ctx->pc = 0x218518u;
            goto label_218518;
        }
    }
    ctx->pc = 0x21816Cu;
label_21816c:
    // 0x21816c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218170: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218174: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218178: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21817c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218184: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218188: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21818c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218190: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218194: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21819c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2181a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2181a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2181a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2181a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2181a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2181a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2181ac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2181acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2181b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2181b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2181b4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2181b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2181b8: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x2181b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2181bc: 0x24041109  addiu       $a0, $zero, 0x1109
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4361));
    // 0x2181c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2181c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2181c4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2181c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2181c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2181cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2181CCu;
    SET_GPR_U32(ctx, 31, 0x2181D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2181CCu, 0x2181D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181D4u;
label_2181d4:
    // 0x2181d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181d8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2181d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2181dc: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x2181dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2181e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2181e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2181e8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2181e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2181ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2181f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2181f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2181f8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2181f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2181fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218200: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218204: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218208: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21820c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218210: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21821c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21821cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218224: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218228: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21822c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218230: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218234: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21823c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218240: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218244: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218248: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21824c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21824cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218250: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218254: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218258: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21825c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218260: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218264u;
    SET_GPR_U32(ctx, 31, 0x21826Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218264u, 0x21826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21826Cu;
label_21826c:
    // 0x21826c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218270: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218274: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218278: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21827c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218280: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218284: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218284u;
    {
        const bool branch_taken_0x218284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218284) {
            ctx->pc = 0x218298u;
            goto label_218298;
        }
    }
    ctx->pc = 0x21828Cu;
    // 0x21828c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21828cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218290: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218290u;
    {
        const bool branch_taken_0x218290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218290) {
            ctx->pc = 0x2182B8u;
            goto label_2182b8;
        }
    }
    ctx->pc = 0x218298u;
label_218298:
    // 0x218298: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21829c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21829cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2182a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2182a4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2182a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2182a8: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2182a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2182ac: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2182acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2182b0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2182b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2182b4: 0x0  nop
    ctx->pc = 0x2182b4u;
    // NOP
label_2182b8:
    // 0x2182b8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2182b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2182bc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2182c0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2182c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2182c8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2182c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2182cc: 0x12030088  beq         $s0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2182CCu;
    {
        const bool branch_taken_0x2182cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2182cc) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x2182D4u;
    // 0x2182d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182dc: 0x0  nop
    ctx->pc = 0x2182dcu;
    // NOP
    // 0x2182e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2182e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2182e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182ec: 0x0  nop
    ctx->pc = 0x2182ecu;
    // NOP
    // 0x2182f0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2182f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2182f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2182f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2182f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2182f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2182fc: 0x0  nop
    ctx->pc = 0x2182fcu;
    // NOP
    // 0x218300: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218304: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x218304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x218308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21830c: 0x0  nop
    ctx->pc = 0x21830cu;
    // NOP
    // 0x218310: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218314: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218314u;
    SET_GPR_U32(ctx, 31, 0x21831Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218314u, 0x21831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21831Cu;
label_21831c:
    // 0x21831c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218324: 0x0  nop
    ctx->pc = 0x218324u;
    // NOP
    // 0x218328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21832c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x21832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218330: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218334: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218338: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218338u;
    SET_GPR_U32(ctx, 31, 0x218340u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218338u, 0x218340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218340u;
label_218340:
    // 0x218340: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x218340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218348: 0x0  nop
    ctx->pc = 0x218348u;
    // NOP
    // 0x21834c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21834cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218350: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x218350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218354: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218358: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21835c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21835Cu;
    SET_GPR_U32(ctx, 31, 0x218364u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21835Cu, 0x218364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218364u;
label_218364:
    // 0x218364: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x218364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21836c: 0x0  nop
    ctx->pc = 0x21836cu;
    // NOP
    // 0x218370: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218374: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x218374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21837c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218380: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x218384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x218384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218388: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x218388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21838c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21838Cu;
    SET_GPR_U32(ctx, 31, 0x218394u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21838Cu, 0x218394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218394u;
label_218394:
    // 0x218394: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x218394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x218398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21839c: 0x0  nop
    ctx->pc = 0x21839cu;
    // NOP
    // 0x2183a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2183a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2183a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2183a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2183a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2183acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2183b0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2183b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2183b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2183b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2183b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2183b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183bc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2183bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2183c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2183c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183c8: 0x0  nop
    ctx->pc = 0x2183c8u;
    // NOP
    // 0x2183cc: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2183ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2183d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2183d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183d4: 0x0  nop
    ctx->pc = 0x2183d4u;
    // NOP
    // 0x2183d8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2183d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2183dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2183dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2183e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183e4: 0x0  nop
    ctx->pc = 0x2183e4u;
    // NOP
    // 0x2183e8: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2183e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2183ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2183ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2183f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2183f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183f4: 0x0  nop
    ctx->pc = 0x2183f4u;
    // NOP
    // 0x2183f8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2183f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2183fc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2183fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x218400: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x218404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218408: 0x0  nop
    ctx->pc = 0x218408u;
    // NOP
    // 0x21840c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x218410: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218414: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21841c: 0x0  nop
    ctx->pc = 0x21841cu;
    // NOP
    // 0x218420: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x218420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x218424: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x218428: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x218428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x21842c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21842cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218430: 0x0  nop
    ctx->pc = 0x218430u;
    // NOP
    // 0x218434: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x218434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x218438: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x218438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x21843c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x21843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x218440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218444: 0x0  nop
    ctx->pc = 0x218444u;
    // NOP
    // 0x218448: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x218448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x21844c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21844Cu;
    SET_GPR_U32(ctx, 31, 0x218454u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21844Cu, 0x218454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218454u;
label_218454:
    // 0x218454: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x218454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x218458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21845c: 0x0  nop
    ctx->pc = 0x21845cu;
    // NOP
    // 0x218460: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218464: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x218464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x218468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21846c: 0x0  nop
    ctx->pc = 0x21846cu;
    // NOP
    // 0x218470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218474: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218478: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21847c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21847cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218480: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218484: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21848c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218490: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218494: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218498: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21849c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21849cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2184a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2184a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2184a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2184a8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2184a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2184ac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2184b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2184b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2184b8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2184b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2184bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2184bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2184c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2184c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2184c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2184c8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2184c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2184cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2184CCu;
    SET_GPR_U32(ctx, 31, 0x2184D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2184CCu, 0x2184D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184D4u;
label_2184d4:
    // 0x2184d4: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2184d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2184d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2184d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2184dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2184dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2184e0: 0x0  nop
    ctx->pc = 0x2184e0u;
    // NOP
    // 0x2184e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2184e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2184e8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2184e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2184ec: 0x0  nop
    ctx->pc = 0x2184ecu;
    // NOP
label_2184f0:
    // 0x2184f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2184f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2184f4: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2184f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2184f8: 0x3c033ee5  lui         $v1, 0x3EE5
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16101 << 16));
    // 0x2184fc: 0x3463c73e  ori         $v1, $v1, 0xC73E
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51006);
    // 0x218500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218504: 0x0  nop
    ctx->pc = 0x218504u;
    // NOP
    // 0x218508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x218508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21850c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x21850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218510: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x218510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x218514: 0x0  nop
    ctx->pc = 0x218514u;
    // NOP
label_218518:
    // 0x218518: 0x2e23000e  sltiu       $v1, $s1, 0xE
    ctx->pc = 0x218518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x21851c: 0x1460ff13  bnez        $v1, . + 4 + (-0xED << 2)
    ctx->pc = 0x21851Cu;
    {
        const bool branch_taken_0x21851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21851c) {
            ctx->pc = 0x21816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21816c;
        }
    }
    ctx->pc = 0x218524u;
    // 0x218524: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x218524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218528: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x218528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21852c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21852cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x218538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21853c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21853cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21854c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21854cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x218550: 0x3e00008  jr          $ra
    ctx->pc = 0x218550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218558u;
}
