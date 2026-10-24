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

// Function: entry_002e8db8
// Address: 0x2e8db8 - 0x2e8ff8
void entry_002e8db8_0x2e8db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8db8_0x2e8db8");
#endif

    switch (ctx->pc) {
        case 0x2e8e20u: goto label_2e8e20;
        case 0x2e8e44u: goto label_2e8e44;
        case 0x2e8e68u: goto label_2e8e68;
        case 0x2e8e8cu: goto label_2e8e8c;
        case 0x2e8eb4u: goto label_2e8eb4;
        case 0x2e8ee0u: goto label_2e8ee0;
        case 0x2e8f7cu: goto label_2e8f7c;
        case 0x2e8fc0u: goto label_2e8fc0;
        case 0x2e8fe0u: goto label_2e8fe0;
        default: break;
    }

    ctx->pc = 0x2e8db8u;

    // 0x2e8db8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2e8dbc: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x2e8dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2e8dc0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2e8dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8dc4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8dc8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8dcc: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2E8DCCu;
    {
        const bool branch_taken_0x2e8dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8dcc) {
            ctx->pc = 0x2E8FF8u;
            return;
        }
    }
    ctx->pc = 0x2E8DD4u;
    // 0x2e8dd4: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2e8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2e8dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8ddc: 0x0  nop
    ctx->pc = 0x2e8ddcu;
    // NOP
    // 0x2e8de0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e8de4: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2e8de8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2e8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2e8dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8df0: 0x0  nop
    ctx->pc = 0x2e8df0u;
    // NOP
    // 0x2e8df4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8df8: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2e8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
    // 0x2e8dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8e00: 0x0  nop
    ctx->pc = 0x2e8e00u;
    // NOP
    // 0x2e8e04: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8e08: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2e8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2e8e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8e10: 0x0  nop
    ctx->pc = 0x2e8e10u;
    // NOP
    // 0x2e8e14: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8e18: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8E18u;
    SET_GPR_U32(ctx, 31, 0x2E8E20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8E18u, 0x2E8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E20u;
label_2e8e20:
    // 0x2e8e20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8e28: 0x0  nop
    ctx->pc = 0x2e8e28u;
    // NOP
    // 0x2e8e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8e30: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8e34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8e38: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e8e3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8E3Cu, 0x2E8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E44u;
label_2e8e44:
    // 0x2e8e44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8e4c: 0x0  nop
    ctx->pc = 0x2e8e4cu;
    // NOP
    // 0x2e8e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8e54: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8e58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8e5c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e8e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e8e60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8E60u;
    SET_GPR_U32(ctx, 31, 0x2E8E68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8E60u, 0x2E8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E68u;
label_2e8e68:
    // 0x2e8e68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8e70: 0x0  nop
    ctx->pc = 0x2e8e70u;
    // NOP
    // 0x2e8e74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8e78: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8e80: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e8e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e8e84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8E84u;
    SET_GPR_U32(ctx, 31, 0x2E8E8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8E84u, 0x2E8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8E8Cu;
label_2e8e8c:
    // 0x2e8e8c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e8e90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8e94: 0x0  nop
    ctx->pc = 0x2e8e94u;
    // NOP
    // 0x2e8e98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8e9c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8ea4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e8ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e8ea8: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2e8ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8eac: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E8EACu;
    SET_GPR_U32(ctx, 31, 0x2E8EB4u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E8EACu, 0x2E8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EB4u;
label_2e8eb4:
    // 0x2e8eb4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e8eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8ebc: 0x0  nop
    ctx->pc = 0x2e8ebcu;
    // NOP
    // 0x2e8ec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8ec4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e8ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e8ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8ecc: 0x0  nop
    ctx->pc = 0x2e8eccu;
    // NOP
    // 0x2e8ed0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e8ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e8ed4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2e8ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8ed8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E8ED8u;
    SET_GPR_U32(ctx, 31, 0x2E8EE0u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E8ED8u, 0x2E8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EE0u;
label_2e8ee0:
    // 0x2e8ee0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e8ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8ee8: 0x0  nop
    ctx->pc = 0x2e8ee8u;
    // NOP
    // 0x2e8eec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8ef0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e8ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e8ef4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2e8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2e8ef8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2e8ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2e8efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f00: 0x0  nop
    ctx->pc = 0x2e8f00u;
    // NOP
    // 0x2e8f04: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e8f08: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e8f0c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e8f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e8f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f14: 0x0  nop
    ctx->pc = 0x2e8f14u;
    // NOP
    // 0x2e8f18: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2e8f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2e8f1c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2e8f20: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2e8f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2e8f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f28: 0x0  nop
    ctx->pc = 0x2e8f28u;
    // NOP
    // 0x2e8f2c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e8f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e8f30: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x2e8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x2e8f34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f3c: 0x0  nop
    ctx->pc = 0x2e8f3cu;
    // NOP
    // 0x2e8f40: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2e8f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2e8f44: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f4c: 0x0  nop
    ctx->pc = 0x2e8f4cu;
    // NOP
    // 0x2e8f50: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e8f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e8f54: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2e8f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f5c: 0x0  nop
    ctx->pc = 0x2e8f5cu;
    // NOP
    // 0x2e8f60: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e8f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e8f64: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e8f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f6c: 0x0  nop
    ctx->pc = 0x2e8f6cu;
    // NOP
    // 0x2e8f70: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e8f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e8f74: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8F74u;
    SET_GPR_U32(ctx, 31, 0x2E8F7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8F74u, 0x2E8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F7Cu;
label_2e8f7c:
    // 0x2e8f7c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e8f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8f84: 0x0  nop
    ctx->pc = 0x2e8f84u;
    // NOP
    // 0x2e8f88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e8f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8f8c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e8f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8f94: 0x0  nop
    ctx->pc = 0x2e8f94u;
    // NOP
    // 0x2e8f98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2e8f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e8f9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e8fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8fa4: 0x0  nop
    ctx->pc = 0x2e8fa4u;
    // NOP
    // 0x2e8fa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e8fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e8fac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e8facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e8fb0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2e8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2e8fb4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2e8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2e8fb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8FB8u;
    SET_GPR_U32(ctx, 31, 0x2E8FC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8FB8u, 0x2E8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FC0u;
label_2e8fc0:
    // 0x2e8fc0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8fc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e8fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e8fc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8fcc: 0x0  nop
    ctx->pc = 0x2e8fccu;
    // NOP
    // 0x2e8fd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8fd4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e8fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e8fd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E8FD8u;
    SET_GPR_U32(ctx, 31, 0x2E8FE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E8FD8u, 0x2E8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FE0u;
label_2e8fe0:
    // 0x2e8fe0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e8fe4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e8fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e8fe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e8fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8fec: 0x0  nop
    ctx->pc = 0x2e8fecu;
    // NOP
    // 0x2e8ff0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e8ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e8ff4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e8ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2e8ff8u;
}
