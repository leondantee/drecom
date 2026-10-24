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

// Function: entry_00202d00
// Address: 0x202d00 - 0x202fc0
void entry_00202d00_0x202d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202d00_0x202d00");
#endif

    switch (ctx->pc) {
        case 0x202fbcu: goto label_202fbc;
        default: break;
    }

    ctx->pc = 0x202d00u;

    // 0x202d00: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d04: 0x24c3ff00  addiu       $v1, $a2, -0x100
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967040));
    // 0x202d08: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x202d0c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x202d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202d10: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202d14: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d18: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202d1c: 0x8fb400e4  lw          $s4, 0xE4($sp)
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202d20: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d24: 0x2466ff00  addiu       $a2, $v1, -0x100
    ctx->pc = 0x202d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x202d28: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x202d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x202d2c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x202d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202d30: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x202d30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202d34: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x202d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202d38: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x202d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202d3c: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202d40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202d44: 0xc3b021  addu        $s6, $a2, $v1
    ctx->pc = 0x202d44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202d48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202d4c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202d54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202d58: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202d5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202d60: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x202d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202d64: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x202d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202d68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202d6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202d70: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202d74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202d78: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x202d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x202d7c: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x202d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x202d80: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202d84: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x202d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202d88: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x202d88u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x202d8c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x202d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x202d90: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202d94: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x202d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202d98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202d9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202da0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202da4: 0xe33025  or          $a2, $a3, $v1
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x202da8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202dac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202db0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202db4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x202db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202db8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x202db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x202dbc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dc0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202dc4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202dc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dcc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202dd0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x202dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202dd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dd8: 0xac260ab8  sw          $a2, 0xAB8($at)
    ctx->pc = 0x202dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202ddc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202de0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202de8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dec: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202df0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x202df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x202df4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x202df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202df8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202dfc: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e00: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x202e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x202e04: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x202e08: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202e0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202e10: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202e14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202e18: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x202e1c: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202e20: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x202e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x202e24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202e28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202e2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202e30: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202e34: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202e38: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x202e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x202e3c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x202e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x202e40: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x202e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202e44: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202e48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e4c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e50: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x202e50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x202e54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e58: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202e58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202e5c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202e60: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202e64: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202e68: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x202e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202e6c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x202E6Cu;
    {
        const bool branch_taken_0x202e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e6c) {
            ctx->pc = 0x202FC0u;
            return;
        }
    }
    ctx->pc = 0x202E74u;
    // 0x202e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x202e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x202e78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x202e7c: 0x3c064800  lui         $a2, 0x4800
    ctx->pc = 0x202e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18432 << 16));
    // 0x202e80: 0x34c52a02  ori         $a1, $a2, 0x2A02
    ctx->pc = 0x202e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10754);
    // 0x202e84: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x202e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x202e88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x202e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x202e8c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x202e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x202e90: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x202e94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x202e98: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x202e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202e9c: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x202e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x202ea0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x202ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202ea4: 0x1e20c0  sll         $a0, $fp, 3
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202ea8: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x202ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x202eac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202eb0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x202eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x202eb4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x202eb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x202eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x202ebc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202ec0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x202ec4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x202ec8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x202ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x202ecc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x202eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x202ed0: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x202ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x202ed4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202ed8: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x202edc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202ee0: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202ee4: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202ee8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x202eec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202ef0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202ef4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202ef8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x202efc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f00: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x202f04: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f08: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202f0c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x202f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x202f10: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202f14: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202f18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x202f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202f1c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x202f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x202f20: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f28: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f2c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x202f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x202f30: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202f34: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x202f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x202f3c: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f40: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x202f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202f44: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x202f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202f48: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x202f4c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202f50: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x202f50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x202f54: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202f58: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x202f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x202f5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202f60: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f68: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x202f6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x202f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x202f70: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202f74: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202f78: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x202f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202f7c: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202f80: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x202f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x202f84: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x202f88: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x202f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202f8c: 0x2607002c  addiu       $a3, $s0, 0x2C
    ctx->pc = 0x202f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x202f90: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x202f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x202f94: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f98: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x202f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202f9c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x202f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x202fa0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x202fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x202fa4: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x202fa8: 0x24c31a10  addiu       $v1, $a2, 0x1A10
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6672));
    // 0x202fac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x202facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202fb0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x202fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x202fb4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x202FB4u;
    SET_GPR_U32(ctx, 31, 0x202FBCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x202FB4u, 0x202FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FBCu;
label_202fbc:
    // 0x202fbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x202fbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202fc0u;
}
