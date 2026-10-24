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

// Function: entry_00153ae0
// Address: 0x153ae0 - 0x153cd8
void entry_00153ae0_0x153ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ae0_0x153ae0");
#endif

    ctx->pc = 0x153ae0u;

    // 0x153ae0: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x153ae4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ae8: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153aec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153af0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153af4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153af8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153afc: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153b04: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x153b08: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x153b0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153b0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b10: 0x8e0515b0  lw          $a1, 0x15B0($s0)
    ctx->pc = 0x153b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153b14: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x153b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153b18: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x153b1c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153b20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153b24: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153b28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x153b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153b2c: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x153b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x153b30: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x153b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b38: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x153b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153b3c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x153b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x153b40: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x153b44: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x153b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153b48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153b4c: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x153b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153b50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153b54: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153b58: 0x3c063f48  lui         $a2, 0x3F48
    ctx->pc = 0x153b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16200 << 16));
    // 0x153b5c: 0x34c4c8c9  ori         $a0, $a2, 0xC8C9
    ctx->pc = 0x153b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51401);
    // 0x153b60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153b60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b64: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153b68: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153b6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x153b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153b70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153b74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x153b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153b78: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153b7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153b80: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x153b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x153b84: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
    // 0x153b88: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x153b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x153b8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153b8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b90: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153b94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153b98: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153b9c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153ba0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153ba4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x153ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153ba8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153bac: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x153bb0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153bb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153bb8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x153bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153bbc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153bc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153bc4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153bc8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153bcc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153bd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153bd4: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x153bd8: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x153bdc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153bdcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153be0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153be4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153be8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153bec: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153becu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153bf0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153bf4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153bf8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153bfc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x153bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x153c00: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x153c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x153c04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153c04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c08: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153c0c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x153c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153c10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153c14: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153c18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153c1c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153c20: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153c24: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x153c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x153c28: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x153c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c30: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153c34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153c38: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153c3c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153c40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153c44: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153c48: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x153c4c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x153c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x153c50: 0x3c053f48  lui         $a1, 0x3F48
    ctx->pc = 0x153c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16200 << 16));
    // 0x153c54: 0x34a4c8c9  ori         $a0, $a1, 0xC8C9
    ctx->pc = 0x153c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)51401);
    // 0x153c58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153c58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c5c: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153c60: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153c64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153c68: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153c6c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153c70: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153c74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153c78: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x153c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153c7c: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x153c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x153c80: 0x3485c8c9  ori         $a1, $a0, 0xC8C9
    ctx->pc = 0x153c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x153c84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153c84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c88: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153c8c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153c90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x153c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153c94: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153c98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153c9c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153ca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153ca4: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x153ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x153ca8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x153ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x153cac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153cacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153cb0: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153cb4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x153cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153cb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153cbc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x153cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153cc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153cc4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x153cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153cc8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x153ccc: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x153cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x153cd0: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x153CD0u;
    {
        const bool branch_taken_0x153cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153cd0) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153CD8u;
}
