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

// Function: entry_002f12f0
// Address: 0x2f12f0 - 0x2f1530
void entry_002f12f0_0x2f12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f12f0_0x2f12f0");
#endif

    switch (ctx->pc) {
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13c0u: goto label_2f13c0;
        case 0x2f13fcu: goto label_2f13fc;
        case 0x2f142cu: goto label_2f142c;
        case 0x2f14f8u: goto label_2f14f8;
        case 0x2f1518u: goto label_2f1518;
        default: break;
    }

    ctx->pc = 0x2f12f0u;

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
            return;
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
    ctx->pc = 0x2f1530u;
}
