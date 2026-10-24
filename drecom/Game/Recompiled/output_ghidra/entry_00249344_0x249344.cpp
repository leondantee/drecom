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

// Function: entry_00249344
// Address: 0x249344 - 0x2494c0
void entry_00249344_0x249344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249344_0x249344");
#endif

    ctx->pc = 0x249344u;

    // 0x249344: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249348: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x24934c: 0x2463b420  addiu       $v1, $v1, -0x4BE0
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
    // 0x249350: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249354: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x249354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x249358: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x249358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x24935c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x249360: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x249364: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x249368: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24936c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x24936cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x249370: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249374: 0x8cc702d0  lw          $a3, 0x2D0($a2)
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 720)));
    // 0x249378: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24937c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x24937cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x249380: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x249380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249384: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x249384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x249388: 0x24a6b420  addiu       $a2, $a1, -0x4BE0
    ctx->pc = 0x249388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947872));
    // 0x24938c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x24938cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x249390: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x249390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x249394: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x249394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x249398: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x249398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x24939c: 0x8fb601c8  lw          $s6, 0x1C8($sp)
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2493a0: 0x8ec30130  lw          $v1, 0x130($s6)
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x2493a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2493a8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2493a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x2493ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2493b0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2493b4: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    // 0x2493b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2493bc: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x2493bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2493c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2493c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2493c4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2493c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2493c8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2493cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2493ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2493d0: 0x8fb601c8  lw          $s6, 0x1C8($sp)
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2493d4: 0x8ec30058  lw          $v1, 0x58($s6)
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x2493d8: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2493dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2493e0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x2493e4: 0x2485b420  addiu       $a1, $a0, -0x4BE0
    ctx->pc = 0x2493e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    // 0x2493e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2493ec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2493ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2493f0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2493f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2493f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2493f8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2493fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x249400: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249404: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x249404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x249408: 0xa3f021  addu        $fp, $a1, $v1
    ctx->pc = 0x249408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24940c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249410: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x249410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x249414: 0x2483b420  addiu       $v1, $a0, -0x4BE0
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    // 0x249418: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x249418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24941c: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x24941cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x249420: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x249420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x249424: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x249428: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24942c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x249430: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249434: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x249438: 0x8c34dcf0  lw          $s4, -0x2310($at)
    ctx->pc = 0x249438u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x24943c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249440: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x249444: 0x2464b420  addiu       $a0, $v1, -0x4BE0
    ctx->pc = 0x249444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
    // 0x249448: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24944c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24944cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249450: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x249454: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x249458: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24945c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x249460: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x249460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249464: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249468: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x249468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x24946c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x24946cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x249470: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x249470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x249474: 0x10a005bc  beqz        $a1, . + 4 + (0x5BC << 2)
    ctx->pc = 0x249474u;
    {
        const bool branch_taken_0x249474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249474) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24947Cu;
    // 0x24947c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249480: 0x94a4002e  lhu         $a0, 0x2E($a1)
    ctx->pc = 0x249480u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x249484: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x249484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x249488: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x249488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x24948c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24948Cu;
    {
        const bool branch_taken_0x24948c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24948c) {
            ctx->pc = 0x2494C0u;
            return;
        }
    }
    ctx->pc = 0x249494u;
    // 0x249494: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249498: 0x94c4002e  lhu         $a0, 0x2E($a2)
    ctx->pc = 0x249498u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x24949c: 0x3085fffd  andi        $a1, $a0, 0xFFFD
    ctx->pc = 0x24949cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
    // 0x2494a0: 0xa4c5002e  sh          $a1, 0x2E($a2)
    ctx->pc = 0x2494a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x2494a4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2494a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2494a8: 0xa0e00029  sb          $zero, 0x29($a3)
    ctx->pc = 0x2494a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2494ac: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x2494acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2494b0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2494b4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2494b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2494b8: 0x34850100  ori         $a1, $a0, 0x100
    ctx->pc = 0x2494b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2494bc: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x2494bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    ctx->pc = 0x2494c0u;
}
