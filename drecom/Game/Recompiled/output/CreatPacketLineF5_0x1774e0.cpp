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

// Function: CreatPacketLineF5
// Address: 0x1774e0 - 0x1776a8
void CreatPacketLineF5_0x1774e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketLineF5_0x1774e0");
#endif

    ctx->pc = 0x1774e0u;

    // 0x1774e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1774e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1774e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1774e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1774e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1774ec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1774ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1774f0: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1774f4: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x1774f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x1774f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1774f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1774fc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1774fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177500: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177508: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177508u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17750c: 0x3c020444  lui         $v0, 0x444
    ctx->pc = 0x17750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1092 << 16));
    // 0x177510: 0x34434410  ori         $v1, $v0, 0x4410
    ctx->pc = 0x177510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17424);
    // 0x177514: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177518: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177518u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x17751c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177520: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177524: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177528: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17752c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x17752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x177530: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177534: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x177534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x177538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17753c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17753cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177540: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x177544: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177548: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17754c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17754cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x177550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17755c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x177560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177564: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x177564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177568: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x17756c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x17756cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x177570: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177574: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x177574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x177578: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17757c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x17757cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x177580: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x177584: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x177584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x177588: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17758c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177590: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177594: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177598: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17759c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17759cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1775a0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1775a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1775a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1775a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1775a8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x1775a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x1775ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1775acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1775b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1775b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1775b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1775b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1775b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1775bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1775bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1775c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1775c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1775c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1775c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1775c8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1775c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1775cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1775d0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1775d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1775d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1775d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1775d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1775dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1775dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1775e0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1775e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1775e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1775e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1775e8: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x1775e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1775ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1775ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1775f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1775f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1775f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1775f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1775f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1775fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1775fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177600: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177608: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17760c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177610: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177614: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x177614u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177618: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17761c: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x17761cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x177620: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177624: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x177628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17762c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x177630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177634: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177638: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17763c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177640: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177644: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177644u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177648: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17764c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177650: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177654: 0x9602002c  lhu         $v0, 0x2C($s0)
    ctx->pc = 0x177654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x177658: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x177658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17765c: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x17765cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x177660: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x177660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x177664: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x177668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x177668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17766c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x177670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x177674: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x177674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x177678: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x177678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17767c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177680: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177684: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177684u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x177688: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17768c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177690: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17769c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1776a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1776A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1776A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1776A8u;
}
