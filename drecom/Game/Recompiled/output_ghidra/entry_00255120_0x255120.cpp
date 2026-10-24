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

// Function: entry_00255120
// Address: 0x255120 - 0x255320
void entry_00255120_0x255120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255120_0x255120");
#endif

    ctx->pc = 0x255120u;

    // 0x255120: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x255120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255124: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x255124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x255128: 0x329100ff  andi        $s1, $s4, 0xFF
    ctx->pc = 0x255128u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25512c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25512cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x255130: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x255130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255134: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x255134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x255138: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x255138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x25513c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255140: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x255140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x255144: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255148: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x255148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x25514c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x25514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255150: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x255154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255158: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x255158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25515c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x25515cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x255160: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x255160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x255164: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x255164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
    // 0x255168: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x255168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
    // 0x25516c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x25516cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255170: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x255170u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x255174: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x255174u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x255178: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x25517c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x25517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x255180: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x255180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x255184: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x255184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255188: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x255188u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x25518c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x25518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255190: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x255190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x255194: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x255194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x255198: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x255198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x25519c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551a0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2551a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2551a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2551a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2551a8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2551a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2551ac: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2551b0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2551b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2551b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2551b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2551b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2551b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2551bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2551bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2551c0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2551c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2551c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2551c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2551c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2551cc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551d0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x2551d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2551d4: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x2551d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x2551d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551dc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2551dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2551e0: 0x3c046c02  lui         $a0, 0x6C02
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27650 << 16));
    // 0x2551e4: 0x348303fe  ori         $v1, $a0, 0x3FE
    ctx->pc = 0x2551e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1022);
    // 0x2551e8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2551e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2551ec: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2551ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2551f0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2551f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2551f4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x2551f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x2551f8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x2551f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x2551fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2551fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255200: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x255200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x255204: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255208: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x255208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x25520c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25520cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255210: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255214: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x255214u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x255218: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x25521c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x25521cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x255220: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x255220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x255224: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x255224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x255228: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25522c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x25522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x255230: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x255230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x255234: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x255238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25523c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255240: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x255240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x255244: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255248: 0xac450084  sw          $a1, 0x84($v0)
    ctx->pc = 0x255248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    // 0x25524c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x255250: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x255250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x255254: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255258: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x255258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25525c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x25525cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x255260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x255260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255264: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x255264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x255268: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x255268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x25526c: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x25526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x255270: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x255270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255274: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x255278: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25527c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x255280: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x255284: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x255284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255288: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25528c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x25528cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x255290: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x255290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x255294: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x255298: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x255298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x25529c: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x25529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x2552a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2552a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2552a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2552a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2552a8: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2552a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2552ac: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2552acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2552b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2552b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2552b4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2552b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2552b8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2552b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2552bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2552bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2552c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2552c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2552c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2552c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2552c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2552cc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x2552ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2552d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2552d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2552d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2552d8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2552d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2552dc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2552dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2552e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2552e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2552e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2552e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2552e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2552ec: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2552ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2552f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2552f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2552f8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2552f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2552fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x255300: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x255300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x255304: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x255304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x255308: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25530c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x25530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255310: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x255310u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x255314: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255318: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25531c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x25531cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x255320u;
}
