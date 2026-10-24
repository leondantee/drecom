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

// Function: entry_001a83b8
// Address: 0x1a83b8 - 0x1a8574
void entry_001a83b8_0x1a83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83b8_0x1a83b8");
#endif

    ctx->pc = 0x1a83b8u;

    // 0x1a83b8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1a83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1a83bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a83bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a83c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83c4: 0xdc273c78  ld          $a3, 0x3C78($at)
    ctx->pc = 0x1a83c4u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x5D3C78u));
    // 0x1a83c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a83c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a83cc: 0x22fb8  dsll        $a1, $v0, 30
    ctx->pc = 0x1a83ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 30);
    // 0x1a83d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a83d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a83d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a83d8: 0x3c043fff  lui         $a0, 0x3FFF
    ctx->pc = 0x1a83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16383 << 16));
    // 0x1a83dc: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1a83e0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a83e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a83e4: 0xe61024  and         $v0, $a3, $a2
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1a83e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a83e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a83ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83f0: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a83f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a83f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a83f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a83f8: 0x90243c7c  lbu         $a0, 0x3C7C($at)
    ctx->pc = 0x1a83f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Cu));
    // 0x1a83fc: 0x30050001  andi        $a1, $zero, 0x1
    ctx->pc = 0x1a83fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a8400: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a8404: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a8408: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a8408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a840c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8414: 0xa0273c7c  sb          $a3, 0x3C7C($at)
    ctx->pc = 0x1a8414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5D3C7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Cu, _value); } while (0);
    // 0x1a8418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a841c: 0x90283c7c  lbu         $t0, 0x3C7C($at)
    ctx->pc = 0x1a841cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5D3C7Cu));
    // 0x1a8420: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1a8420u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a8424: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1a8424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1a8428: 0x240affe7  addiu       $t2, $zero, -0x19
    ctx->pc = 0x1a8428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a842c: 0x10a1024  and         $v0, $t0, $t2
    ctx->pc = 0x1a842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x1a8430: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x1a8430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8438: 0xa02b3c7c  sb          $t3, 0x3C7C($at)
    ctx->pc = 0x1a8438u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x5D3C7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Cu, _value); } while (0);
    // 0x1a843c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8440: 0xdc243c78  ld          $a0, 0x3C78($at)
    ctx->pc = 0x1a8440u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5D3C78u));
    // 0x1a8444: 0x30063fff  andi        $a2, $zero, 0x3FFF
    ctx->pc = 0x1a8444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1a8448: 0x6117c  dsll32      $v0, $a2, 5
    ctx->pc = 0x1a8448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1a844c: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x1a8450: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x1a8450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x1a8454: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1a8454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a8458: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1a8458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a845c: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x1a845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x1a8460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a8464: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a8464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a8468: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a8468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a846c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8470: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8474: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a8474u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a8478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a847c: 0x90243c7e  lbu         $a0, 0x3C7E($at)
    ctx->pc = 0x1a847cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Eu));
    // 0x1a8480: 0x3002000f  andi        $v0, $zero, 0xF
    ctx->pc = 0x1a8480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x1a8484: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a8484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8488: 0x2402ff87  addiu       $v0, $zero, -0x79
    ctx->pc = 0x1a8488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
    // 0x1a848c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a848cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a8490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8498: 0xa0223c7e  sb          $v0, 0x3C7E($at)
    ctx->pc = 0x1a8498u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Eu, _value); } while (0);
    // 0x1a849c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a849cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84a0: 0x90243c7e  lbu         $a0, 0x3C7E($at)
    ctx->pc = 0x1a84a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Eu));
    // 0x1a84a4: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1a84a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1a84a8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a84ac: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1a84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a84b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a84b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84bc: 0xa0223c7e  sb          $v0, 0x3C7E($at)
    ctx->pc = 0x1a84bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Eu, _value); } while (0);
    // 0x1a84c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84c4: 0x90243c7f  lbu         $a0, 0x3C7F($at)
    ctx->pc = 0x1a84c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Fu));
    // 0x1a84c8: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x1a84c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a84cc: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1a84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a84d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a84d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84dc: 0xa0223c7f  sb          $v0, 0x3C7F($at)
    ctx->pc = 0x1a84dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Fu, _value); } while (0);
    // 0x1a84e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a84e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a84e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a84e8: 0x90243c7f  lbu         $a0, 0x3C7F($at)
    ctx->pc = 0x1a84e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Fu));
    // 0x1a84ec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1a84ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1a84f0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a84f4: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1a84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a84f8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a84f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a84fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a84fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8504: 0xa0223c7f  sb          $v0, 0x3C7F($at)
    ctx->pc = 0x1a8504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Fu, _value); } while (0);
    // 0x1a8508: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a850c: 0x90223c7b  lbu         $v0, 0x3C7B($at)
    ctx->pc = 0x1a850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8510: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a8510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a8514: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a8514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a851c: 0x62a804  sllv        $s5, $v0, $v1
    ctx->pc = 0x1a851cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a8520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8528: 0xdc223c78  ld          $v0, 0x3C78($at)
    ctx->pc = 0x1a8528u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5D3C78u));
    // 0x1a852c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a8530: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8534: 0x439804  sllv        $s3, $v1, $v0
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a8538: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a8538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a853c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A853Cu;
    {
        const bool branch_taken_0x1a853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a853c) {
            ctx->pc = 0x1A8574u;
            return;
        }
    }
    ctx->pc = 0x1A8544u;
    // 0x1a8544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8548: 0x24423ca4  addiu       $v0, $v0, 0x3CA4
    ctx->pc = 0x1a8548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15524));
    // 0x1a854c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a854cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CA4u, _value); } while (0);
    // 0x1a8550: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x1a8550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1a8554: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1a8554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a8558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a855c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8560: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8564: 0x24423cb0  addiu       $v0, $v0, 0x3CB0
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15536));
    // 0x1a8568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB0u, _value); } while (0);
    // 0x1a856c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A856Cu;
    {
        const bool branch_taken_0x1a856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a856c) {
            ctx->pc = 0x1A86C0u;
            return;
        }
    }
    ctx->pc = 0x1A8574u;
}
