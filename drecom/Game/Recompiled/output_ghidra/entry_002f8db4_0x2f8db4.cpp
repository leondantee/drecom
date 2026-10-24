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

// Function: entry_002f8db4
// Address: 0x2f8db4 - 0x2f8f38
void entry_002f8db4_0x2f8db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8db4_0x2f8db4");
#endif

    switch (ctx->pc) {
        case 0x2f8e5cu: goto label_2f8e5c;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8f00u: goto label_2f8f00;
        default: break;
    }

    ctx->pc = 0x2f8db4u;

    // 0x2f8db4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f8db8: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2f8db8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f8dbc: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2f8dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f8dc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f8dc4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f8dc8: 0x1203005b  beq         $s0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F8DC8u;
    {
        const bool branch_taken_0x2f8dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f8dc8) {
            ctx->pc = 0x2F8F38u;
            return;
        }
    }
    ctx->pc = 0x2F8DD0u;
    // 0x2f8dd0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8dd8: 0x0  nop
    ctx->pc = 0x2f8dd8u;
    // NOP
    // 0x2f8ddc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f8ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f8de0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8de8: 0x0  nop
    ctx->pc = 0x2f8de8u;
    // NOP
    // 0x2f8dec: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f8df0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2f8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2f8df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8df8: 0x0  nop
    ctx->pc = 0x2f8df8u;
    // NOP
    // 0x2f8dfc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f8dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f8e00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f8e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e08: 0x0  nop
    ctx->pc = 0x2f8e08u;
    // NOP
    // 0x2f8e0c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f8e10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e18: 0x0  nop
    ctx->pc = 0x2f8e18u;
    // NOP
    // 0x2f8e1c: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2f8e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2f8e20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e28: 0x0  nop
    ctx->pc = 0x2f8e28u;
    // NOP
    // 0x2f8e2c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f8e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f8e30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e38: 0x0  nop
    ctx->pc = 0x2f8e38u;
    // NOP
    // 0x2f8e3c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2f8e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2f8e40: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f8e44: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f8e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f8e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e4c: 0x0  nop
    ctx->pc = 0x2f8e4cu;
    // NOP
    // 0x2f8e50: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f8e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f8e54: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8E54u;
    SET_GPR_U32(ctx, 31, 0x2F8E5Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8E54u, 0x2F8E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E5Cu;
label_2f8e5c:
    // 0x2f8e5c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8e60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8e64: 0x0  nop
    ctx->pc = 0x2f8e64u;
    // NOP
    // 0x2f8e68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8e6c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f8e70: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f8e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8e78: 0x0  nop
    ctx->pc = 0x2f8e78u;
    // NOP
    // 0x2f8e7c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f8e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f8e80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8E80u;
    SET_GPR_U32(ctx, 31, 0x2F8E88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8E80u, 0x2F8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E88u;
label_2f8e88:
    // 0x2f8e88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8e90: 0x0  nop
    ctx->pc = 0x2f8e90u;
    // NOP
    // 0x2f8e94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8e98: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f8e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f8e9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ea4: 0x0  nop
    ctx->pc = 0x2f8ea4u;
    // NOP
    // 0x2f8ea8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x2f8ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2f8eac: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f8eb0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f8eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f8eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8eb8: 0x0  nop
    ctx->pc = 0x2f8eb8u;
    // NOP
    // 0x2f8ebc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f8ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f8ec0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2f8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2f8ec4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2f8ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2f8ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ecc: 0x0  nop
    ctx->pc = 0x2f8eccu;
    // NOP
    // 0x2f8ed0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f8ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f8ed4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f8ed8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f8ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f8edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ee0: 0x0  nop
    ctx->pc = 0x2f8ee0u;
    // NOP
    // 0x2f8ee4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f8ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f8ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8ef0: 0x0  nop
    ctx->pc = 0x2f8ef0u;
    // NOP
    // 0x2f8ef4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2f8ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2f8ef8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8EF8u;
    SET_GPR_U32(ctx, 31, 0x2F8F00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8EF8u, 0x2F8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8F00u;
label_2f8f00:
    // 0x2f8f00: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2f8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2f8f04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8f08: 0x0  nop
    ctx->pc = 0x2f8f08u;
    // NOP
    // 0x2f8f0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8f0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8f10: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2f8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2f8f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8f18: 0x0  nop
    ctx->pc = 0x2f8f18u;
    // NOP
    // 0x2f8f1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f8f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8f20: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f8f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f8f24: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f8f28: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f8f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f8f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8f30: 0x0  nop
    ctx->pc = 0x2f8f30u;
    // NOP
    // 0x2f8f34: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f8f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x2f8f38u;
}
