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

// Function: entry_001d3970
// Address: 0x1d3970 - 0x1d3bec
void entry_001d3970_0x1d3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3970_0x1d3970");
#endif

    ctx->pc = 0x1d3970u;

label_1d3970:
    // 0x1d3970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3974: 0x0  nop
    ctx->pc = 0x1d3974u;
    // NOP
    // 0x1d3978: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d397c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d397cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3980: 0x0  nop
    ctx->pc = 0x1d3980u;
    // NOP
    // 0x1d3984: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d3984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3988: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d398c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d398cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3990: 0x0  nop
    ctx->pc = 0x1d3990u;
    // NOP
    // 0x1d3994: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d3994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d3998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d399c: 0x0  nop
    ctx->pc = 0x1d399cu;
    // NOP
    // 0x1d39a0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1d39a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d39a4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d39a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d39a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d39ac: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d39b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d39b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d39b4: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1d39b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1d39b8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d39bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d39bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d39c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d39c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d39c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d39c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d39c8: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1d39c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1d39cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39d0: 0x0  nop
    ctx->pc = 0x1d39d0u;
    // NOP
    // 0x1d39d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d39d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d39d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
    // 0x1d39e0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d39e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1d39e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d39e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d39e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39ec: 0x0  nop
    ctx->pc = 0x1d39ecu;
    // NOP
    // 0x1d39f0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1d39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1d39f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d39f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d39f8: 0x0  nop
    ctx->pc = 0x1d39f8u;
    // NOP
    // 0x1d39fc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1d39fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1d3a00: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d3a04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3a08: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d3a0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3a10: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1d3a10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1d3a14: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d3a18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d3a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3a1c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1d3a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d3a20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d3a24: 0xfe030058  sd          $v1, 0x58($s0)
    ctx->pc = 0x1d3a24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 3));
    // 0x1d3a28: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d3a2c: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d3a30: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a34: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a34u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a38: 0x0  nop
    ctx->pc = 0x1d3a38u;
    // NOP
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
    // 0x1d3a40: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a40u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a44: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x1d3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1d3a48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a4c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d3a50: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d3a54: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3a58: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a5c: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a5cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a60: 0x0  nop
    ctx->pc = 0x1d3a60u;
    // NOP
    // 0x1d3a64: 0x0  nop
    ctx->pc = 0x1d3a64u;
    // NOP
    // 0x1d3a68: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a6c: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3a70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a74: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d3a78: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d3a7c: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d3a80: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3a84: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3a84u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3a88: 0x0  nop
    ctx->pc = 0x1d3a88u;
    // NOP
    // 0x1d3a8c: 0x0  nop
    ctx->pc = 0x1d3a8cu;
    // NOP
    // 0x1d3a90: 0x1812  mflo        $v1
    ctx->pc = 0x1d3a90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3a94: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d3a98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3a9c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1d3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1d3aa0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3aa4: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3aa8: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3aac: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3aacu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3ab0: 0x0  nop
    ctx->pc = 0x1d3ab0u;
    // NOP
    // 0x1d3ab4: 0x0  nop
    ctx->pc = 0x1d3ab4u;
    // NOP
    // 0x1d3ab8: 0x1812  mflo        $v1
    ctx->pc = 0x1d3ab8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3abc: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1d3ac0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3ac4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1d3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1d3ac8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d3acc: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1d3ad0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3ad4: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3ad4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3ad8: 0x0  nop
    ctx->pc = 0x1d3ad8u;
    // NOP
    // 0x1d3adc: 0x0  nop
    ctx->pc = 0x1d3adcu;
    // NOP
    // 0x1d3ae0: 0x1812  mflo        $v1
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d3ae4: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x1d3ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1d3ae8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3aec: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1d3aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1d3af0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d3af4: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1d3af8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3afc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b00: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b00u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b04: 0x0  nop
    ctx->pc = 0x1d3b04u;
    // NOP
    // 0x1d3b08: 0x0  nop
    ctx->pc = 0x1d3b08u;
    // NOP
    // 0x1d3b0c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b0cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b10: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d3b14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b1c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1d3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1d3b20: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d3b24: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d3b28: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3b2c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b30: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b30u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b34: 0x0  nop
    ctx->pc = 0x1d3b34u;
    // NOP
    // 0x1d3b38: 0x0  nop
    ctx->pc = 0x1d3b38u;
    // NOP
    // 0x1d3b3c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b3cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d3b44: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b4c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1d3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1d3b50: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d3b54: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3b58: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d3b5c: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1d3b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3b60: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1d3b60u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1d3b64: 0x0  nop
    ctx->pc = 0x1d3b64u;
    // NOP
    // 0x1d3b68: 0x0  nop
    ctx->pc = 0x1d3b68u;
    // NOP
    // 0x1d3b6c: 0x2012  mflo        $a0
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3b70: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1d3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d3b74: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3b78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d3b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d3b7c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1d3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1d3b80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b84: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d3b88: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d3b8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3b90: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1d3b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1d3b94: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
    ctx->pc = 0x1D3B94u;
    {
        const bool branch_taken_0x1d3b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3b94) {
            ctx->pc = 0x1D3970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D3B9Cu;
    // 0x1d3b9c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1d3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d3ba0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3ba4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1d3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1d3ba8: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1d3bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3bb0: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1d3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1d3bb4: 0x1460fee5  bnez        $v1, . + 4 + (-0x11B << 2)
    ctx->pc = 0x1D3BB4u;
    {
        const bool branch_taken_0x1d3bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bb4) {
            ctx->pc = 0x1D374Cu;
            return;
        }
    }
    ctx->pc = 0x1D3BBCu;
    // 0x1d3bbc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d3bbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3bc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d3bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3bc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d3bc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3bc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d3bc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d3bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3be0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1d3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d3be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3BECu;
}
