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

// Function: entry_0026a30c
// Address: 0x26a30c - 0x26a3d4
void entry_0026a30c_0x26a30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a30c_0x26a30c");
#endif

    switch (ctx->pc) {
        case 0x26a3acu: goto label_26a3ac;
        default: break;
    }

    ctx->pc = 0x26a30cu;

    // 0x26a30c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x26a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x26a310: 0x2453a610  addiu       $s3, $v0, -0x59F0
    ctx->pc = 0x26a310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x26a314: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x26a314u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x26a318: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x26a318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x26a31c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x26a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x26a320: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26A320u;
    {
        const bool branch_taken_0x26a320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a320) {
            ctx->pc = 0x26A3D4u;
            return;
        }
    }
    ctx->pc = 0x26A328u;
    // 0x26a328: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x26a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x26a32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a330: 0x0  nop
    ctx->pc = 0x26a330u;
    // NOP
    // 0x26a334: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x26a334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x26a338: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x26a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x26a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a340: 0x0  nop
    ctx->pc = 0x26a340u;
    // NOP
    // 0x26a344: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x26a344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x26a348: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x26a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
    // 0x26a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a350: 0x0  nop
    ctx->pc = 0x26a350u;
    // NOP
    // 0x26a354: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x26a354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x26a358: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26a35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a360: 0x0  nop
    ctx->pc = 0x26a360u;
    // NOP
    // 0x26a364: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x26a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x26a368: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a36c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a370: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x26a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x26a374: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a378: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a37c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x26a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x26a380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a384: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a388: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x26a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26a38c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26a390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a394: 0x0  nop
    ctx->pc = 0x26a394u;
    // NOP
    // 0x26a398: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x26a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x26a39c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x26a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a3a0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x26a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x26a3a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x26A3A4u;
    SET_GPR_U32(ctx, 31, 0x26A3ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x26A3A4u, 0x26A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A3ACu;
label_26a3ac:
    // 0x26a3ac: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x26a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x26a3b0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x26a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26a3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a3b8: 0x0  nop
    ctx->pc = 0x26a3b8u;
    // NOP
    // 0x26a3bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26a3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26a3c0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x26a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x26a3c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x26a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26a3c8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x26a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x26a3cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26A3CCu;
    {
        const bool branch_taken_0x26a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3cc) {
            ctx->pc = 0x26A3E0u;
            return;
        }
    }
    ctx->pc = 0x26A3D4u;
}
