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

// Function: entry_0032f410
// Address: 0x32f410 - 0x32f574
void entry_0032f410_0x32f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f410_0x32f410");
#endif

    switch (ctx->pc) {
        case 0x32f4ecu: goto label_32f4ec;
        case 0x32f56cu: goto label_32f56c;
        default: break;
    }

    ctx->pc = 0x32f410u;

    // 0x32f410: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x32f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f414: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x32f414u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f418: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32f418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f41c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x32f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32f420: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x32f420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f424: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x32f424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x32f428: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x32f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f42c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x32f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x32f430: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x32f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f434: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x32f434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32f438: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f43c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x32f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32f440: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f444: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x32f444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f448: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x32f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f44c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f450: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f454: 0x24657000  addiu       $a1, $v1, 0x7000
    ctx->pc = 0x32f454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32f458: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x32f458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32f45c: 0x1620c0  sll         $a0, $s6, 3
    ctx->pc = 0x32f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f460: 0x24837900  addiu       $v1, $a0, 0x7900
    ctx->pc = 0x32f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x32f464: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f468: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x32f468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x32f46c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x32f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f470: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f474: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f478: 0x2607001c  addiu       $a3, $s0, 0x1C
    ctx->pc = 0x32f478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f47c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x32f480: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x32f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f484: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32f488: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x32f488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f48c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x32f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f490: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f494: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x32f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f498: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x32f498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x32f49c: 0xe32025  or          $a0, $a3, $v1
    ctx->pc = 0x32f49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32f4a0: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x32f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f4a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f4a8: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x32f4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f4ac: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x32f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f4b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32f4b4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x32f4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f4b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32f4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32f4bc: 0x246300a3  addiu       $v1, $v1, 0xA3
    ctx->pc = 0x32f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x32f4c0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x32f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32f4c4: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x32f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32f4c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x32f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f4cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32f4d0: 0x2445cca0  addiu       $a1, $v0, -0x3360
    ctx->pc = 0x32f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x32f4d4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x32f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x32f4d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32f4dc: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f4e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f4e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f4e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F4E4u;
    SET_GPR_U32(ctx, 31, 0x32F4ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F4E4u, 0x32F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F4ECu;
label_32f4ec:
    // 0x32f4ec: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x32f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f4f0: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x32f4f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x32f4f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f4f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x32f4fc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x32f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x32f500: 0x34621009  ori         $v0, $v1, 0x1009
    ctx->pc = 0x32f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x32f504: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32f504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32f508: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f50c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f510: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32f510u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32f514: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x32f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x32f518: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x32f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x32f51c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f528: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x32f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x32f52c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x32f52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f530: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f534: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x32f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32f538: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f53c: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x32f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x32f540: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x32f540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32f544: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f548: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f54c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f54cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f550: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x32f550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x32f554: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x32f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x32f558: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f558u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f55c: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x32f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f560: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f564: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F564u;
    SET_GPR_U32(ctx, 31, 0x32F56Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F564u, 0x32F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F56Cu;
label_32f56c:
    // 0x32f56c: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x32f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f570: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x32f570u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32f574u;
}
