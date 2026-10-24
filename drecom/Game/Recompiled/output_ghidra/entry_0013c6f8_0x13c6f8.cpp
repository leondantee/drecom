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

// Function: entry_0013c6f8
// Address: 0x13c6f8 - 0x13c8f8
void entry_0013c6f8_0x13c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c6f8_0x13c6f8");
#endif

    ctx->pc = 0x13c6f8u;

    // 0x13c6f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c6fc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x13c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x13c700: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13c700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c704: 0x93a400df  lbu         $a0, 0xDF($sp)
    ctx->pc = 0x13c704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c708: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13c70c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c710: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c718: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x13c718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x13c71c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c720: 0xac450060  sw          $a1, 0x60($v0)
    ctx->pc = 0x13c720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 5));
    // 0x13c724: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c728: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13c72c: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x13c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x13c730: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x13c734: 0x2483bd20  addiu       $v1, $a0, -0x42E0
    ctx->pc = 0x13c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950176));
    // 0x13c738: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x13c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x13c73c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c740: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c744: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c748: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c74c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13c750: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x13c754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c758: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c75c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c760: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13c760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c764: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x13c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13c768: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13c768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13c76c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c770: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x13c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x13c774: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c778: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c77c: 0xac20bd00  sw          $zero, -0x4300($at)
    ctx->pc = 0x13c77cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD00u, _value); } while (0);
    // 0x13c780: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c784: 0xac20bd04  sw          $zero, -0x42FC($at)
    ctx->pc = 0x13c784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD04u, _value); } while (0);
    // 0x13c788: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x13c78c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x13c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x13c790: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c794: 0xac22bd08  sw          $v0, -0x42F8($at)
    ctx->pc = 0x13c794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD08u, _value); } while (0);
    // 0x13c798: 0x3c116c01  lui         $s1, 0x6C01
    ctx->pc = 0x13c798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)27649 << 16));
    // 0x13c79c: 0x362203ff  ori         $v0, $s1, 0x3FF
    ctx->pc = 0x13c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1023);
    // 0x13c7a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7a4: 0xac22bd0c  sw          $v0, -0x42F4($at)
    ctx->pc = 0x13c7a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD0Cu, _value); } while (0);
    // 0x13c7a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7ac: 0xac20bd20  sw          $zero, -0x42E0($at)
    ctx->pc = 0x13c7acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD20u, _value); } while (0);
    // 0x13c7b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7b4: 0xac20bd24  sw          $zero, -0x42DC($at)
    ctx->pc = 0x13c7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD24u, _value); } while (0);
    // 0x13c7b8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c7bc: 0x34a20404  ori         $v0, $a1, 0x404
    ctx->pc = 0x13c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x13c7c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7c4: 0xac22bd28  sw          $v0, -0x42D8($at)
    ctx->pc = 0x13c7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BD28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD28u, _value); } while (0);
    // 0x13c7c8: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x13c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
    // 0x13c7cc: 0x346403fc  ori         $a0, $v1, 0x3FC
    ctx->pc = 0x13c7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x13c7d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7d4: 0xac24bd2c  sw          $a0, -0x42D4($at)
    ctx->pc = 0x13c7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47BD2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD2Cu, _value); } while (0);
    // 0x13c7d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13c7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c7dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7e0: 0xe420bd38  swc1        $f0, -0x42C8($at)
    ctx->pc = 0x13c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD38u, _value); } while (0); }
    // 0x13c7e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7e8: 0xe420bd34  swc1        $f0, -0x42CC($at)
    ctx->pc = 0x13c7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD34u, _value); } while (0); }
    // 0x13c7ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7f0: 0xe420bd30  swc1        $f0, -0x42D0($at)
    ctx->pc = 0x13c7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD30u, _value); } while (0); }
    // 0x13c7f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c7f8: 0xac20bd48  sw          $zero, -0x42B8($at)
    ctx->pc = 0x13c7f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD48u, _value); } while (0);
    // 0x13c7fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c800: 0xac20bd44  sw          $zero, -0x42BC($at)
    ctx->pc = 0x13c800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD44u, _value); } while (0);
    // 0x13c804: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13c808: 0xac20bd40  sw          $zero, -0x42C0($at)
    ctx->pc = 0x13c808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD40u, _value); } while (0);
    // 0x13c80c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c810: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x13c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x13c814: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c818: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c81c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c824: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x13c824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c828: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13c82c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c830: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x13c830u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x13c834: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c838: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c83c: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x13c83cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x13c840: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x13c844: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c848: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x13c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13c84c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x13c850: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13c854: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c858: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c85c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x13c860: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13c860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13c864: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c86c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x13c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x13c870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c874: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13c878: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13c87c: 0x24426eb0  addiu       $v0, $v0, 0x6EB0
    ctx->pc = 0x13c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28336));
    // 0x13c880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c884: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x13c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x13c888: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x13c888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c88c: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x13c88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x13c890: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x13c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13c894: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c898: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13c898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c89c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13c8a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13c8a4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x13c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c8ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c8b0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8b4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x13c8b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c8bc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13c8c0: 0x2462002c  addiu       $v0, $v1, 0x2C
    ctx->pc = 0x13c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x13c8c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13c8c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8cc: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x13c8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x13c8d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13c8d4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c8d8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8dc: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x13c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x13c8e0: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x13c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x13c8e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c8e8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13c8ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x13c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13c8f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x13c8f4: 0x0  nop
    ctx->pc = 0x13c8f4u;
    // NOP
    ctx->pc = 0x13c8f8u;
}
