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

// Function: entry_0033cd30
// Address: 0x33cd30 - 0x33cec8
void entry_0033cd30_0x33cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cd30_0x33cd30");
#endif

    ctx->pc = 0x33cd30u;

    // 0x33cd30: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cd34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cd3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cd40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33cd44: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33cd48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cd4c: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x33cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x33cd50: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x33cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x33cd54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33cd58: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x33cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x33cd5c: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x33cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x33cd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd64: 0x0  nop
    ctx->pc = 0x33cd64u;
    // NOP
    // 0x33cd68: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x33cd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x33cd6c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd74: 0x0  nop
    ctx->pc = 0x33cd74u;
    // NOP
    // 0x33cd78: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x33cd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x33cd7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33cd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd84: 0x0  nop
    ctx->pc = 0x33cd84u;
    // NOP
    // 0x33cd88: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x33cd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x33cd8c: 0x3c023e9c  lui         $v0, 0x3E9C
    ctx->pc = 0x33cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16028 << 16));
    // 0x33cd90: 0x34429c9d  ori         $v0, $v0, 0x9C9D
    ctx->pc = 0x33cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40093);
    // 0x33cd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd98: 0x0  nop
    ctx->pc = 0x33cd98u;
    // NOP
    // 0x33cd9c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x33cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x33cda0: 0x3c023d20  lui         $v0, 0x3D20
    ctx->pc = 0x33cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15648 << 16));
    // 0x33cda4: 0x3442a0a1  ori         $v0, $v0, 0xA0A1
    ctx->pc = 0x33cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41121);
    // 0x33cda8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cdac: 0x0  nop
    ctx->pc = 0x33cdacu;
    // NOP
    // 0x33cdb0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x33cdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x33cdb4: 0x3c023d20  lui         $v0, 0x3D20
    ctx->pc = 0x33cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15648 << 16));
    // 0x33cdb8: 0x3442a0a1  ori         $v0, $v0, 0xA0A1
    ctx->pc = 0x33cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41121);
    // 0x33cdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cdc0: 0x0  nop
    ctx->pc = 0x33cdc0u;
    // NOP
    // 0x33cdc4: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x33cdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x33cdc8: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x33cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cdcc: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cdd0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cdd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cdd8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cddc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33cde0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33cde4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cde8: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x33cde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x33cdec: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x33cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cdf0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33cdf4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33cdf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cdfc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce04: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce0c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x33ce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x33ce10: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x33ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce14: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce28: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce30: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x33ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x33ce34: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x33ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce38: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce44: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce4c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce54: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x33ce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x33ce58: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x33ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce5c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce68: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce70: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce78: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x33ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x33ce7c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x33ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ce80: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x33ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x33ce84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33ce88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce8c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33ce90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33ce94: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x33ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x33ce98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce9c: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x33ce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x33cea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33cea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cea4: 0x0  nop
    ctx->pc = 0x33cea4u;
    // NOP
    // 0x33cea8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x33cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x33ceac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x33ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x33ceb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ceb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ceb4: 0x0  nop
    ctx->pc = 0x33ceb4u;
    // NOP
    // 0x33ceb8: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x33ceb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x33cebc: 0x920200b8  lbu         $v0, 0xB8($s0)
    ctx->pc = 0x33cebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x33cec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33cec4: 0xa20200b8  sb          $v0, 0xB8($s0)
    ctx->pc = 0x33cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x33cec8u;
}
