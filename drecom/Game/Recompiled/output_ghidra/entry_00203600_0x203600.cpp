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

// Function: entry_00203600
// Address: 0x203600 - 0x2037b8
void entry_00203600_0x203600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203600_0x203600");
#endif

    ctx->pc = 0x203600u;

    // 0x203600: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203604: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203608: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20360c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20360cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203610: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203614: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x203618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20361c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20361cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x203620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203624: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x203624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203628: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x203628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20362c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x203630: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203634: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203638: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20363c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20363cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203640: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203644: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203648: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20364c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x20364cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203650: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x203650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x203654: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203658: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203658u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20365c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20365cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203660: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203664: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203668: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20366c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203670: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203674: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x203674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203678: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20367c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20367cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203680: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x203680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x203684: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x203684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203688: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x203688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20368c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20368cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203690: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203694: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203698: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x203698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x20369c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x20369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2036a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2036a4: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x2036a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2036a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2036ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2036b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2036b4: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2036b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2036b8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2036b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2036bc: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x2036c0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2036c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2036c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2036c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2036c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2036cc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2036ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2036d0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2036d4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2036d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2036dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2036e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2036e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2036e4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2036e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2036e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2036e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2036ec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2036f0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2036f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2036f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2036f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2036f8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2036f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2036fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2036fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203700: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203704: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203708: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x203708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20370c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203710: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203714: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x203714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x203718: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x203718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20371c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203720: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203724: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x203724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x203728: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x203728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x20372c: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x203730: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x203730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203734: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x203734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203738: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x203738u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20373c: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x20373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x203740: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x203740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x203744: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x203744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x203748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20374c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20374cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x203750: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x203750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x203754: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203758: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x203758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20375c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x203760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x203764: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x203764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x203768: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20376c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203770: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203774: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203778: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20377c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20377cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203780: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203784: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203788: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203788u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x20378c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203790: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x203790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x203794: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x203794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203798: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x203798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x20379c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x20379cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2037a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2037a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2037a4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2037a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2037a8: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x2037a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x2037ac: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2037acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2037b0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2037B0u;
    {
        const bool branch_taken_0x2037b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2037b0) {
            ctx->pc = 0x203AD0u;
            return;
        }
    }
    ctx->pc = 0x2037B8u;
}
