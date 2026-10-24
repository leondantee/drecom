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

// Function: entry_00356cc0
// Address: 0x356cc0 - 0x356f90
void entry_00356cc0_0x356cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356cc0_0x356cc0");
#endif

    switch (ctx->pc) {
        case 0x356d10u: goto label_356d10;
        case 0x356d34u: goto label_356d34;
        case 0x356d58u: goto label_356d58;
        case 0x356d7cu: goto label_356d7c;
        case 0x356df4u: goto label_356df4;
        case 0x356e24u: goto label_356e24;
        case 0x356f64u: goto label_356f64;
        default: break;
    }

    ctx->pc = 0x356cc0u;

    // 0x356cc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356cc4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356cc8: 0x120300b1  beq         $s0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x356CC8u;
    {
        const bool branch_taken_0x356cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x356cc8) {
            ctx->pc = 0x356F90u;
            return;
        }
    }
    ctx->pc = 0x356CD0u;
    // 0x356cd0: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x356cd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356cd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356cd8: 0x0  nop
    ctx->pc = 0x356cd8u;
    // NOP
    // 0x356cdc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356ce4: 0x0  nop
    ctx->pc = 0x356ce4u;
    // NOP
    // 0x356ce8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356cec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356cf0: 0x0  nop
    ctx->pc = 0x356cf0u;
    // NOP
    // 0x356cf4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356cf8: 0x3c06425c  lui         $a2, 0x425C
    ctx->pc = 0x356cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16988 << 16));
    // 0x356cfc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356cfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356d00: 0x0  nop
    ctx->pc = 0x356d00u;
    // NOP
    // 0x356d04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356d08: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D08u;
    SET_GPR_U32(ctx, 31, 0x356D10u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D08u, 0x356D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D10u;
label_356d10:
    // 0x356d10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x356d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d18: 0x0  nop
    ctx->pc = 0x356d18u;
    // NOP
    // 0x356d1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d20: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x356d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d28: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x356d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x356d2c: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D2Cu;
    SET_GPR_U32(ctx, 31, 0x356D34u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D2Cu, 0x356D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D34u;
label_356d34:
    // 0x356d34: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x356d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d3c: 0x0  nop
    ctx->pc = 0x356d3cu;
    // NOP
    // 0x356d40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d44: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x356d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d4c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x356d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x356d50: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D50u;
    SET_GPR_U32(ctx, 31, 0x356D58u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D50u, 0x356D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D58u;
label_356d58:
    // 0x356d58: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x356d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x356d5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d60: 0x0  nop
    ctx->pc = 0x356d60u;
    // NOP
    // 0x356d64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d68: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x356d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d70: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x356d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x356d74: 0xc067654  jal         func_19D950
    ctx->pc = 0x356D74u;
    SET_GPR_U32(ctx, 31, 0x356D7Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x356D74u, 0x356D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D7Cu;
label_356d7c:
    // 0x356d7c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x356d80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356d84: 0x0  nop
    ctx->pc = 0x356d84u;
    // NOP
    // 0x356d88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356d8c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356d90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356d94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x356d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x356d98: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x356d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x356d9c: 0x344370a4  ori         $v1, $v0, 0x70A4
    ctx->pc = 0x356d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x356da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356da4: 0x0  nop
    ctx->pc = 0x356da4u;
    // NOP
    // 0x356da8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x356da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x356dac: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x356db0: 0x346270a4  ori         $v0, $v1, 0x70A4
    ctx->pc = 0x356db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x356db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356db8: 0x0  nop
    ctx->pc = 0x356db8u;
    // NOP
    // 0x356dbc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x356dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x356dc0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x356dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x356dc4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x356dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x356dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356dcc: 0x0  nop
    ctx->pc = 0x356dccu;
    // NOP
    // 0x356dd0: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x356dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x356dd4: 0x3c073f73  lui         $a3, 0x3F73
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16243 << 16));
    // 0x356dd8: 0x34e23333  ori         $v0, $a3, 0x3333
    ctx->pc = 0x356dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13107);
    // 0x356ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356de0: 0x0  nop
    ctx->pc = 0x356de0u;
    // NOP
    // 0x356de4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x356de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x356de8: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356dec: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x356DECu;
    SET_GPR_U32(ctx, 31, 0x356DF4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x356DECu, 0x356DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DF4u;
label_356df4:
    // 0x356df4: 0x3c044218  lui         $a0, 0x4218
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16920 << 16));
    // 0x356df8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356dfc: 0x0  nop
    ctx->pc = 0x356dfcu;
    // NOP
    // 0x356e00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356e04: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x356e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x356e08: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x356e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x356e0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356e0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e10: 0x0  nop
    ctx->pc = 0x356e10u;
    // NOP
    // 0x356e14: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x356e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x356e18: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x356e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356e1c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x356E1Cu;
    SET_GPR_U32(ctx, 31, 0x356E24u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x356E1Cu, 0x356E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E24u;
label_356e24:
    // 0x356e24: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x356e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x356e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x356e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356e2c: 0x0  nop
    ctx->pc = 0x356e2cu;
    // NOP
    // 0x356e30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x356e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356e34: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x356e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x356e38: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x356e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x356e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e40: 0x0  nop
    ctx->pc = 0x356e40u;
    // NOP
    // 0x356e44: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x356e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x356e48: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x356e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x356e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e50: 0x0  nop
    ctx->pc = 0x356e50u;
    // NOP
    // 0x356e54: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x356e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x356e58: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x356e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x356e5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x356e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e60: 0x0  nop
    ctx->pc = 0x356e60u;
    // NOP
    // 0x356e64: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x356e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x356e68: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x356e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x356e6c: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x356e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x356e70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x356e70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e74: 0x0  nop
    ctx->pc = 0x356e74u;
    // NOP
    // 0x356e78: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x356e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x356e7c: 0x3c033f75  lui         $v1, 0x3F75
    ctx->pc = 0x356e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16245 << 16));
    // 0x356e80: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x356e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x356e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e88: 0x0  nop
    ctx->pc = 0x356e88u;
    // NOP
    // 0x356e8c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x356e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x356e90: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x356e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x356e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356e98: 0x0  nop
    ctx->pc = 0x356e98u;
    // NOP
    // 0x356e9c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x356e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x356ea0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ea4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356ea8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x356ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356eac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x356eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x356eb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x356eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356eb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x356eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x356eb8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x356eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x356ebc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ec0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356ec4: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x356ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356ec8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x356ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x356ecc: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x356eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x356ed0: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x356ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x356ed4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x356ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x356ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356edc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356ee0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x356ee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x356ee4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x356ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356ee8: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x356ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x356eec: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x356eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x356ef0: 0x9203011a  lbu         $v1, 0x11A($s0)
    ctx->pc = 0x356ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x356ef4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x356ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x356ef8: 0xa204011a  sb          $a0, 0x11A($s0)
    ctx->pc = 0x356ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x356efc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356f04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x356f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356f08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x356f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x356f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356f10: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x356f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f14: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x356f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x356f18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x356f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x356f20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x356f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x356f24: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x356f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356f28: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x356f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x356f2c: 0x3086ff00  andi        $a2, $a0, 0xFF00
    ctx->pc = 0x356f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x356f30: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x356f34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356f38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x356f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x356f3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x356f3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x356f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f44: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x356f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x356f48: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x356f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x356f4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x356f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356f50: 0x9202011a  lbu         $v0, 0x11A($s0)
    ctx->pc = 0x356f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 282)));
    // 0x356f54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x356f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x356f58: 0xa202011a  sb          $v0, 0x11A($s0)
    ctx->pc = 0x356f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x356f5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x356F5Cu;
    SET_GPR_U32(ctx, 31, 0x356F64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x356F5Cu, 0x356F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F64u;
label_356f64:
    // 0x356f64: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x356f68: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x356f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x356f6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x356f6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x356f70: 0x0  nop
    ctx->pc = 0x356f70u;
    // NOP
    // 0x356f74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356f78: 0x3c033c7d  lui         $v1, 0x3C7D
    ctx->pc = 0x356f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15485 << 16));
    // 0x356f7c: 0x3463f3b6  ori         $v1, $v1, 0xF3B6
    ctx->pc = 0x356f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62390);
    // 0x356f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356f84: 0x0  nop
    ctx->pc = 0x356f84u;
    // NOP
    // 0x356f88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x356f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x356f8c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x356f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x356f90u;
}
