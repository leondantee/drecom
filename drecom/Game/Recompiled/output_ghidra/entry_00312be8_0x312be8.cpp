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

// Function: entry_00312be8
// Address: 0x312be8 - 0x312dcc
void entry_00312be8_0x312be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312be8_0x312be8");
#endif

    switch (ctx->pc) {
        case 0x312ca8u: goto label_312ca8;
        case 0x312cccu: goto label_312ccc;
        case 0x312d00u: goto label_312d00;
        case 0x312d8cu: goto label_312d8c;
        case 0x312dacu: goto label_312dac;
        default: break;
    }

    ctx->pc = 0x312be8u;

    // 0x312be8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312bec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312bf0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312bf4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312bfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312c00: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312c04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312c08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312c0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312c10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312c18: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x312c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312c1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312c20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312c24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312c28: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x312c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312c2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x312c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312c30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x312c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312c34: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x312c34u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x312c38: 0x0  nop
    ctx->pc = 0x312c38u;
    // NOP
    // 0x312c3c: 0x0  nop
    ctx->pc = 0x312c3cu;
    // NOP
    // 0x312c40: 0x1010  mfhi        $v0
    ctx->pc = 0x312c40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x312c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312c48: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x312c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x312c4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c54: 0x0  nop
    ctx->pc = 0x312c54u;
    // NOP
    // 0x312c58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312c5c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c64: 0x0  nop
    ctx->pc = 0x312c64u;
    // NOP
    // 0x312c68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312c6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c74: 0x0  nop
    ctx->pc = 0x312c74u;
    // NOP
    // 0x312c78: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312c7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c84: 0x0  nop
    ctx->pc = 0x312c84u;
    // NOP
    // 0x312c88: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312c8c: 0x3c023f7e  lui         $v0, 0x3F7E
    ctx->pc = 0x312c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
    // 0x312c90: 0x344276c9  ori         $v0, $v0, 0x76C9
    ctx->pc = 0x312c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30409);
    // 0x312c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c98: 0x0  nop
    ctx->pc = 0x312c98u;
    // NOP
    // 0x312c9c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x312c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x312ca0: 0xc067648  jal         func_19D920
    ctx->pc = 0x312CA0u;
    SET_GPR_U32(ctx, 31, 0x312CA8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312CA0u, 0x312CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CA8u;
label_312ca8:
    // 0x312ca8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x312ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x312cac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312cb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x312cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312cb4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x312cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312cb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x312cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x312cbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312cc0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x312cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x312cc4: 0xc067654  jal         func_19D950
    ctx->pc = 0x312CC4u;
    SET_GPR_U32(ctx, 31, 0x312CCCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x312CC4u, 0x312CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CCCu;
label_312ccc:
    // 0x312ccc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x312cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x312cd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312cd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x312cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312cd8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x312cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312cdc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x312cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x312ce0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x312ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312ce4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x312ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x312ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312cec: 0x0  nop
    ctx->pc = 0x312cecu;
    // NOP
    // 0x312cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312cf4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x312cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x312cf8: 0xc067648  jal         func_19D920
    ctx->pc = 0x312CF8u;
    SET_GPR_U32(ctx, 31, 0x312D00u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312CF8u, 0x312D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D00u;
label_312d00:
    // 0x312d00: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x312d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x312d04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312d08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x312d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312d0c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x312d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312d10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x312d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x312d14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312d18: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x312d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x312d1c: 0x3c02be19  lui         $v0, 0xBE19
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48665 << 16));
    // 0x312d20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x312d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x312d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312d28: 0x0  nop
    ctx->pc = 0x312d28u;
    // NOP
    // 0x312d2c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x312d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x312d30: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x312d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x312d34: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x312d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x312d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312d3c: 0x0  nop
    ctx->pc = 0x312d3cu;
    // NOP
    // 0x312d40: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x312d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x312d44: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x312d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x312d48: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x312d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x312d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312d50: 0x0  nop
    ctx->pc = 0x312d50u;
    // NOP
    // 0x312d54: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x312d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x312d58: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x312d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x312d5c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x312d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x312d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312d64: 0x0  nop
    ctx->pc = 0x312d64u;
    // NOP
    // 0x312d68: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x312d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x312d6c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x312d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x312d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312d74: 0x0  nop
    ctx->pc = 0x312d74u;
    // NOP
    // 0x312d78: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312d7c: 0x240201c2  addiu       $v0, $zero, 0x1C2
    ctx->pc = 0x312d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x312d80: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x312d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x312d84: 0xc067648  jal         func_19D920
    ctx->pc = 0x312D84u;
    SET_GPR_U32(ctx, 31, 0x312D8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312D84u, 0x312D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D8Cu;
label_312d8c:
    // 0x312d8c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x312d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x312d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312d94: 0x0  nop
    ctx->pc = 0x312d94u;
    // NOP
    // 0x312d98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x312d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312d9c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x312d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x312da0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x312da0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x312da4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x312DA4u;
    SET_GPR_U32(ctx, 31, 0x312DACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x312DA4u, 0x312DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DACu;
label_312dac:
    // 0x312dac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x312dacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312db0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x312db0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x312db4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x312db4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312dc0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x312dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x312DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312DCCu;
}
