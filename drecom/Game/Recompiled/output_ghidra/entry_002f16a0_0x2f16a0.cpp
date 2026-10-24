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

// Function: entry_002f16a0
// Address: 0x2f16a0 - 0x2f18d0
void entry_002f16a0_0x2f16a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f16a0_0x2f16a0");
#endif

    switch (ctx->pc) {
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

    ctx->pc = 0x2f16a0u;

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
            return;
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
    ctx->pc = 0x2f18d0u;
}
