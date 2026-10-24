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

// Function: entry_00154a48
// Address: 0x154a48 - 0x154c38
void entry_00154a48_0x154a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154a48_0x154a48");
#endif

    ctx->pc = 0x154a48u;

    // 0x154a48: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x154a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a50: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154a54: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154a58: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154a5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154a60: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x154a64: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x154a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x154a68: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154a6c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x154a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x154a70: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x154a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a78: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154a7c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154a80: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154a84: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x154a88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154a8c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154a90: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154a94: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x154a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x154a98: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x154a9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x154a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154aa0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154aa4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x154aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154aa8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x154aac: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x154aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154ab0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154ab4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154ab8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154abc: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x154abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x154ac0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154ac8: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154acc: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154ad0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x154ad4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154ad8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154adc: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154ae0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154ae4: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x154ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x154ae8: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x154aec: 0x3483e6e7  ori         $v1, $a0, 0xE6E7
    ctx->pc = 0x154aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x154af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154af4: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154af8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154afc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154b00: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154b04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154b08: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154b0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154b10: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x154b14: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
    // 0x154b18: 0x34a39091  ori         $v1, $a1, 0x9091
    ctx->pc = 0x154b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
    // 0x154b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154b20: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154b24: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154b28: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154b2c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154b30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154b34: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154b38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154b3c: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x154b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x154b40: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x154b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154b48: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154b4c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154b50: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154b54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154b58: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154b5c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154b60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154b64: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x154b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x154b68: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x154b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x154b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154b70: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154b74: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154b78: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x154b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x154b7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x154b80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154b84: 0x24a4bd00  addiu       $a0, $a1, -0x4300
    ctx->pc = 0x154b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154b88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154b8c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x154b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x154b90: 0x3c054310  lui         $a1, 0x4310
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17168 << 16));
    // 0x154b94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x154b94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154b98: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154b9c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x154ba0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x154ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154ba4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154ba8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154bac: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154bb0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154bb4: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x154bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x154bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154bc0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154bc4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154bc8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154bcc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154bd0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154bd4: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154bd8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154bdc: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x154bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x154be0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x154be4: 0x3463e6e7  ori         $v1, $v1, 0xE6E7
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59111);
    // 0x154be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154bec: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154bf0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154bf4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154bf8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154bfc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154c00: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154c04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154c08: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x154c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x154c0c: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x154c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
    // 0x154c10: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x154c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
    // 0x154c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154c18: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154c1c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154c20: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154c24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154c28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154c2c: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154c30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154c34: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x154c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    ctx->pc = 0x154c38u;
}
