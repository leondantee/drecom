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

// Function: entry_002a11ec
// Address: 0x2a11ec - 0x2a1488
void entry_002a11ec_0x2a11ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a11ec_0x2a11ec");
#endif

    switch (ctx->pc) {
        case 0x2a1240u: goto label_2a1240;
        case 0x2a1264u: goto label_2a1264;
        case 0x2a1278u: goto label_2a1278;
        case 0x2a1284u: goto label_2a1284;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a1480u: goto label_2a1480;
        default: break;
    }

    ctx->pc = 0x2a11ecu;

    // 0x2a11ec: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11f0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a11f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a11f4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2a11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a11f8: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a11f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11fc: 0xc4e00124  lwc1        $f0, 0x124($a3)
    ctx->pc = 0x2a11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1200: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a1200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1204: 0x0  nop
    ctx->pc = 0x2a1204u;
    // NOP
    // 0x2a1208: 0x45000126  bc1f        . + 4 + (0x126 << 2)
    ctx->pc = 0x2A1208u;
    {
        const bool branch_taken_0x2a1208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1208) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A1210u;
    // 0x2a1210: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1214: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2a1214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1218: 0xa1280002  sb          $t0, 0x2($t1)
    ctx->pc = 0x2a1218u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a121c: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2a121cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1220: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1224: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a1224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1228: 0x8d450368  lw          $a1, 0x368($t2)
    ctx->pc = 0x2a1228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 872)));
    // 0x2a122c: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a1230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1238: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1238u;
    SET_GPR_U32(ctx, 31, 0x2A1240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1238u, 0x2A1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1240u;
label_2a1240:
    // 0x2a1240: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a1240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1244: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a1244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1248: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x2a1248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a124c: 0x14e0008e  bnez        $a3, . + 4 + (0x8E << 2)
    ctx->pc = 0x2A124Cu;
    {
        const bool branch_taken_0x2a124c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a124c) {
            ctx->pc = 0x2A1488u;
            return;
        }
    }
    ctx->pc = 0x2A1254u;
    // 0x2a1254: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a1254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1258: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a1258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a125c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A125Cu;
    SET_GPR_U32(ctx, 31, 0x2A1264u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A125Cu, 0x2A1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1264u;
label_2a1264:
    // 0x2a1264: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a1264u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1268: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a126c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a126cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a1270: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A1270u;
    SET_GPR_U32(ctx, 31, 0x2A1278u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A1270u, 0x2A1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1278u;
label_2a1278:
    // 0x2a1278: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a127c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A127Cu;
    SET_GPR_U32(ctx, 31, 0x2A1284u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A127Cu, 0x2A1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1284u;
label_2a1284:
    // 0x2a1284: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a1284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a1288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a128c: 0x0  nop
    ctx->pc = 0x2a128cu;
    // NOP
    // 0x2a1290: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a1290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a1294: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x2a1298: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a1298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a129c: 0x0  nop
    ctx->pc = 0x2a129cu;
    // NOP
    // 0x2a12a0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a12a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a12a4: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x2a12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x2a12a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a12a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12ac: 0x0  nop
    ctx->pc = 0x2a12acu;
    // NOP
    // 0x2a12b0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a12b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a12b4: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2a12b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2a12b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a12b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12bc: 0x0  nop
    ctx->pc = 0x2a12bcu;
    // NOP
    // 0x2a12c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a12c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2a12c4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a12c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a12c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12cc: 0x0  nop
    ctx->pc = 0x2a12ccu;
    // NOP
    // 0x2a12d0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2a12d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a12d4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a12d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12dc: 0x0  nop
    ctx->pc = 0x2a12dcu;
    // NOP
    // 0x2a12e0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2a12e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2a12e4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a12e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a12e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12ec: 0x0  nop
    ctx->pc = 0x2a12ecu;
    // NOP
    // 0x2a12f0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a12f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2a12f4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12f8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a12f8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12fc: 0x0  nop
    ctx->pc = 0x2a12fcu;
    // NOP
    // 0x2a1300: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a1300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a1304: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a130c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1310: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a1310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1318: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a131c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1320: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1324: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a1328: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a1328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a132c: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a132cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1330: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a1330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1334: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1334u;
    SET_GPR_U32(ctx, 31, 0x2A133Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1334u, 0x2A133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A133Cu;
label_2a133c:
    // 0x2a133c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a133cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1340: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1348: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a134c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1350: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1354: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1358: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a1358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a135c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1360: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a1364: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1368: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a136c: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1370: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1370u;
    SET_GPR_U32(ctx, 31, 0x2A1378u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1370u, 0x2A1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1378u;
label_2a1378:
    // 0x2a1378: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a1378u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a137c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1384: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1388: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a138c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a138cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1390: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1394: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a1394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a1398: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a139c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a13a0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a13a4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a13a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13a8: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a13a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a13ac: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a13acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a13b0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A13B0u;
    SET_GPR_U32(ctx, 31, 0x2A13B8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A13B0u, 0x2A13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13B8u;
label_2a13b8:
    // 0x2a13b8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a13b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13bc: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2a13c0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2a13c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a13c4: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a13c8: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a13cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a13ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a13d0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a13d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a13d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a13d8: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2a13d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a13dc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a13dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a13e0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a13e4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a13e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a13e8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a13ec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a13ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13f0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a13f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a13f4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a13f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a13f8: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a13fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A13FCu;
    SET_GPR_U32(ctx, 31, 0x2A1404u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A13FCu, 0x2A1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1404u;
label_2a1404:
    // 0x2a1404: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a1404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1408: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a140c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1410: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1414: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2a1414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1418: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a1418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a141c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1420: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a1424: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1428: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a142c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a142cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1434: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a1434u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1438: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a143c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a143cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1440: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1440u;
    SET_GPR_U32(ctx, 31, 0x2A1448u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1440u, 0x2A1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1448u;
label_2a1448:
    // 0x2a1448: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a144c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a144cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1450: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1454: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a145c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1460: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a1464: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1468: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a146c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a146cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1470: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1474: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1478: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1478u;
    SET_GPR_U32(ctx, 31, 0x2A1480u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1478u, 0x2A1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1480u;
label_2a1480:
    // 0x2a1480: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2A1480u;
    {
        const bool branch_taken_0x2a1480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1480) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A1488u;
}
