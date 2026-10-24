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

// Function: entry_001a5824
// Address: 0x1a5824 - 0x1a5a44
void entry_001a5824_0x1a5824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5824_0x1a5824");
#endif

    ctx->pc = 0x1a5824u;

    // 0x1a5824: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5828: 0x8c223cf8  lw          $v0, 0x3CF8($at)
    ctx->pc = 0x1a5828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CF8u));
    // 0x1a582c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5830: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5834: 0x8c223cf0  lw          $v0, 0x3CF0($at)
    ctx->pc = 0x1a5834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CF0u));
    // 0x1a5838: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a5838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a583c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1a583cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a5840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5844: 0x262202d0  addiu       $v0, $s1, 0x2D0
    ctx->pc = 0x1a5844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
    // 0x1a5848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a584c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5850: 0x8c223ce8  lw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CE8u));
    // 0x1a5854: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a585c: 0x8c223ce0  lw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a585cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CE0u));
    // 0x1a5860: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5864: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a5868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a586c: 0x262202dc  addiu       $v0, $s1, 0x2DC
    ctx->pc = 0x1a586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 732));
    // 0x1a5870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5874: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a5878: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a5878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a587c: 0x262202cc  addiu       $v0, $s1, 0x2CC
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x1a5880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5884: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5888: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a588c: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a5890: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a5894: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a5898: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a5898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a589c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58a0: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a58a4: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1a58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a58a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a58ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a58b0: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a58b4: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1a58b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a58b8: 0x262202d4  addiu       $v0, $s1, 0x2D4
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
    // 0x1a58bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1a58c0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a58c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a58c4: 0x262202d8  addiu       $v0, $s1, 0x2D8
    ctx->pc = 0x1a58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
    // 0x1a58c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a58cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a58ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58d0: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a58d4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a58d8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a58dc: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x1a58e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a58e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a58e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a58e8: 0x8c223cc0  lw          $v0, 0x3CC0($at)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a58ec: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1a58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1a58f0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a58f4: 0x24a27900  addiu       $v0, $a1, 0x7900
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x1a58f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a58fc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1a58fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5900: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x1a5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x1a5904: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a5904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a5908: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a590c: 0x262302e4  addiu       $v1, $s1, 0x2E4
    ctx->pc = 0x1a590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 740));
    // 0x1a5910: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5914: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5914u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5918: 0x42dbc  dsll32      $a1, $a0, 22
    ctx->pc = 0x1a5918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a591c: 0x516be  dsrl32      $v0, $a1, 26
    ctx->pc = 0x1a591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 26));
    // 0x1a5920: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1a5920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1a5924: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1a5924u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5928: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x1a5928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1a592c: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a592cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5930: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1a5930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a5934: 0x226be  dsrl32      $a0, $v0, 26
    ctx->pc = 0x1a5934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a5938: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1a5938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1a593c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a593cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5940: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a5940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a5944: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a5948: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x1a5948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1a594c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1a594cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a5950: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a5950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a5954: 0xa2020315  sb          $v0, 0x315($s0)
    ctx->pc = 0x1a5954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 789), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a5958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a595c: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1A595Cu;
    {
        const bool branch_taken_0x1a595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a595c) {
            ctx->pc = 0x1A5BF0u;
            return;
        }
    }
    ctx->pc = 0x1A5964u;
    // 0x1a5964: 0x9604002a  lhu         $a0, 0x2A($s0)
    ctx->pc = 0x1a5964u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a5968: 0x42dbc  dsll32      $a1, $a0, 22
    ctx->pc = 0x1a5968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a596c: 0x516be  dsrl32      $v0, $a1, 26
    ctx->pc = 0x1a596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 26));
    // 0x1a5970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a5974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5978: 0xa2020317  sb          $v0, 0x317($s0)
    ctx->pc = 0x1a5978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 791), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a597c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5980: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A5980u;
    {
        const bool branch_taken_0x1a5980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5980) {
            ctx->pc = 0x1A5A44u;
            return;
        }
    }
    ctx->pc = 0x1A5988u;
    // 0x1a5988: 0x9202031c  lbu         $v0, 0x31C($s0)
    ctx->pc = 0x1a5988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a598c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5990: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a5990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5994: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5998: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1a5998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a599c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a59a0: 0x24c2cca0  addiu       $v0, $a2, -0x3360
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a59a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a59a8: 0x9046001e  lbu         $a2, 0x1E($v0)
    ctx->pc = 0x1a59a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x1a59ac: 0x6167c  dsll32      $v0, $a2, 25
    ctx->pc = 0x1a59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 25));
    // 0x1a59b0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a59b4: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x1a59b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a59b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a59bc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1a59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a59c0: 0x82040310  lb          $a0, 0x310($s0)
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a59c4: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x1a59c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1a59c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a59c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a59cc: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1a59ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a59d0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a59d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a59d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a59d8: 0x9203031c  lbu         $v1, 0x31C($s0)
    ctx->pc = 0x1a59d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a59dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a59e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a59e4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a59e8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a59ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a59f0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a59f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a59f8: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1a59f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a59fc: 0x61b78  dsll        $v1, $a2, 13
    ctx->pc = 0x1a59fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 13);
    // 0x1a5a00: 0x31cbe  dsrl32      $v1, $v1, 18
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a5a04: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1a5a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a5a08: 0xde070028  ld          $a3, 0x28($s0)
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5a0c: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1a5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a5a10: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1a5a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1a5a14: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x1a5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
    // 0x1a5a18: 0x34a2001f  ori         $v0, $a1, 0x1F
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x1a5a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5a20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5a24: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a5a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a5a28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a5a2c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5a30: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1a5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1a5a34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a5a38: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1a5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1a5a3c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1A5A3Cu;
    {
        const bool branch_taken_0x1a5a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a3c) {
            ctx->pc = 0x1A5BF0u;
            return;
        }
    }
    ctx->pc = 0x1A5A44u;
}
