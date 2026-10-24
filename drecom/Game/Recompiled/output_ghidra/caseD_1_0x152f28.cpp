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

// Function: caseD_1
// Address: 0x152f28 - 0x153168
void caseD_1_0x152f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x152f28");
#endif

    ctx->pc = 0x152f28u;

    // 0x152f28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152f2c: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152f30: 0xae0315c0  sw          $v1, 0x15C0($s0)
    ctx->pc = 0x152f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 3));
    // 0x152f34: 0x3c044307  lui         $a0, 0x4307
    ctx->pc = 0x152f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17159 << 16));
    // 0x152f38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152f3c: 0x0  nop
    ctx->pc = 0x152f3cu;
    // NOP
    // 0x152f40: 0xe60015d0  swc1        $f0, 0x15D0($s0)
    ctx->pc = 0x152f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5584), bits); }
    // 0x152f44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152f44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152f48: 0x0  nop
    ctx->pc = 0x152f48u;
    // NOP
    // 0x152f4c: 0xe60115d4  swc1        $f1, 0x15D4($s0)
    ctx->pc = 0x152f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5588), bits); }
    // 0x152f50: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x152f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152f58: 0x0  nop
    ctx->pc = 0x152f58u;
    // NOP
    // 0x152f5c: 0xe60015d8  swc1        $f0, 0x15D8($s0)
    ctx->pc = 0x152f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5592), bits); }
    // 0x152f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x152f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152f68: 0x0  nop
    ctx->pc = 0x152f68u;
    // NOP
    // 0x152f6c: 0xe60015dc  swc1        $f0, 0x15DC($s0)
    ctx->pc = 0x152f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5596), bits); }
    // 0x152f70: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x152f74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x152f74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152f78: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152f7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x152f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x152f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152f84: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x152f88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x152f8c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x152f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x152f90: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x152f94: 0xe4610070  swc1        $f1, 0x70($v1)
    ctx->pc = 0x152f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x152f98: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
    // 0x152f9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152f9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152fa0: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152fa4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x152fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x152fa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152fac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x152facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x152fb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x152fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x152fb4: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x152fb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x152fbc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x152fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x152fc0: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x152fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x152fc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152fc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152fc8: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152fcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x152fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x152fd0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x152fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152fd4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x152fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x152fd8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x152fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x152fdc: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x152fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x152fe0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152fe4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x152fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x152fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x152fec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152ff0: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x152ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x152ff4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x152ff8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152ffc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x153000: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153004: 0x2482bd00  addiu       $v0, $a0, -0x4300
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153008: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15300c: 0xe4610080  swc1        $f1, 0x80($v1)
    ctx->pc = 0x15300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x153010: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x153014: 0x3482e6e7  ori         $v0, $a0, 0xE6E7
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x153018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15301c: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x15301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x153020: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x153024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153028: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15302c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x153030: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x153034: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153038: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x153038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x15303c: 0x3c053f10  lui         $a1, 0x3F10
    ctx->pc = 0x15303cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16144 << 16));
    // 0x153040: 0x34a39091  ori         $v1, $a1, 0x9091
    ctx->pc = 0x153040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37009);
    // 0x153044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x153044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153048: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x153048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15304c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15304cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153050: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153054: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x153054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153058: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15305c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153060: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x153064: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x153064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x153068: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x153068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x15306c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15306cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153070: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153074: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153078: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15307c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15307cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153080: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x153080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x153084: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x153084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15308c: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x15308cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x153090: 0x3c044366  lui         $a0, 0x4366
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17254 << 16));
    // 0x153094: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x153094u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153098: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x15309c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1530a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1530a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1530a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1530a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1530a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1530a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1530ac: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1530acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1530b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1530b4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1530b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1530b8: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x1530b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x1530bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1530bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1530c0: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1530c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1530c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1530c8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1530c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1530cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1530d0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1530d4: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1530d8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1530d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1530dc: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1530dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1530e0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1530e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1530e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1530e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1530e8: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x1530e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1530ec: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1530ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1530f0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1530f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1530f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1530f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1530f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1530f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1530fc: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1530fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x153100: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x153100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153104: 0xe4c10080  swc1        $f1, 0x80($a2)
    ctx->pc = 0x153104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x153108: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x15310c: 0x3485e6e7  ori         $a1, $a0, 0xE6E7
    ctx->pc = 0x15310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)59111);
    // 0x153110: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153110u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153114: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x153114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153118: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x153118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15311c: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x153120: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153124: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x153124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x153128: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x15312c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x153130: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x153130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x153134: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x153134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
    // 0x153138: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x153138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x15313c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15313cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153140: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x153140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x153144: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x153148: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x153148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15314c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x15314cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x153150: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x153150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x153154: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x153154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x153158: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15315c: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x15315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x153160: 0x100004c1  b           . + 4 + (0x4C1 << 2)
    ctx->pc = 0x153160u;
    {
        const bool branch_taken_0x153160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153160) {
            ctx->pc = 0x154468u;
            return;
        }
    }
    ctx->pc = 0x153168u;
}
