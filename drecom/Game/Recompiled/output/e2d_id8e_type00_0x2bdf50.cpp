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

// Function: e2d_id8e_type00
// Address: 0x2bdf50 - 0x2be164
void e2d_id8e_type00_0x2bdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id8e_type00_0x2bdf50");
#endif

    ctx->pc = 0x2bdf50u;

    // 0x2bdf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bdf54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bdf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bdf58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdf5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdf60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdf60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdf64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdf68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdf6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdf70: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdf70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdf74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdf78: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdf7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdf80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdf84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdf88: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdf8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdf90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdf94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdf98: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdf98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdf9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdfa0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdfa4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdfa8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2bdfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bdfac: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdfacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdfb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdfb4: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdfb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdfbc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdfc0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdfc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdfc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdfcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdfd0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdfd4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdfd8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdfdc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdfdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdfe0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdfe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdfe8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdfec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdff0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdff4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdff8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdffc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be000: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be004: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2be004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2be008: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2be008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be00c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2be00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be010: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2be010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2be014: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2be014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2be018: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2be018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be01c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2be01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2be020: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be024: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2be024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be02c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be030: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2be030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be038: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be03c: 0xa064013c  sb          $a0, 0x13C($v1)
    ctx->pc = 0x2be03cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be040: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x2be040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x2be044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be04c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2be04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2be050: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x2be050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x2be054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be058: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be05c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2be05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2be060: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x2be060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x2be064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be068: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be06c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2be06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2be070: 0x3c034128  lui         $v1, 0x4128
    ctx->pc = 0x2be070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16680 << 16));
    // 0x2be074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be078: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be07c: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2be07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2be080: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2be084: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2be084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2be088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be08c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be090: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2be090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2be094: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2be094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2be098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be09c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0a0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2be0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2be0a4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2be0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2be0a8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2be0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2be0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0b4: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2be0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2be0b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2be0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2be0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0c4: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2be0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2be0c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0d0: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2be0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2be0d4: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2be0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2be0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0e0: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2be0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2be0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0ec: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2be0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2be0f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2be0f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be0f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be0fc: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2be0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2be100: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2be100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2be104: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2be104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2be108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be10c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be110: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2be110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2be114: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2be114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2be118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be11c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be120: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2be120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2be124: 0x3c033d8b  lui         $v1, 0x3D8B
    ctx->pc = 0x2be124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15755 << 16));
    // 0x2be128: 0x34634396  ori         $v1, $v1, 0x4396
    ctx->pc = 0x2be128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17302);
    // 0x2be12c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be130: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be134: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2be134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2be138: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x2be13c: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2be13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2be140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be144: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be148: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2be148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2be14c: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2be150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be154: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2be154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2be158: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2be158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be15c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE164u;
}
