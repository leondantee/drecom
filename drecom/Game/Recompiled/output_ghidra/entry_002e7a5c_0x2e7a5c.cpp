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

// Function: entry_002e7a5c
// Address: 0x2e7a5c - 0x2e7b98
void entry_002e7a5c_0x2e7a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7a5c_0x2e7a5c");
#endif

    ctx->pc = 0x2e7a5cu;

    // 0x2e7a5c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2e7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e7a60: 0xa60200e8  sh          $v0, 0xE8($s0)
    ctx->pc = 0x2e7a60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e7a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a6c: 0x0  nop
    ctx->pc = 0x2e7a6cu;
    // NOP
    // 0x2e7a70: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x2e7a74: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e7a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7a7c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7a80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7a88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7a8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7a90: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7a98: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2e7a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2e7a9c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2e7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2e7aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7aa4: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7aa8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ab0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7ab4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ab8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ac0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2e7ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2e7ac4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e7ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7acc: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7ad0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ad8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7adc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7ae0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7ae8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2e7ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2e7aec: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e7aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e7af0: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e7af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e7af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7af8: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7afc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b0c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b14: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2e7b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2e7b18: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x2e7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x2e7b1c: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x2e7b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x2e7b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7b24: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b30: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b38: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b40: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2e7b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2e7b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7b4c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b68: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x2e7b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x2e7b6c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7b70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7b7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e7b80: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2e7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2e7b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7b88: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2e7b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2e7b8c: 0x920200ea  lbu         $v0, 0xEA($s0)
    ctx->pc = 0x2e7b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x2e7b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e7b94: 0xa20200ea  sb          $v0, 0xEA($s0)
    ctx->pc = 0x2e7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 234), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e7b98u;
}
