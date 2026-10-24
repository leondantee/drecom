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

// Function: entry_00196c38
// Address: 0x196c38 - 0x196e2c
void entry_00196c38_0x196c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c38_0x196c38");
#endif

    switch (ctx->pc) {
        case 0x196da8u: goto label_196da8;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dd0u: goto label_196dd0;
        case 0x196de0u: goto label_196de0;
        case 0x196df0u: goto label_196df0;
        case 0x196e00u: goto label_196e00;
        case 0x196e14u: goto label_196e14;
        case 0x196e24u: goto label_196e24;
        default: break;
    }

    ctx->pc = 0x196c38u;

    // 0x196c38: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c3c: 0x24a21348  addiu       $v0, $a1, 0x1348
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4936));
    // 0x196c40: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196c44: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196c48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196c4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196c54: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c58: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196c5c: 0x8ce30830  lw          $v1, 0x830($a3)
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x196c60: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x196c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x196c64: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c68: 0x24e31348  addiu       $v1, $a3, 0x1348
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4936));
    // 0x196c6c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196c70: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196c74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196c74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196c78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x196c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196c80: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c84: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196c88: 0x8ce208c0  lw          $v0, 0x8C0($a3)
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2240)));
    // 0x196c8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c94: 0x24851348  addiu       $a1, $a0, 0x1348
    ctx->pc = 0x196c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x196c98: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x196c9c: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x196c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x196ca0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x196ca0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196ca4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x196ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196ca8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196cac: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cb0: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196cb4: 0x8ce20950  lw          $v0, 0x950($a3)
    ctx->pc = 0x196cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2384)));
    // 0x196cb8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196cbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cc0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196cc4: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196cc8: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196ccc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196cccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196cd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196cd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196cd8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cdc: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196ce0: 0x8ce20a70  lw          $v0, 0xA70($a3)
    ctx->pc = 0x196ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2672)));
    // 0x196ce4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196ce8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196cec: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196cf0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196cf4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196cf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196cf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196cfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d04: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d08: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d0c: 0x8ce20b00  lw          $v0, 0xB00($a3)
    ctx->pc = 0x196d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2816)));
    // 0x196d10: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d18: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196d1c: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196d20: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x196d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196d24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196d24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d30: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d34: 0x8ce70058  lw          $a3, 0x58($a3)
    ctx->pc = 0x196d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x196d38: 0x8ce20b90  lw          $v0, 0xB90($a3)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2960)));
    // 0x196d3c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d44: 0x24441348  addiu       $a0, $v0, 0x1348
    ctx->pc = 0x196d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x196d48: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196d4c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x196d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196d50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x196d50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x196d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d5c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d60: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d64: 0x8ce20c20  lw          $v0, 0xC20($a3)
    ctx->pc = 0x196d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3104)));
    // 0x196d68: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d70: 0x24821348  addiu       $v0, $a0, 0x1348
    ctx->pc = 0x196d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x196d74: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x196d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x196d78: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x196d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x196d7c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x196d7cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x196d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196d88: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d8c: 0x8cc70058  lw          $a3, 0x58($a2)
    ctx->pc = 0x196d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x196d90: 0x8ce20f80  lw          $v0, 0xF80($a3)
    ctx->pc = 0x196d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3968)));
    // 0x196d94: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x196d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x196d98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196d9c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196da0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DA0u;
    SET_GPR_U32(ctx, 31, 0x196DA8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DA0u, 0x196DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DA8u;
label_196da8:
    // 0x196da8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x196dacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196db0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x196db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196db4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196db8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DB8u;
    SET_GPR_U32(ctx, 31, 0x196DC0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DB8u, 0x196DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DC0u;
label_196dc0:
    // 0x196dc0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196dc8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DC8u;
    SET_GPR_U32(ctx, 31, 0x196DD0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DC8u, 0x196DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DD0u;
label_196dd0:
    // 0x196dd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196dd4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196dd8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DD8u;
    SET_GPR_U32(ctx, 31, 0x196DE0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DD8u, 0x196DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DE0u;
label_196de0:
    // 0x196de0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196de4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196de8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DE8u;
    SET_GPR_U32(ctx, 31, 0x196DF0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DE8u, 0x196DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DF0u;
label_196df0:
    // 0x196df0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196df4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196df8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196DF8u;
    SET_GPR_U32(ctx, 31, 0x196E00u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196DF8u, 0x196E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E00u;
label_196e00:
    // 0x196e00: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e04: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196e08: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196e0c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196E0Cu;
    SET_GPR_U32(ctx, 31, 0x196E14u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196E0Cu, 0x196E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E14u;
label_196e14:
    // 0x196e14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e18: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x196e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196e1c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x196E1Cu;
    SET_GPR_U32(ctx, 31, 0x196E24u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x196E1Cu, 0x196E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E24u;
label_196e24:
    // 0x196e24: 0x10000314  b           . + 4 + (0x314 << 2)
    ctx->pc = 0x196E24u;
    {
        const bool branch_taken_0x196e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e24) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x196E2Cu;
}
