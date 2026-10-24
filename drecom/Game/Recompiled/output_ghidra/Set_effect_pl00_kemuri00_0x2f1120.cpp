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

// Function: Set_effect_pl00_kemuri00
// Address: 0x2f1120 - 0x2f1934
void Set_effect_pl00_kemuri00_0x2f1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_kemuri00_0x2f1120");
#endif

    switch (ctx->pc) {
        case 0x2f1168u: goto label_2f1168;
        case 0x2f1174u: goto label_2f1174;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f12a4u: goto label_2f12a4;
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13c0u: goto label_2f13c0;
        case 0x2f13fcu: goto label_2f13fc;
        case 0x2f142cu: goto label_2f142c;
        case 0x2f14f8u: goto label_2f14f8;
        case 0x2f1518u: goto label_2f1518;
        case 0x2f157cu: goto label_2f157c;
        case 0x2f15bcu: goto label_2f15bc;
        case 0x2f1658u: goto label_2f1658;
        case 0x2f170cu: goto label_2f170c;
        case 0x2f1730u: goto label_2f1730;
        case 0x2f1754u: goto label_2f1754;
        case 0x2f1778u: goto label_2f1778;
        case 0x2f17b4u: goto label_2f17b4;
        case 0x2f17e4u: goto label_2f17e4;
        case 0x2f1894u: goto label_2f1894;
        case 0x2f18b4u: goto label_2f18b4;
        default: break;
    }

    ctx->pc = 0x2f1120u;

    // 0x2f1120: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f1120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f1124: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2f1124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2f1128: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2f112c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f1130: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f1130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f1134: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f1138: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f113c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f113cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1148: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2f1148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2f114c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x2f114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x2f1150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1154: 0x0  nop
    ctx->pc = 0x2f1154u;
    // NOP
    // 0x2f1158: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f115c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f115cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1160: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2F1160u;
    {
        const bool branch_taken_0x2f1160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1160) {
            ctx->pc = 0x2F1558u;
            goto label_2f1558;
        }
    }
    ctx->pc = 0x2F1168u;
label_2f1168:
    // 0x2f1168: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f116c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F116Cu;
    SET_GPR_U32(ctx, 31, 0x2F1174u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F116Cu, 0x2F1174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1174u;
label_2f1174:
    // 0x2f1174: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2f1174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2f1178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f117c: 0x0  nop
    ctx->pc = 0x2f117cu;
    // NOP
    // 0x2f1180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1184: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2f1184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2f1188: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x2f1188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x2f118c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f118cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1190: 0x0  nop
    ctx->pc = 0x2f1190u;
    // NOP
    // 0x2f1194: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2f1194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2f1198: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f119c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F119Cu;
    SET_GPR_U32(ctx, 31, 0x2F11A4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F119Cu, 0x2F11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11A4u;
label_2f11a4:
    // 0x2f11a4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2f11a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f11a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f11ac: 0x0  nop
    ctx->pc = 0x2f11acu;
    // NOP
    // 0x2f11b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f11b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f11b4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2f11b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2f11b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f11bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f11bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f11c0: 0x0  nop
    ctx->pc = 0x2f11c0u;
    // NOP
    // 0x2f11c4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f11c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2f11c8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f11cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f11d0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f11d4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f11d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f11dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f11dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f11e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f11e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f11e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f11e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f11ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f11f0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f11f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f11f4: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f11f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f11f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f11fc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1200: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F1200u;
    SET_GPR_U32(ctx, 31, 0x2F1208u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F1200u, 0x2F1208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1208u;
label_2f1208:
    // 0x2f1208: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f120c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f120cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f1210: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f1210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f121c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f121cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1220: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f1220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1224: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1228: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1228u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f122c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f122cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1230: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1234: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1238: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f1238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f123c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1240: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1244: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1248: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f1248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f124c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f124cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1250: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1254: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1254u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1258: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f125c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f125cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1260: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1264: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1268: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f126c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f126cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1270: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1274: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1278: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f1278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f127c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1280: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1284: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1288: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f128c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f128cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1290: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1294: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1298: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f1298u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f129c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F129Cu;
    SET_GPR_U32(ctx, 31, 0x2F12A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F129Cu, 0x2F12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12A4u;
label_2f12a4:
    // 0x2f12a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f12a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f12a8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f12a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f12ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f12acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f12b0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f12b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f12b8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f12b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f12bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F12BCu;
    {
        const bool branch_taken_0x2f12bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f12bc) {
            ctx->pc = 0x2F12D0u;
            goto label_2f12d0;
        }
    }
    ctx->pc = 0x2F12C4u;
    // 0x2f12c4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f12c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f12c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F12C8u;
    {
        const bool branch_taken_0x2f12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f12c8) {
            ctx->pc = 0x2F12F0u;
            goto label_2f12f0;
        }
    }
    ctx->pc = 0x2F12D0u;
label_2f12d0:
    // 0x2f12d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f12d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f12d4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f12d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f12d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f12dc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f12e0: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2f12e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f12e4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2f12e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f12e8: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2f12e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f12ec: 0x0  nop
    ctx->pc = 0x2f12ecu;
    // NOP
label_2f12f0:
    // 0x2f12f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f12f4: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2f12f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f12f8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2f12f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f12fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1300: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1304: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2F1304u;
    {
        const bool branch_taken_0x2f1304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1304) {
            ctx->pc = 0x2F1530u;
            goto label_2f1530;
        }
    }
    ctx->pc = 0x2F130Cu;
    // 0x2f130c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f1310: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f1310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1314: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f1318: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1320: 0x0  nop
    ctx->pc = 0x2f1320u;
    // NOP
    // 0x2f1324: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1328: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f132c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1334: 0x0  nop
    ctx->pc = 0x2f1334u;
    // NOP
    // 0x2f1338: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f133c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2f133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2f1340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1344: 0x0  nop
    ctx->pc = 0x2f1344u;
    // NOP
    // 0x2f1348: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f134c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f1350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1354: 0x0  nop
    ctx->pc = 0x2f1354u;
    // NOP
    // 0x2f1358: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f135c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F135Cu;
    SET_GPR_U32(ctx, 31, 0x2F1364u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F135Cu, 0x2F1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1364u;
label_2f1364:
    // 0x2f1364: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f1368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f136c: 0x0  nop
    ctx->pc = 0x2f136cu;
    // NOP
    // 0x2f1370: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1374: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f137c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f137cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1380: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1380u;
    SET_GPR_U32(ctx, 31, 0x2F1388u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1380u, 0x2F1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1388u;
label_2f1388:
    // 0x2f1388: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f138c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f138cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1390: 0x0  nop
    ctx->pc = 0x2f1390u;
    // NOP
    // 0x2f1394: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1398: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f139c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f139cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f13a0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f13a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F13A4u;
    SET_GPR_U32(ctx, 31, 0x2F13ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F13A4u, 0x2F13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13ACu;
label_2f13ac:
    // 0x2f13ac: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2f13acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f13b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f13b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f13b4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f13b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f13b8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F13B8u;
    SET_GPR_U32(ctx, 31, 0x2F13C0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F13B8u, 0x2F13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13C0u;
label_2f13c0:
    // 0x2f13c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f13c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f13c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f13c8: 0x0  nop
    ctx->pc = 0x2f13c8u;
    // NOP
    // 0x2f13cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f13ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f13d0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f13d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f13d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f13d8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f13d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f13dc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f13e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f13e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f13e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f13e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f13e8: 0x0  nop
    ctx->pc = 0x2f13e8u;
    // NOP
    // 0x2f13ec: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f13ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f13f0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f13f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f13f4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F13F4u;
    SET_GPR_U32(ctx, 31, 0x2F13FCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F13F4u, 0x2F13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13FCu;
label_2f13fc:
    // 0x2f13fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f1400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1404: 0x0  nop
    ctx->pc = 0x2f1404u;
    // NOP
    // 0x2f1408: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f140c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f1410: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f1414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1418: 0x0  nop
    ctx->pc = 0x2f1418u;
    // NOP
    // 0x2f141c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f1420: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1424: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F1424u;
    SET_GPR_U32(ctx, 31, 0x2F142Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F1424u, 0x2F142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F142Cu;
label_2f142c:
    // 0x2f142c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f1430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1434: 0x0  nop
    ctx->pc = 0x2f1434u;
    // NOP
    // 0x2f1438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f143c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f143cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f1440: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f1440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f1444: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f1444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f1448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f144c: 0x0  nop
    ctx->pc = 0x2f144cu;
    // NOP
    // 0x2f1450: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f1450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f1454: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f1454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f1458: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f145c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f145cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1460: 0x0  nop
    ctx->pc = 0x2f1460u;
    // NOP
    // 0x2f1464: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f1464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f1468: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2f1468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2f146c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1470: 0x0  nop
    ctx->pc = 0x2f1470u;
    // NOP
    // 0x2f1474: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f1478: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f147c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f147cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1480: 0x0  nop
    ctx->pc = 0x2f1480u;
    // NOP
    // 0x2f1484: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f1484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f1488: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2f1488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2f148c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2f148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2f1490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1494: 0x0  nop
    ctx->pc = 0x2f1494u;
    // NOP
    // 0x2f1498: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f1498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f149c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f14a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f14a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f14a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f14a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f14ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f14acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f14b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f14b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f14b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f14b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f14b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f14bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f14c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f14c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f14c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f14c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f14cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f14ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f14d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f14d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f14d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f14d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f14dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f14dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f14e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f14e4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2f14e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2f14e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f14e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f14ec: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2f14ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f14f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F14F0u;
    SET_GPR_U32(ctx, 31, 0x2F14F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F14F0u, 0x2F14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F14F8u;
label_2f14f8:
    // 0x2f14f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f14fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f14fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1504: 0x0  nop
    ctx->pc = 0x2f1504u;
    // NOP
    // 0x2f1508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f150c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f1510: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1510u;
    SET_GPR_U32(ctx, 31, 0x2F1518u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1510u, 0x2F1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1518u;
label_2f1518:
    // 0x2f1518: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f1518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f151c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f1520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f1520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1524: 0x0  nop
    ctx->pc = 0x2f1524u;
    // NOP
    // 0x2f1528: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f152c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2f1530:
    // 0x2f1530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f1534: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1538: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x2f1538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x2f153c: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f1540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1544: 0x0  nop
    ctx->pc = 0x2f1544u;
    // NOP
    // 0x2f1548: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f154c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1550: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f1550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f1554: 0x0  nop
    ctx->pc = 0x2f1554u;
    // NOP
label_2f1558:
    // 0x2f1558: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2f1558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f155c: 0x1460ff02  bnez        $v1, . + 4 + (-0xFE << 2)
    ctx->pc = 0x2F155Cu;
    {
        const bool branch_taken_0x2f155c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f155c) {
            ctx->pc = 0x2F1168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1168;
        }
    }
    ctx->pc = 0x2F1564u;
    // 0x2f1564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1568: 0x0  nop
    ctx->pc = 0x2f1568u;
    // NOP
    // 0x2f156c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1570: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f1570u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1574: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2F1574u;
    {
        const bool branch_taken_0x2f1574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1574) {
            ctx->pc = 0x2F18F8u;
            goto label_2f18f8;
        }
    }
    ctx->pc = 0x2F157Cu;
label_2f157c:
    // 0x2f157c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1580: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f1580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f1584: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f1588: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f1588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f158c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1590: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f1590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1594: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f1598: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f159c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f15a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f15a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f15a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f15a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f15a8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f15ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f15acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f15b0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f15b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F15B4u;
    SET_GPR_U32(ctx, 31, 0x2F15BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F15B4u, 0x2F15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15BCu;
label_2f15bc:
    // 0x2f15bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15c0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f15c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15d0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f15d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f15d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15e0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f15e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15ec: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f15ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f15f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15fc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f15fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1600: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1604: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1608: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f160c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1610: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1610u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1614: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1618: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f161c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f161cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1620: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f1620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1624: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1628: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f162c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f162cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1630: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1634: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1638: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f163c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1640: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1644: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1644u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1648: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f164c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f164cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1650: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F1650u;
    SET_GPR_U32(ctx, 31, 0x2F1658u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F1650u, 0x2F1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1658u;
label_2f1658:
    // 0x2f1658: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f165c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f165cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f1660: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1664: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f1664u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1668: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f166c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1670: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1670u;
    {
        const bool branch_taken_0x2f1670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1670) {
            ctx->pc = 0x2F1684u;
            goto label_2f1684;
        }
    }
    ctx->pc = 0x2F1678u;
    // 0x2f1678: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f1678u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f167c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F167Cu;
    {
        const bool branch_taken_0x2f167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f167c) {
            ctx->pc = 0x2F16A0u;
            goto label_2f16a0;
        }
    }
    ctx->pc = 0x2F1684u;
label_2f1684:
    // 0x2f1684: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1688: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f168c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1690: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1694: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2f1694u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f1698: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2f1698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f169c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2f169cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f16a0:
    // 0x2f16a0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f16a4: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2f16a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f16a8: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2f16a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f16ac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f16acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f16b0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f16b4: 0x12030086  beq         $s0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2F16B4u;
    {
        const bool branch_taken_0x2f16b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f16b4) {
            ctx->pc = 0x2F18D0u;
            goto label_2f18d0;
        }
    }
    ctx->pc = 0x2F16BCu;
    // 0x2f16bc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f16c0: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f16c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f16c4: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x2f16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x2f16c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f16c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f16cc: 0x0  nop
    ctx->pc = 0x2f16ccu;
    // NOP
    // 0x2f16d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f16d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f16d4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2f16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2f16d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f16d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f16dc: 0x0  nop
    ctx->pc = 0x2f16dcu;
    // NOP
    // 0x2f16e0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f16e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f16e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2f16e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f16e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f16ec: 0x0  nop
    ctx->pc = 0x2f16ecu;
    // NOP
    // 0x2f16f0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f16f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f16f4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f16f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f16f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f16fc: 0x0  nop
    ctx->pc = 0x2f16fcu;
    // NOP
    // 0x2f1700: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1704: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1704u;
    SET_GPR_U32(ctx, 31, 0x2F170Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1704u, 0x2F170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F170Cu;
label_2f170c:
    // 0x2f170c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f170cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1714: 0x0  nop
    ctx->pc = 0x2f1714u;
    // NOP
    // 0x2f1718: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f171c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1724: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1728: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1728u;
    SET_GPR_U32(ctx, 31, 0x2F1730u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1728u, 0x2F1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1730u;
label_2f1730:
    // 0x2f1730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1738: 0x0  nop
    ctx->pc = 0x2f1738u;
    // NOP
    // 0x2f173c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f173cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1740: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1748: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f174c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F174Cu;
    SET_GPR_U32(ctx, 31, 0x2F1754u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F174Cu, 0x2F1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1754u;
label_2f1754:
    // 0x2f1754: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f175c: 0x0  nop
    ctx->pc = 0x2f175cu;
    // NOP
    // 0x2f1760: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1764: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f176c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1770: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1770u;
    SET_GPR_U32(ctx, 31, 0x2F1778u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1770u, 0x2F1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1778u;
label_2f1778:
    // 0x2f1778: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f1778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f177c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f177cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1780: 0x0  nop
    ctx->pc = 0x2f1780u;
    // NOP
    // 0x2f1784: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1788: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f178c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f178cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1790: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1794: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f1794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f1798: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f1798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f179c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f179cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f17a0: 0x0  nop
    ctx->pc = 0x2f17a0u;
    // NOP
    // 0x2f17a4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f17a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f17a8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f17ac: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F17ACu;
    SET_GPR_U32(ctx, 31, 0x2F17B4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F17ACu, 0x2F17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F17B4u;
label_2f17b4:
    // 0x2f17b4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2f17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2f17b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f17b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f17bc: 0x0  nop
    ctx->pc = 0x2f17bcu;
    // NOP
    // 0x2f17c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f17c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f17c4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f17c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f17c8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f17cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f17ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f17d0: 0x0  nop
    ctx->pc = 0x2f17d0u;
    // NOP
    // 0x2f17d4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f17d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f17d8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f17dc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F17DCu;
    SET_GPR_U32(ctx, 31, 0x2F17E4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F17DCu, 0x2F17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F17E4u;
label_2f17e4:
    // 0x2f17e4: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2f17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2f17e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f17e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f17ec: 0x0  nop
    ctx->pc = 0x2f17ecu;
    // NOP
    // 0x2f17f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f17f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f17f4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f17f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f17f8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f17fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f17fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1800: 0x0  nop
    ctx->pc = 0x2f1800u;
    // NOP
    // 0x2f1804: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2f1804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2f1808: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f180c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f180cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1810: 0x0  nop
    ctx->pc = 0x2f1810u;
    // NOP
    // 0x2f1814: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2f1814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2f1818: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2f1818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2f181c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f181cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1820: 0x0  nop
    ctx->pc = 0x2f1820u;
    // NOP
    // 0x2f1824: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2f1824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2f1828: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2f1828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2f182c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2f182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2f1830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1834: 0x0  nop
    ctx->pc = 0x2f1834u;
    // NOP
    // 0x2f1838: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f1838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f183c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2f183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2f1840: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2f1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2f1844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1848: 0x0  nop
    ctx->pc = 0x2f1848u;
    // NOP
    // 0x2f184c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f1850: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2f1850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1854: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2f1854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2f1858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f185c: 0x0  nop
    ctx->pc = 0x2f185cu;
    // NOP
    // 0x2f1860: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f1860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f1864: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2f1864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2f1868: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f186c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f186cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1870: 0x0  nop
    ctx->pc = 0x2f1870u;
    // NOP
    // 0x2f1874: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f1874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f1878: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2f1878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2f187c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f1880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1884: 0x0  nop
    ctx->pc = 0x2f1884u;
    // NOP
    // 0x2f1888: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f1888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f188c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F188Cu;
    SET_GPR_U32(ctx, 31, 0x2F1894u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F188Cu, 0x2F1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1894u;
label_2f1894:
    // 0x2f1894: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f1894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f1898: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f189c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f189cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f18a0: 0x0  nop
    ctx->pc = 0x2f18a0u;
    // NOP
    // 0x2f18a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f18a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f18a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f18a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f18ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F18ACu;
    SET_GPR_U32(ctx, 31, 0x2F18B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F18ACu, 0x2F18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F18B4u;
label_2f18b4:
    // 0x2f18b4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f18b8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f18b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f18bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f18bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f18c0: 0x0  nop
    ctx->pc = 0x2f18c0u;
    // NOP
    // 0x2f18c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f18c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f18c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f18c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2f18cc: 0x0  nop
    ctx->pc = 0x2f18ccu;
    // NOP
label_2f18d0:
    // 0x2f18d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f18d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f18d4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f18d8: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2f18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2f18dc: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f18e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f18e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f18e4: 0x0  nop
    ctx->pc = 0x2f18e4u;
    // NOP
    // 0x2f18e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f18e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f18ec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f18ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f18f0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2f18f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2f18f4: 0x0  nop
    ctx->pc = 0x2f18f4u;
    // NOP
label_2f18f8:
    // 0x2f18f8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2f18f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f18fc: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x2F18FCu;
    {
        const bool branch_taken_0x2f18fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f18fc) {
            ctx->pc = 0x2F157Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f157c;
        }
    }
    ctx->pc = 0x2F1904u;
    // 0x2f1904: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2f1904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1908: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f1908u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f190c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f190cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1910: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f1910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1914: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f1914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f191c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f191cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1928: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f192c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F192Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1934u;
}
