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

// Function: entry_00154d14
// Address: 0x154d14 - 0x155044
void entry_00154d14_0x154d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154d14_0x154d14");
#endif

    switch (ctx->pc) {
        case 0x154f98u: goto label_154f98;
        case 0x154facu: goto label_154fac;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fe8u: goto label_154fe8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155020u: goto label_155020;
        default: break;
    }

    ctx->pc = 0x154d14u;

    // 0x154d14: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154d18: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154d1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154d20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154d24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154d28: 0x2466bd00  addiu       $a2, $v1, -0x4300
    ctx->pc = 0x154d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154d2c: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x154d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x154d30: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154d34: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154d38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154d3c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x154d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154d40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154d44: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x154d48: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154d4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154d54: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154d58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154d5c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x154d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154d64: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154d68: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154d70: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x154d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154d74: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x154d74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x154d78: 0xe44c0074  swc1        $f12, 0x74($v0)
    ctx->pc = 0x154d78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x154d7c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154d80: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x154d84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x154d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154d88: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154d8c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154d90: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154d94: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154d98: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154d9c: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x154d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154da0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x154da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154da4: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x154da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154da8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x154da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x154dac: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x154dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x154db0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154db4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154db8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x154db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154dbc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154dc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x154dc4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x154dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x154dc8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154dcc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x154dd0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x154dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154dd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154dd8: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154ddc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154de0: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x154de4: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154de8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154dec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x154decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154df0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154df4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x154df8: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x154dfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154e00: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x154e04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154e0c: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154e14: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x154e18: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154e1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154e20: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154e24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154e28: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154e2c: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154e30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e34: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x154e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x154e38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154e40: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x154e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154e48: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x154e4c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154e50: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154e54: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154e58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154e5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154e60: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154e64: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e68: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154e6c: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x154e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154e74: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x154e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154e78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154e7c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x154e80: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154e84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e8c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154e90: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154e94: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154e98: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154e9c: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x154ea0: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x154ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x154ea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154ea8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x154ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154eac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154eb0: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x154eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x154eb4: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154eb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154ebc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154ec0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154ec4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154ec8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154ecc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154ed0: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x154ed4: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x154ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x154ed8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154edc: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x154edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154ee0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154ee4: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x154ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x154ee8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154eec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154ef0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154ef4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x154ef8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154efc: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154f00: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x154f04: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x154f08: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x154f0c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154f0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154f10: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154f14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154f18: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x154f1c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154f20: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x154f24: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154f28: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154f2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154f30: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154f34: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154f38: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x154f3c: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x154f40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154f40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154f44: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154f48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154f4c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x154f50: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154f54: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x154f58: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154f5c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154f60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154f64: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154f68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154f6c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x154f70: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x154f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x154f74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154f78: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x154f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154f80: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x154f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x154f84: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154f88: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
    // 0x154f8c: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x154f90: 0xc05db20  jal         func_176C80
    ctx->pc = 0x154F90u;
    SET_GPR_U32(ctx, 31, 0x154F98u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x154F90u, 0x154F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154f9c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154fa0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154fa4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x154FA4u;
    SET_GPR_U32(ctx, 31, 0x154FACu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154FA4u, 0x154FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FACu;
label_154fac:
    // 0x154fac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154facu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154fb0: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154fb4: 0x3c0545fa  lui         $a1, 0x45FA
    ctx->pc = 0x154fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17914 << 16));
    // 0x154fb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154fb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154fbc: 0x0  nop
    ctx->pc = 0x154fbcu;
    // NOP
    // 0x154fc0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x154fc4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154fc8: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x154FC8u;
    SET_GPR_U32(ctx, 31, 0x154FD0u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154FC8u, 0x154FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FD0u;
label_154fd0:
    // 0x154fd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154fd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154fd4: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x154fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x154fd8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154fdc: 0x24c500f0  addiu       $a1, $a2, 0xF0
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x154fe0: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x154FE0u;
    SET_GPR_U32(ctx, 31, 0x154FE8u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x154FE0u, 0x154FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FE8u;
label_154fe8:
    // 0x154fe8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154fe8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154fec: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154ff0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154ff4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x154FF4u;
    SET_GPR_U32(ctx, 31, 0x154FFCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154FF4u, 0x154FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FFCu;
label_154ffc:
    // 0x154ffc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x154ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x155000: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x155000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155004: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x155008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15500c: 0x0  nop
    ctx->pc = 0x15500cu;
    // NOP
    // 0x155010: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x155010u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x155014: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x155014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x155018: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x155018u;
    SET_GPR_U32(ctx, 31, 0x155020u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x155018u, 0x155020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155020u;
label_155020:
    // 0x155020: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x155020u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x155024: 0x860315bc  lh          $v1, 0x15BC($s0)
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
    // 0x155028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155028u;
    {
        const bool branch_taken_0x155028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155028) {
            ctx->pc = 0x155044u;
            return;
        }
    }
    ctx->pc = 0x155030u;
    // 0x155030: 0x860515bc  lh          $a1, 0x15BC($s0)
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
    // 0x155034: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x155034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x155038: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x155038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
    // 0x15503c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15503Cu;
    {
        const bool branch_taken_0x15503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15503c) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x155044u;
}
