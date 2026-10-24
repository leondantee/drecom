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

// Function: entry_00268d7c
// Address: 0x268d7c - 0x268edc
void entry_00268d7c_0x268d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268d7c_0x268d7c");
#endif

    switch (ctx->pc) {
        case 0x268ec0u: goto label_268ec0;
        default: break;
    }

    ctx->pc = 0x268d7cu;

    // 0x268d7c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x268d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x268d80: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x268d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x268d84: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x268d84u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d88: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268d8c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268d90: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x268D90u;
    {
        const bool branch_taken_0x268d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x268d90) {
            ctx->pc = 0x268EDCu;
            return;
        }
    }
    ctx->pc = 0x268D98u;
    // 0x268d98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268da0: 0x0  nop
    ctx->pc = 0x268da0u;
    // NOP
    // 0x268da4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x268da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x268da8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268db0: 0x0  nop
    ctx->pc = 0x268db0u;
    // NOP
    // 0x268db4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x268db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x268db8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268dc0: 0x0  nop
    ctx->pc = 0x268dc0u;
    // NOP
    // 0x268dc4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x268dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x268dc8: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x268dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x268dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268dd0: 0x0  nop
    ctx->pc = 0x268dd0u;
    // NOP
    // 0x268dd4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268dd8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x268dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x268ddc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x268ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x268de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268de4: 0x0  nop
    ctx->pc = 0x268de4u;
    // NOP
    // 0x268de8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x268de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x268dec: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268df0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268df8: 0x0  nop
    ctx->pc = 0x268df8u;
    // NOP
    // 0x268dfc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x268dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x268e00: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268e04: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e0c: 0x0  nop
    ctx->pc = 0x268e0cu;
    // NOP
    // 0x268e10: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x268e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x268e14: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x268e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x268e18: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x268e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x268e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e20: 0x0  nop
    ctx->pc = 0x268e20u;
    // NOP
    // 0x268e24: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x268e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x268e28: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x268e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x268e2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x268e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x268e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e34: 0x0  nop
    ctx->pc = 0x268e34u;
    // NOP
    // 0x268e38: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x268e3c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x268e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e44: 0x0  nop
    ctx->pc = 0x268e44u;
    // NOP
    // 0x268e48: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x268e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x268e4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x268e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e54: 0x0  nop
    ctx->pc = 0x268e54u;
    // NOP
    // 0x268e58: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x268e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x268e5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e64: 0x0  nop
    ctx->pc = 0x268e64u;
    // NOP
    // 0x268e68: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268e6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e74: 0x0  nop
    ctx->pc = 0x268e74u;
    // NOP
    // 0x268e78: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268e7c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268e80: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e88: 0x0  nop
    ctx->pc = 0x268e88u;
    // NOP
    // 0x268e8c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x268e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x268e90: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268e94: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268e9c: 0x0  nop
    ctx->pc = 0x268e9cu;
    // NOP
    // 0x268ea0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x268ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x268ea4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x268ea8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x268ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x268eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268eb0: 0x0  nop
    ctx->pc = 0x268eb0u;
    // NOP
    // 0x268eb4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x268eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x268eb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x268EB8u;
    SET_GPR_U32(ctx, 31, 0x268EC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x268EB8u, 0x268EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EC0u;
label_268ec0:
    // 0x268ec0: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x268ec4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x268ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x268ec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x268ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268ecc: 0x0  nop
    ctx->pc = 0x268eccu;
    // NOP
    // 0x268ed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x268ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268ed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x268ed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x268ed8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x268ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x268edcu;
}
