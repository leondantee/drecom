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

// Function: entry_00202b28
// Address: 0x202b28 - 0x202d00
void entry_00202b28_0x202b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202b28_0x202b28");
#endif

    ctx->pc = 0x202b28u;

    // 0x202b28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b2c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202b34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b38: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202b3c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202b44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x202b48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b4c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202b4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202b50: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x202b54: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x202b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x202b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b5c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202b5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202b60: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x202b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x202b64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202b68: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202b6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b70: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b74: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202b74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202b78: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x202b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x202b7c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b80: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b84: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202b88: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b8c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202b94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b98: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202b9c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x202b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202ba0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ba4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ba8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202bac: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x202bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202bb0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x202bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202bb8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202bbc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202bc0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202bc4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x202bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x202bc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x202bcc: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202bd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202bd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202bd8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202bd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202bdc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x202bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202be0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x202be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202be4: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x202be8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x202be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202bec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x202bf0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202bf0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202bf4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x202bf8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202bfc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202c00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202c08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c0c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202c10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c14: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c18: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202c18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202c1c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c20: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202c28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c2c: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202c30: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x202c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202c34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c38: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x202c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x202c40: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x202c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202c44: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c48: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c4c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x202c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x202c50: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x202c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x202c54: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x202c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x202c58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202c5c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c60: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x202c60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x202c64: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x202c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x202c68: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x202c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x202c6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x202c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x202c70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x202c74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202c78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202c7c: 0xc33825  or          $a3, $a2, $v1
    ctx->pc = 0x202c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202c80: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x202c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202c84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x202c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x202c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x202c8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202c8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202c90: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x202c94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202c98: 0x8c290ab8  lw          $t1, 0xAB8($at)
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202c9c: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x202c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x202ca0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ca4: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ca8: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202cac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202cb0: 0xac280ab8  sw          $t0, 0xAB8($at)
    ctx->pc = 0x202cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202cb4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x202cb8: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202cbc: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cc0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202cc4: 0x8c664834  lw          $a2, 0x4834($v1)
    ctx->pc = 0x202cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18484)));
    // 0x202cc8: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x202cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202ccc: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x202cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x202cd0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x202cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x202cd4: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x202cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202cd8: 0xe64023  subu        $t0, $a3, $a2
    ctx->pc = 0x202cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cdc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x202cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202ce0: 0x1063823  subu        $a3, $t0, $a2
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x202ce4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x202ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202ce8: 0x8cc64834  lw          $a2, 0x4834($a2)
    ctx->pc = 0x202ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18484)));
    // 0x202cec: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x202cf0: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x202cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x202cf4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x202cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x202cf8: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x202CF8u;
    {
        const bool branch_taken_0x202cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202cf8) {
            ctx->pc = 0x203010u;
            return;
        }
    }
    ctx->pc = 0x202D00u;
}
