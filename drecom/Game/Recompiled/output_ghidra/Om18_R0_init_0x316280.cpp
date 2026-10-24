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

// Function: Om18_R0_init
// Address: 0x316280 - 0x31661c
void Om18_R0_init_0x316280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R0_init_0x316280");
#endif

    switch (ctx->pc) {
        case 0x31636cu: goto label_31636c;
        case 0x3163c0u: goto label_3163c0;
        case 0x3164dcu: goto label_3164dc;
        case 0x316508u: goto label_316508;
        default: break;
    }

    ctx->pc = 0x316280u;

    // 0x316280: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x316284: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x316284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x316288: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31628c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316290: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x316294: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31629c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31629cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3162a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3162a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3162a4: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x3162a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x3162a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3162a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3162ac: 0x245510b0  addiu       $s5, $v0, 0x10B0
    ctx->pc = 0x3162acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x3162b0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3162b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3162b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3162b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3162b8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162bc: 0xe420ae80  swc1        $f0, -0x5180($at)
    ctx->pc = 0x3162bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AE80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AE80u, _value); } while (0); }
    // 0x3162c0: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x3162c4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162c8: 0xa422ae84  sh          $v0, -0x517C($at)
    ctx->pc = 0x3162c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AE84u, _value); } while (0);
    // 0x3162cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3162ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3162d0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162d4: 0xa022ae86  sb          $v0, -0x517A($at)
    ctx->pc = 0x3162d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE86u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE86u, _value); } while (0);
    // 0x3162d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3162d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3162dc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162e0: 0xa022ae87  sb          $v0, -0x5179($at)
    ctx->pc = 0x3162e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE87u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE87u, _value); } while (0);
    // 0x3162e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3162e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3162e8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162ec: 0xa022ae88  sb          $v0, -0x5178($at)
    ctx->pc = 0x3162ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE88u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE88u, _value); } while (0);
    // 0x3162f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3162f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3162f4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3162f8: 0xa022ae89  sb          $v0, -0x5177($at)
    ctx->pc = 0x3162f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE89u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE89u, _value); } while (0);
    // 0x3162fc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3162fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316300: 0xa420ae8a  sh          $zero, -0x5176($at)
    ctx->pc = 0x316300u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AE8Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AE8Au, _value); } while (0);
    // 0x316304: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x316304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x316308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31630c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31630cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316310: 0xe420ae90  swc1        $f0, -0x5170($at)
    ctx->pc = 0x316310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85AE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AE90u, _value); } while (0); }
    // 0x316314: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x316314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x316318: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x316318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31631c: 0xa422ae94  sh          $v0, -0x516C($at)
    ctx->pc = 0x31631cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE94u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AE94u, _value); } while (0);
    // 0x316320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316324: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x316324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316328: 0xa022ae96  sb          $v0, -0x516A($at)
    ctx->pc = 0x316328u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE96u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE96u, _value); } while (0);
    // 0x31632c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316330: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x316330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316334: 0xa022ae97  sb          $v0, -0x5169($at)
    ctx->pc = 0x316334u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE97u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE97u, _value); } while (0);
    // 0x316338: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x316338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31633c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316340: 0xa022ae98  sb          $v0, -0x5168($at)
    ctx->pc = 0x316340u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE98u, _value); } while (0);
    // 0x316344: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x316344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x316348: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x316348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31634c: 0xa022ae99  sb          $v0, -0x5167($at)
    ctx->pc = 0x31634cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE99u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE99u, _value); } while (0);
    // 0x316350: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x316350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x316354: 0xa420ae9a  sh          $zero, -0x5166($at)
    ctx->pc = 0x316354u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AE9Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AE9Au, _value); } while (0);
    // 0x316358: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x316358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31635c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31635cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316360: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x316360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x316364: 0xc046314  jal         func_118C50
    ctx->pc = 0x316364u;
    SET_GPR_U32(ctx, 31, 0x31636Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x31636Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31636Cu) { return; }
    ctx->pc = 0x31636Cu;
label_31636c:
    // 0x31636c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x316370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316374: 0x0  nop
    ctx->pc = 0x316374u;
    // NOP
    // 0x316378: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x316378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x31637c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x316380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316384: 0x0  nop
    ctx->pc = 0x316384u;
    // NOP
    // 0x316388: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x316388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x31638c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31638cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316390: 0x0  nop
    ctx->pc = 0x316390u;
    // NOP
    // 0x316394: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x316394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x316398: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x316398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x31639c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x31639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3163a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3163a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3163a4: 0x0  nop
    ctx->pc = 0x3163a4u;
    // NOP
    // 0x3163a8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3163a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3163ac: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3163acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3163b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3163b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3163b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3163b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3163b8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x3163B8u;
    SET_GPR_U32(ctx, 31, 0x3163C0u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x3163B8u, 0x3163C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163C0u;
label_3163c0:
    // 0x3163c0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3163c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3163c4: 0xac6212ac  sw          $v0, 0x12AC($v1)
    ctx->pc = 0x3163c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
    // 0x3163c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3163c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3163cc: 0xac6012b0  sw          $zero, 0x12B0($v1)
    ctx->pc = 0x3163ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4784), GPR_U32(ctx, 0));
    // 0x3163d0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3163d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3163d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3163d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3163d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3163d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3163dc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3163dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3163e0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3163e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3163e4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3163e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3163e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3163e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3163ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3163ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3163f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3163f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3163f4: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x3163f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x3163f8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x3163f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x3163fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3163fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316400: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316404: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x316404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x316408: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x31640c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x31640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316414: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316418: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x316418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x31641c: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x31641cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316420: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316428: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31642c: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x316430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316434: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316438: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x316438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31643c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316440: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316444: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x316444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x316448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31644c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31644cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316450: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x316450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x316454: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316458: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x316458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31645c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316460: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x316460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x316464: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x316464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316468: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x316468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x31646c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316470: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x316470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x316474: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x316474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x316478: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x316478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x31647c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316480: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x316480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x316484: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x316484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316488: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x316488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x31648c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x316490: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x316490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x316494: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x316494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x316498: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31649c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x31649cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3164a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3164a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3164a4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3164a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3164a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3164a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3164ac: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3164ACu;
    {
        const bool branch_taken_0x3164ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3164ac) {
            ctx->pc = 0x3165C4u;
            goto label_3165c4;
        }
    }
    ctx->pc = 0x3164B4u;
    // 0x3164b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3164B4u;
    {
        const bool branch_taken_0x3164b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164b4) {
            ctx->pc = 0x3164C4u;
            goto label_3164c4;
        }
    }
    ctx->pc = 0x3164BCu;
    // 0x3164bc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3164BCu;
    {
        const bool branch_taken_0x3164bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164bc) {
            ctx->pc = 0x3165F0u;
            goto label_3165f0;
        }
    }
    ctx->pc = 0x3164C4u;
label_3164c4:
    // 0x3164c4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3164c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3164c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3164c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3164cc: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x3164ccu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3164d0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3164d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3164d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3164D4u;
    {
        const bool branch_taken_0x3164d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3164d4) {
            ctx->pc = 0x316548u;
            goto label_316548;
        }
    }
    ctx->pc = 0x3164DCu;
label_3164dc:
    // 0x3164dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3164dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3164e0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3164e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3164e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3164e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3164e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3164e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3164ec: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x3164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3164f0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3164f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3164f4: 0x8e740034  lw          $s4, 0x34($s3)
    ctx->pc = 0x3164f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3164f8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3164f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3164fc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3164fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x316500: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x316500u;
    SET_GPR_U32(ctx, 31, 0x316508u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x316500u, 0x316508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316508u;
label_316508:
    // 0x316508: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x316508u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31650c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x31650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x316510: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316514: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x316514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x316518: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x316518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x31651c: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x31651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316520: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x316524: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x316528: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x316528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x31652c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x31652cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x316530: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x316530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x316534: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x316534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x316538: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x316538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31653c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316540: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x316540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x316544: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x316544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_316548:
    // 0x316548: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x316548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31654c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31654Cu;
    {
        const bool branch_taken_0x31654c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31654c) {
            ctx->pc = 0x3164DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3164dc;
        }
    }
    ctx->pc = 0x316554u;
    // 0x316554: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x316554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x316558: 0x24649b90  addiu       $a0, $v1, -0x6470
    ctx->pc = 0x316558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941584));
    // 0x31655c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316560: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x316560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x316564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316568: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31656c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31656cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x316570: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x316570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x316574: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316578: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x316578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x31657c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316580: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316584: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x316584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x316588: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31658c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31658cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x316590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316594: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x316598: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x316598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31659c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x31659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3165a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3165a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3165b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165b4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3165b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3165bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3165BCu;
    {
        const bool branch_taken_0x3165bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3165bc) {
            ctx->pc = 0x3165F0u;
            goto label_3165f0;
        }
    }
    ctx->pc = 0x3165C4u;
label_3165c4:
    // 0x3165c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3165c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3165ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3165d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3165d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3165dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3165e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3165ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3165f0:
    // 0x3165f0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x3165f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3165f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3165f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3165f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3165f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3165fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3165fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31660c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31660cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316610: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x316610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x316614: 0x3e00008  jr          $ra
    ctx->pc = 0x316614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31661Cu;
}
