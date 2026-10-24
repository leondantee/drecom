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

// Function: entry_00281e38
// Address: 0x281e38 - 0x281f98
void entry_00281e38_0x281e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281e38_0x281e38");
#endif

    switch (ctx->pc) {
        case 0x281f7cu: goto label_281f7c;
        default: break;
    }

    ctx->pc = 0x281e38u;

    // 0x281e38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x281e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x281e3c: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x281e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x281e40: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x281e40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281e44: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281e48: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281e4c: 0x12030052  beq         $s0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x281E4Cu;
    {
        const bool branch_taken_0x281e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x281e4c) {
            ctx->pc = 0x281F98u;
            return;
        }
    }
    ctx->pc = 0x281E54u;
    // 0x281e54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e5c: 0x0  nop
    ctx->pc = 0x281e5cu;
    // NOP
    // 0x281e60: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281e64: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e6c: 0x0  nop
    ctx->pc = 0x281e6cu;
    // NOP
    // 0x281e70: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281e74: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e7c: 0x0  nop
    ctx->pc = 0x281e7cu;
    // NOP
    // 0x281e80: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281e84: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x281e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x281e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281e8c: 0x0  nop
    ctx->pc = 0x281e8cu;
    // NOP
    // 0x281e90: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281e94: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x281e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x281e98: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x281e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x281e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ea0: 0x0  nop
    ctx->pc = 0x281ea0u;
    // NOP
    // 0x281ea4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x281ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x281ea8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281eac: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281eb4: 0x0  nop
    ctx->pc = 0x281eb4u;
    // NOP
    // 0x281eb8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x281eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x281ebc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281ec0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ec8: 0x0  nop
    ctx->pc = 0x281ec8u;
    // NOP
    // 0x281ecc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x281eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x281ed0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x281ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x281ed4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x281ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x281ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281edc: 0x0  nop
    ctx->pc = 0x281edcu;
    // NOP
    // 0x281ee0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x281ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x281ee4: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x281ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x281ee8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x281ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x281eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281ef0: 0x0  nop
    ctx->pc = 0x281ef0u;
    // NOP
    // 0x281ef4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281ef8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x281efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f00: 0x0  nop
    ctx->pc = 0x281f00u;
    // NOP
    // 0x281f04: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x281f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x281f08: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x281f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x281f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f10: 0x0  nop
    ctx->pc = 0x281f10u;
    // NOP
    // 0x281f14: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x281f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x281f18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f20: 0x0  nop
    ctx->pc = 0x281f20u;
    // NOP
    // 0x281f24: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281f28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f30: 0x0  nop
    ctx->pc = 0x281f30u;
    // NOP
    // 0x281f34: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281f38: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f3c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f44: 0x0  nop
    ctx->pc = 0x281f44u;
    // NOP
    // 0x281f48: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x281f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x281f4c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f50: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f58: 0x0  nop
    ctx->pc = 0x281f58u;
    // NOP
    // 0x281f5c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x281f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x281f60: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x281f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x281f64: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x281f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x281f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281f6c: 0x0  nop
    ctx->pc = 0x281f6cu;
    // NOP
    // 0x281f70: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x281f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x281f74: 0xc067648  jal         func_19D920
    ctx->pc = 0x281F74u;
    SET_GPR_U32(ctx, 31, 0x281F7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x281F74u, 0x281F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281F7Cu;
label_281f7c:
    // 0x281f7c: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x281f80: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x281f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x281f84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281f88: 0x0  nop
    ctx->pc = 0x281f88u;
    // NOP
    // 0x281f8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x281f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281f90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x281f90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x281f94: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x281f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x281f98u;
}
