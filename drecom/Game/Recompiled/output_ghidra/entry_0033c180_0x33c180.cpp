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

// Function: entry_0033c180
// Address: 0x33c180 - 0x33c26c
void entry_0033c180_0x33c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c180_0x33c180");
#endif

    ctx->pc = 0x33c180u;

    // 0x33c180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c184: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c188: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x33c18c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c190: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c194: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x33c198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c19c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c1a0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x33c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x33c1a4: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x33c1a8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x33c1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x33c1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c1b0: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c1b4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x33c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x33c1b8: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x33c1bc: 0x34715000  ori         $s1, $v1, 0x5000
    ctx->pc = 0x33c1bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x33c1c0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x33c1c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c1c4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c1c8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x33c1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x33c1cc: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x33c1d0: 0x34645000  ori         $a0, $v1, 0x5000
    ctx->pc = 0x33c1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x33c1d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33c1d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c1d8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c1dc: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x33c1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x33c1e0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x33c1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33c1e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33c1e8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x33c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33c1ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33c1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x33c1f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33c1f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c1f8: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c1fc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x33c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x33c200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c204: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c208: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x33c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x33c20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c210: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c214: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x33c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x33c218: 0x3c04c7c3  lui         $a0, 0xC7C3
    ctx->pc = 0x33c218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51139 << 16));
    // 0x33c21c: 0x34945000  ori         $s4, $a0, 0x5000
    ctx->pc = 0x33c21cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x33c220: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x33c220u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c224: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c228: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x33c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x33c22c: 0x3c04c7c3  lui         $a0, 0xC7C3
    ctx->pc = 0x33c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51139 << 16));
    // 0x33c230: 0x34835000  ori         $v1, $a0, 0x5000
    ctx->pc = 0x33c230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x33c234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c238: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c23c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x33c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x33c240: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x33c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x33c244: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x33c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x33c248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33c248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c24c: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c250: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x33c250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x33c254: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x33c254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33c258: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x33c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33c25c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x33c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33c260: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33c260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x33c264: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33c264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33c268: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33c268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x33c26cu;
}
