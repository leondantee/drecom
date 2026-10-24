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

// Function: entry_002e8560
// Address: 0x2e8560 - 0x2e8788
void entry_002e8560_0x2e8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8560_0x2e8560");
#endif

    switch (ctx->pc) {
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e8610u: goto label_2e8610;
        case 0x2e8634u: goto label_2e8634;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e8750u: goto label_2e8750;
        case 0x2e8770u: goto label_2e8770;
        default: break;
    }

    ctx->pc = 0x2e8560u;

    // 0x2e8560: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e8564: 0x247ea610  addiu       $fp, $v1, -0x59F0
    ctx->pc = 0x2e8564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8568: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x2e8568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e856c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8570: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8574: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2E8574u;
    {
        const bool branch_taken_0x2e8574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8574) {
            ctx->pc = 0x2E8788u;
            return;
        }
    }
    ctx->pc = 0x2E857Cu;
    // 0x2e857c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2e857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2e8580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8584: 0x0  nop
    ctx->pc = 0x2e8584u;
    // NOP
    // 0x2e8588: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e858c: 0x3c0241f9  lui         $v0, 0x41F9
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16889 << 16));
    // 0x2e8590: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8598: 0x0  nop
    ctx->pc = 0x2e8598u;
    // NOP
    // 0x2e859c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e859cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e85a0: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2e85a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e85a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e85a8: 0x0  nop
    ctx->pc = 0x2e85a8u;
    // NOP
    // 0x2e85ac: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e85acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e85b0: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2e85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2e85b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e85b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e85b8: 0x0  nop
    ctx->pc = 0x2e85b8u;
    // NOP
    // 0x2e85bc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e85bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e85c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E85C0u;
    SET_GPR_U32(ctx, 31, 0x2E85C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E85C0u, 0x2E85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85C8u;
label_2e85c8:
    // 0x2e85c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e85cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e85ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e85d0: 0x0  nop
    ctx->pc = 0x2e85d0u;
    // NOP
    // 0x2e85d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e85d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e85d8: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e85dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e85dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e85e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e85e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e85e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E85E4u;
    SET_GPR_U32(ctx, 31, 0x2E85ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E85E4u, 0x2E85ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85ECu;
label_2e85ec:
    // 0x2e85ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e85f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e85f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e85f4: 0x0  nop
    ctx->pc = 0x2e85f4u;
    // NOP
    // 0x2e85f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e85f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e85fc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e85fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8604: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8608: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8608u;
    SET_GPR_U32(ctx, 31, 0x2E8610u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8608u, 0x2E8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8610u;
label_2e8610:
    // 0x2e8610: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8618: 0x0  nop
    ctx->pc = 0x2e8618u;
    // NOP
    // 0x2e861c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e861cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8620: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8628: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e862c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E862Cu;
    SET_GPR_U32(ctx, 31, 0x2E8634u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E862Cu, 0x2E8634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8634u;
label_2e8634:
    // 0x2e8634: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e8634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e8638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e863c: 0x0  nop
    ctx->pc = 0x2e863cu;
    // NOP
    // 0x2e8640: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8640u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8644: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8648: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e864c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8650: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2e8654: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e8654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e8658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e865c: 0x0  nop
    ctx->pc = 0x2e865cu;
    // NOP
    // 0x2e8660: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e8660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e8664: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8668: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E8668u;
    SET_GPR_U32(ctx, 31, 0x2E8670u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E8668u, 0x2E8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8670u;
label_2e8670:
    // 0x2e8670: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2e8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2e8674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8678: 0x0  nop
    ctx->pc = 0x2e8678u;
    // NOP
    // 0x2e867c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e867cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8680: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8684: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2e8688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e868c: 0x0  nop
    ctx->pc = 0x2e868cu;
    // NOP
    // 0x2e8690: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e8690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e8694: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x2e8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8698: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E8698u;
    SET_GPR_U32(ctx, 31, 0x2E86A0u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E8698u, 0x2E86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86A0u;
label_2e86a0:
    // 0x2e86a0: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x2e86a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e86a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e86a8: 0x0  nop
    ctx->pc = 0x2e86a8u;
    // NOP
    // 0x2e86ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e86acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e86b0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e86b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e86b4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e86b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86bc: 0x0  nop
    ctx->pc = 0x2e86bcu;
    // NOP
    // 0x2e86c0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e86c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e86c4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e86c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86cc: 0x0  nop
    ctx->pc = 0x2e86ccu;
    // NOP
    // 0x2e86d0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e86d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e86d4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e86d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86dc: 0x0  nop
    ctx->pc = 0x2e86dcu;
    // NOP
    // 0x2e86e0: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e86e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e86e4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e86e8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e86e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e86ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e86ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e86f0: 0x0  nop
    ctx->pc = 0x2e86f0u;
    // NOP
    // 0x2e86f4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e86f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e86f8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e86fc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e86fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e8700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8704: 0x0  nop
    ctx->pc = 0x2e8704u;
    // NOP
    // 0x2e8708: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e8708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e870c: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2e870cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8710: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2e8710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2e8714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8718: 0x0  nop
    ctx->pc = 0x2e8718u;
    // NOP
    // 0x2e871c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8720: 0x3c024092  lui         $v0, 0x4092
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16530 << 16));
    // 0x2e8724: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2e8724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2e8728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e872c: 0x0  nop
    ctx->pc = 0x2e872cu;
    // NOP
    // 0x2e8730: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e8734: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x2e8738: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x2e8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44564);
    // 0x2e873c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8740: 0x0  nop
    ctx->pc = 0x2e8740u;
    // NOP
    // 0x2e8744: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e8744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e8748: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8748u;
    SET_GPR_U32(ctx, 31, 0x2E8750u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8748u, 0x2E8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8750u;
label_2e8750:
    // 0x2e8750: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8754: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e875c: 0x0  nop
    ctx->pc = 0x2e875cu;
    // NOP
    // 0x2e8760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8764: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e8764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e8768: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8768u;
    SET_GPR_U32(ctx, 31, 0x2E8770u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8768u, 0x2E8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8770u;
label_2e8770:
    // 0x2e8770: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e8774: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e8774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e8778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e8778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e877c: 0x0  nop
    ctx->pc = 0x2e877cu;
    // NOP
    // 0x2e8780: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8784: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2e8788u;
}
