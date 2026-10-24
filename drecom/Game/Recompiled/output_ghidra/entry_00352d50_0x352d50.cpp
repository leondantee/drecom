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

// Function: entry_00352d50
// Address: 0x352d50 - 0x352ee8
void entry_00352d50_0x352d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352d50_0x352d50");
#endif

    ctx->pc = 0x352d50u;

    // 0x352d50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352d54: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352d58: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x352d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x352d5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d64: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352d68: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352d74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d78: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352d80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352d88: 0x0  nop
    ctx->pc = 0x352d88u;
    // NOP
    // 0x352d8c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352d94: 0x0  nop
    ctx->pc = 0x352d94u;
    // NOP
    // 0x352d98: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352da0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352da4: 0xc4600730  lwc1        $f0, 0x730($v1)
    ctx->pc = 0x352da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352da8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352db0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352db4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352db8: 0xc4600734  lwc1        $f0, 0x734($v1)
    ctx->pc = 0x352db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dbc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dc0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352dc8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352dcc: 0xc4600738  lwc1        $f0, 0x738($v1)
    ctx->pc = 0x352dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dd0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dd4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352dd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ddc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352de0: 0x24702ee0  addiu       $s0, $v1, 0x2EE0
    ctx->pc = 0x352de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
    // 0x352de4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352de8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352df0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352df4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352df8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352dfc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e00: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e04: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352e08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e10: 0x0  nop
    ctx->pc = 0x352e10u;
    // NOP
    // 0x352e14: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e1c: 0x0  nop
    ctx->pc = 0x352e1cu;
    // NOP
    // 0x352e20: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e28: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e2c: 0xc46007b0  lwc1        $f0, 0x7B0($v1)
    ctx->pc = 0x352e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e30: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e34: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352e38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e3c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e40: 0xc46007b4  lwc1        $f0, 0x7B4($v1)
    ctx->pc = 0x352e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e44: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e50: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e54: 0xc46007b8  lwc1        $f0, 0x7B8($v1)
    ctx->pc = 0x352e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e58: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e5c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352e60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e64: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352e68: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x352e6c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e70: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352e78: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e80: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352e84: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e88: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352e90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352e94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e98: 0x0  nop
    ctx->pc = 0x352e98u;
    // NOP
    // 0x352e9c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352ea4: 0x0  nop
    ctx->pc = 0x352ea4u;
    // NOP
    // 0x352ea8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352eac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352eb0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352eb4: 0xc4600830  lwc1        $f0, 0x830($v1)
    ctx->pc = 0x352eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352eb8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ebc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352ec0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ec4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352ec8: 0xc4600834  lwc1        $f0, 0x834($v1)
    ctx->pc = 0x352ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ecc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ed0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ed8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352edc: 0xc4600838  lwc1        $f0, 0x838($v1)
    ctx->pc = 0x352edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ee0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ee4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x352ee8u;
}
