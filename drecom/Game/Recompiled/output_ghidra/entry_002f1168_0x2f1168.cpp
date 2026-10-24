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

// Function: entry_002f1168
// Address: 0x2f1168 - 0x2f12d0
void entry_002f1168_0x2f1168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1168_0x2f1168");
#endif

    switch (ctx->pc) {
        case 0x2f1174u: goto label_2f1174;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f12a4u: goto label_2f12a4;
        default: break;
    }

    ctx->pc = 0x2f1168u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2F12D0u;
}
