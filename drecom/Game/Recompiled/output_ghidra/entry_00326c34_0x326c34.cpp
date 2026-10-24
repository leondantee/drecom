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

// Function: entry_00326c34
// Address: 0x326c34 - 0x326db8
void entry_00326c34_0x326c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326c34_0x326c34");
#endif

    ctx->pc = 0x326c34u;

    // 0x326c34: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326c38: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326c3c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326c44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326c48: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c54: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326c58: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c68: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326c6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326c74: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c80: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326c84: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326c88: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326c8c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326c94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326c98: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326c9c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ca8: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326cac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326cb0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326cb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326cb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326cc0: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326cc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ccc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326cd0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326cd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326cdc: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ce0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x326ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326ce4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326cec: 0x0  nop
    ctx->pc = 0x326cecu;
    // NOP
    // 0x326cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x326cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x326cf4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x326cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x326cf8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326cfc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326d00: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326d08: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326d0c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d10: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d1c: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326d20: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d24: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d28: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d34: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326d38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326d40: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d50: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326d54: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326d58: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326d5c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326d64: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326d68: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326d6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d78: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326d7c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d80: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326d84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d90: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326d94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326d98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326d9c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326da0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326da4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326dac: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326db0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x326db4: 0x0  nop
    ctx->pc = 0x326db4u;
    // NOP
    ctx->pc = 0x326db8u;
}
