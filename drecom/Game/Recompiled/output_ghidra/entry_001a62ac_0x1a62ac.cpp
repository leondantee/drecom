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

// Function: entry_001a62ac
// Address: 0x1a62ac - 0x1a6a18
void entry_001a62ac_0x1a62ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a62ac_0x1a62ac");
#endif

    switch (ctx->pc) {
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a64ecu: goto label_1a64ec;
        default: break;
    }

    ctx->pc = 0x1a62acu;

    // 0x1a62ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a62acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a62b0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a62b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a62b8: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a62bc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1a62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a62c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a62c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a62c8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a62cc: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1a62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1a62d0: 0x24c40028  addiu       $a0, $a2, 0x28
    ctx->pc = 0x1a62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x1a62d4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1a62d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a62d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a62dc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1A62DCu;
    SET_GPR_U32(ctx, 31, 0x1A62E4u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1A62E4u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A62E4u) { return; }
    ctx->pc = 0x1A62E4u;
label_1a62e4:
    // 0x1a62e4: 0x104880  sll         $t1, $s0, 2
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a62e8: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x1a62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1a62ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a62f0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a62f4: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1a62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a62f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a62fc: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x1a62fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6300: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6304: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a6304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6308: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1a630c: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a6310: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1a6310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a6314: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6318: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1A6318u;
    SET_GPR_U32(ctx, 31, 0x1A6320u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1A6320u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A6320u) { return; }
    ctx->pc = 0x1A6320u;
label_1a6320:
    // 0x1a6320: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a6324: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6328: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a632c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6330: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1a6334: 0x94630028  lhu         $v1, 0x28($v1)
    ctx->pc = 0x1a6334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a6338: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1a6338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a633c: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1a633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1a6340: 0x2731018  mult        $v0, $s3, $s3
    ctx->pc = 0x1a6340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a6344: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a6344u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a6348: 0x0  nop
    ctx->pc = 0x1a6348u;
    // NOP
    // 0x1a634c: 0x0  nop
    ctx->pc = 0x1a634cu;
    // NOP
    // 0x1a6350: 0x1012  mflo        $v0
    ctx->pc = 0x1a6350u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a6354: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6358: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1a6358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a635c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6360: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6364: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6368: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1a6368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a636c: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x1a636cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a6370: 0x30c43fff  andi        $a0, $a2, 0x3FFF
    ctx->pc = 0x1a6370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x1a6374: 0x2414c000  addiu       $s4, $zero, -0x4000
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a6378: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x1a6378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x1a637c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a6380: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x1a6380u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6384: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a6388: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a638c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a6390: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a6394: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a6398: 0xdc630028  ld          $v1, 0x28($v1)
    ctx->pc = 0x1a6398u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a639c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x1a639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x1a63a0: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x1a63a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a63a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a63a8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1a63a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a63ac: 0xc0476f8  jal         func_11DBE0
    ctx->pc = 0x1A63ACu;
    SET_GPR_U32(ctx, 31, 0x1A63B4u);
    ctx->pc = 0x11DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DBE0u, 0x1A63ACu, 0x1A63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63B4u;
label_1a63b4:
    // 0x1a63b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a63b8: 0x904821  addu        $t1, $a0, $s0
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a63bc: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1a63c0: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a63c4: 0xdd070028  ld          $a3, 0x28($t0)
    ctx->pc = 0x1a63c4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x1a63c8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a63cc: 0x233b8  dsll        $a2, $v0, 14
    ctx->pc = 0x1a63ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 14);
    // 0x1a63d0: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1a63d4: 0x34643fff  ori         $a0, $v1, 0x3FFF
    ctx->pc = 0x1a63d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x1a63d8: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x1a63d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1a63dc: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x1a63dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a63e0: 0xfd040028  sd          $a0, 0x28($t0)
    ctx->pc = 0x1a63e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 4));
    // 0x1a63e4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1a63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a63e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a63ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a63f0: 0x250c0  sll         $t2, $v0, 3
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a63f4: 0x22a1021  addu        $v0, $s1, $t2
    ctx->pc = 0x1a63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1a63f8: 0x9048002b  lbu         $t0, 0x2B($v0)
    ctx->pc = 0x1a63f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x1a63fc: 0x816bc  dsll32      $v0, $t0, 26
    ctx->pc = 0x1a63fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 26));
    // 0x1a6400: 0x23f3e  dsrl32      $a3, $v0, 28
    ctx->pc = 0x1a6400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a6404: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x1a6404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a6408: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1a6408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a640c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a640cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6410: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6414: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6418: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1a6418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a641c: 0x9124002b  lbu         $a0, 0x2B($t1)
    ctx->pc = 0x1a641cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 43)));
    // 0x1a6420: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x1a6420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1a6424: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1a6424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6428: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1a6428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a642c: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x1a642cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6430: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x1a6430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a6434: 0xa128002b  sb          $t0, 0x2B($t1)
    ctx->pc = 0x1a6434u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 43), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a6438: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x1a6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a643c: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x1a643cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6440: 0x2843821  addu        $a3, $s4, $a0
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1a6444: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a6444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6448: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1a6448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a644c: 0xdc630028  ld          $v1, 0x28($v1)
    ctx->pc = 0x1a644cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a6450: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x1a6450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
    // 0x1a6454: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a6454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a6458: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1a6458u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1a645c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6460: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x1a6460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a6464: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a6468: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a646c: 0xdc850028  ld          $a1, 0x28($a0)
    ctx->pc = 0x1a646cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a6470: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a6470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a6474: 0x23fb8  dsll        $a3, $v0, 30
    ctx->pc = 0x1a6474u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 30);
    // 0x1a6478: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a647c: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x1a647cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6480: 0x3c063fff  lui         $a2, 0x3FFF
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16383 << 16));
    // 0x1a6484: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x1a6484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a6488: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x1a6488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a648c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1a648cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a6490: 0xa71025  or          $v0, $a1, $a3
    ctx->pc = 0x1a6490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1a6494: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x1a6494u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x1a6498: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a649c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a64a0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1a64a4: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x1a64a8: 0x34870808  ori         $a3, $a0, 0x808
    ctx->pc = 0x1a64a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2056);
    // 0x1a64ac: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1a64acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1a64b0: 0x3c061c08  lui         $a2, 0x1C08
    ctx->pc = 0x1a64b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7176 << 16));
    // 0x1a64b4: 0x34c20e00  ori         $v0, $a2, 0xE00
    ctx->pc = 0x1a64b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3584);
    // 0x1a64b8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1a64b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a64bc: 0x1052025  or          $a0, $t0, $a1
    ctx->pc = 0x1a64bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1a64c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a64c4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a64c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a64c8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a64cc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a64d0: 0x94650028  lhu         $a1, 0x28($v1)
    ctx->pc = 0x1a64d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a64d4: 0x30a73fff  andi        $a3, $a1, 0x3FFF
    ctx->pc = 0x1a64d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1a64d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a64dc: 0x2445f118  addiu       $a1, $v0, -0xEE8
    ctx->pc = 0x1a64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963480));
    // 0x1a64e0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1a64e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a64e4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A64E4u;
    SET_GPR_U32(ctx, 31, 0x1A64ECu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A64E4u, 0x1A64ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64ECu;
label_1a64ec:
    // 0x1a64ec: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1a64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a64f0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1a64f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a64f4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a64f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a64f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a64fc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6500: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1a6500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6504: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1a6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6508: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a650c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6510: 0xac6602bc  sw          $a2, 0x2BC($v1)
    ctx->pc = 0x1a6510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 700), GPR_U32(ctx, 6));
    // 0x1a6514: 0x3c046400  lui         $a0, 0x6400
    ctx->pc = 0x1a6514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25600 << 16));
    // 0x1a6518: 0x34862b16  ori         $a2, $a0, 0x2B16
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11030);
    // 0x1a651c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a651cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6520: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a6520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6524: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1a6524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6528: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a652c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a6530: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a6530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6534: 0xac8602c0  sw          $a2, 0x2C0($a0)
    ctx->pc = 0x1a6534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 6));
    // 0x1a6538: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a653c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6540: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a6540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a6544: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x1a6544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6548: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a654c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1a6550: 0xac6002c8  sw          $zero, 0x2C8($v1)
    ctx->pc = 0x1a6550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 712), GPR_U32(ctx, 0));
    // 0x1a6554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6558: 0x8c263cf8  lw          $a2, 0x3CF8($at)
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D3CF8u));
    // 0x1a655c: 0xd3001b  divu        $zero, $a2, $s3
    ctx->pc = 0x1a655cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a6560: 0x0  nop
    ctx->pc = 0x1a6560u;
    // NOP
    // 0x1a6564: 0x0  nop
    ctx->pc = 0x1a6564u;
    // NOP
    // 0x1a6568: 0x2012  mflo        $a0
    ctx->pc = 0x1a6568u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a656c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a6570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6574: 0x8c223cf0  lw          $v0, 0x3CF0($at)
    ctx->pc = 0x1a6574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CF0u));
    // 0x1a6578: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6578u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a657c: 0x0  nop
    ctx->pc = 0x1a657cu;
    // NOP
    // 0x1a6580: 0x0  nop
    ctx->pc = 0x1a6580u;
    // NOP
    // 0x1a6584: 0x1012  mflo        $v0
    ctx->pc = 0x1a6584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a6588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a6588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a658c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1a658cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a6590: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1a6590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a6594: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6598: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a659c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a65a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a65a4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a65a8: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1a65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a65ac: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x1a65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1a65b0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a65b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a65b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a65b8: 0x8c263ce8  lw          $a2, 0x3CE8($at)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D3CE8u));
    // 0x1a65bc: 0xd3001b  divu        $zero, $a2, $s3
    ctx->pc = 0x1a65bcu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a65c0: 0x0  nop
    ctx->pc = 0x1a65c0u;
    // NOP
    // 0x1a65c4: 0x0  nop
    ctx->pc = 0x1a65c4u;
    // NOP
    // 0x1a65c8: 0x1012  mflo        $v0
    ctx->pc = 0x1a65c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a65cc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a65d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a65d4: 0x8c223ce0  lw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CE0u));
    // 0x1a65d8: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a65d8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a65dc: 0x0  nop
    ctx->pc = 0x1a65dcu;
    // NOP
    // 0x1a65e0: 0x0  nop
    ctx->pc = 0x1a65e0u;
    // NOP
    // 0x1a65e4: 0x2012  mflo        $a0
    ctx->pc = 0x1a65e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a65e8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a65ec: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a65f0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a65f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a65f4: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x1a65f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a65f8: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a65fc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1a65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6600: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6604: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6608: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a660c: 0x24c402dc  addiu       $a0, $a2, 0x2DC
    ctx->pc = 0x1a660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 732));
    // 0x1a6610: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a6610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6614: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6618: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a6618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a661c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6620: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6624: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6628: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a662c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6630: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6634: 0x24c402cc  addiu       $a0, $a2, 0x2CC
    ctx->pc = 0x1a6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 716));
    // 0x1a6638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a6638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a663c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6640: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6644: 0x24428100  addiu       $v0, $v0, -0x7F00
    ctx->pc = 0x1a6644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6648: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a664c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6650: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a6654: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6654u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6658: 0x0  nop
    ctx->pc = 0x1a6658u;
    // NOP
    // 0x1a665c: 0x0  nop
    ctx->pc = 0x1a665cu;
    // NOP
    // 0x1a6660: 0x1812  mflo        $v1
    ctx->pc = 0x1a6660u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a6664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6668: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a666c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a666cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a6670: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x1a6674: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x1a6674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6678: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a667c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a667cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6680: 0x24468100  addiu       $a2, $v0, -0x7F00
    ctx->pc = 0x1a6680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6684: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1a6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a6688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a668c: 0x8c243cd0  lw          $a0, 0x3CD0($at)
    ctx->pc = 0x1a668cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a6690: 0x93001b  divu        $zero, $a0, $s3
    ctx->pc = 0x1a6690u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a6694: 0x0  nop
    ctx->pc = 0x1a6694u;
    // NOP
    // 0x1a6698: 0x0  nop
    ctx->pc = 0x1a6698u;
    // NOP
    // 0x1a669c: 0x1812  mflo        $v1
    ctx->pc = 0x1a669cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a66a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a66a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a66a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a66ac: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x1a66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a66b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a66b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1a66b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a66bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a66c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a66c4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a66c8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a66cc: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x1a66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a66d0: 0x249402d4  addiu       $s4, $a0, 0x2D4
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 724));
    // 0x1a66d4: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x1a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x1a66d8: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a66d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a66dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a66e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a66e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a66e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a66ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a66f0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a66f4: 0x246202d8  addiu       $v0, $v1, 0x2D8
    ctx->pc = 0x1a66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 728));
    // 0x1a66f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a66fc: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a66fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6700: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6704: 0x24628100  addiu       $v0, $v1, -0x7F00
    ctx->pc = 0x1a6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x1a6708: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a670c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a670cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6710: 0x8c253cc8  lw          $a1, 0x3CC8($at)
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a6714: 0xb3001b  divu        $zero, $a1, $s3
    ctx->pc = 0x1a6714u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1a6718: 0x0  nop
    ctx->pc = 0x1a6718u;
    // NOP
    // 0x1a671c: 0x0  nop
    ctx->pc = 0x1a671cu;
    // NOP
    // 0x1a6720: 0x1012  mflo        $v0
    ctx->pc = 0x1a6720u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a6724: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6728: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1a6728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a672c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1a672cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a6730: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x1a6730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x1a6734: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x1a6734u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6738: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a673c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6740: 0x24448100  addiu       $a0, $v0, -0x7F00
    ctx->pc = 0x1a6740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6744: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a674c: 0x8c223cc0  lw          $v0, 0x3CC0($at)
    ctx->pc = 0x1a674cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a6750: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6750u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6754: 0x0  nop
    ctx->pc = 0x1a6754u;
    // NOP
    // 0x1a6758: 0x0  nop
    ctx->pc = 0x1a6758u;
    // NOP
    // 0x1a675c: 0x3812  mflo        $a3
    ctx->pc = 0x1a675cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1a6760: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a6764: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a6768: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a676c: 0x24887900  addiu       $t0, $a0, 0x7900
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1a6770: 0x83400  sll         $a2, $t0, 16
    ctx->pc = 0x1a6770u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1a6774: 0x1261025  or          $v0, $t1, $a2
    ctx->pc = 0x1a6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1a6778: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a677c: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x1a677cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6780: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1a6780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1a6784: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x1a6784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6788: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a6788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a678c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a678cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6790: 0x246402e0  addiu       $a0, $v1, 0x2E0
    ctx->pc = 0x1a6790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x1a6794: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a6794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a6798: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a6798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a679c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a67a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a67a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a67a8: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1a67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a67ac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a67acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a67b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a67b4: 0x244402e4  addiu       $a0, $v0, 0x2E4
    ctx->pc = 0x1a67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 740));
    // 0x1a67b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a67bc: 0x92220315  lbu         $v0, 0x315($s1)
    ctx->pc = 0x1a67bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 789)));
    // 0x1a67c0: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1A67C0u;
    {
        const bool branch_taken_0x1a67c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a67c0) {
            ctx->pc = 0x1A6A18u;
            return;
        }
    }
    ctx->pc = 0x1A67C8u;
    // 0x1a67c8: 0x92230317  lbu         $v1, 0x317($s1)
    ctx->pc = 0x1a67c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 791)));
    // 0x1a67cc: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1A67CCu;
    {
        const bool branch_taken_0x1a67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a67cc) {
            ctx->pc = 0x1A6A18u;
            return;
        }
    }
    ctx->pc = 0x1A67D4u;
    // 0x1a67d4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1a67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a67d8: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x1a67d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a67dc: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x1a67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a67e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a67e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a67e4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a67e8: 0x9447002a  lhu         $a3, 0x2A($v0)
    ctx->pc = 0x1a67e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x1a67ec: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x1a67ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1a67f0: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1a67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a67f4: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x1a67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a67f8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1a67f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a67fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a67fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a6800: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x1a6800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6804: 0x9224031c  lbu         $a0, 0x31C($s1)
    ctx->pc = 0x1a6804u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x1a6808: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a6808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a680c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a680cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6810: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a6810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6814: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x1a6814u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a6818: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a681c: 0x2468cca0  addiu       $t0, $v1, -0x3360
    ctx->pc = 0x1a681cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a6820: 0x1093821  addu        $a3, $t0, $t1
    ctx->pc = 0x1a6820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a6824: 0x90e2001e  lbu         $v0, 0x1E($a3)
    ctx->pc = 0x1a6824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x1a6828: 0x2367c  dsll32      $a2, $v0, 25
    ctx->pc = 0x1a6828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a682c: 0x6273e  dsrl32      $a0, $a2, 28
    ctx->pc = 0x1a682cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) >> (32 + 28));
    // 0x1a6830: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1a6830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1a6834: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6838: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1a6838u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a683c: 0x822302b0  lb          $v1, 0x2B0($s1)
    ctx->pc = 0x1a683cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1a6840: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x1a6840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a6844: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a6844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a6848: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1a6848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a684c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6850: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1a6850u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1a6854: 0x9222031c  lbu         $v0, 0x31C($s1)
    ctx->pc = 0x1a6854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 796)));
    // 0x1a6858: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1a6858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a685c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1a685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a6860: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a6864: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1a6864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6868: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1a686c: 0x24c3cca0  addiu       $v1, $a2, -0x3360
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x1a6870: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a6870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6874: 0xdc420018  ld          $v0, 0x18($v0)
    ctx->pc = 0x1a6874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a6878: 0x24b78  dsll        $t1, $v0, 13
    ctx->pc = 0x1a6878u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << 13);
    // 0x1a687c: 0x924be  dsrl32      $a0, $t1, 18
    ctx->pc = 0x1a687cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) >> (32 + 18));
    // 0x1a6880: 0x8a382d  daddu       $a3, $a0, $t2
    ctx->pc = 0x1a6880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 10));
    // 0x1a6884: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6888: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a688c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1a688cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6890: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1a6894: 0xdd040028  ld          $a0, 0x28($t0)
    ctx->pc = 0x1a6894u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x1a6898: 0x30f43fff  andi        $s4, $a3, 0x3FFF
    ctx->pc = 0x1a6898u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x1a689c: 0x14397c  dsll32      $a3, $s4, 5
    ctx->pc = 0x1a689cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 5));
    // 0x1a68a0: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x1a68a4: 0x3462001f  ori         $v0, $v1, 0x1F
    ctx->pc = 0x1a68a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x1a68a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a68a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a68ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a68acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a68b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a68b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a68b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a68b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a68b8: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a68b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a68bc: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x1a68bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1a68c0: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x1a68c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1a68c4: 0xfd030028  sd          $v1, 0x28($t0)
    ctx->pc = 0x1a68c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 3));
    // 0x1a68c8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a68cc: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a68d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a68d4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a68d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a68d8: 0x90e3002f  lbu         $v1, 0x2F($a3)
    ctx->pc = 0x1a68d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 47)));
    // 0x1a68dc: 0x3009001f  andi        $t1, $zero, 0x1F
    ctx->pc = 0x1a68dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x1a68e0: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a68e4: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1a68e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a68e8: 0xc91825  or          $v1, $a2, $t1
    ctx->pc = 0x1a68e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1a68ec: 0xa0e3002f  sb          $v1, 0x2F($a3)
    ctx->pc = 0x1a68ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a68f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a68f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a68f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a68f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a68fc: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6900: 0x2283821  addu        $a3, $s1, $t0
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1a6904: 0x90e4002f  lbu         $a0, 0x2F($a3)
    ctx->pc = 0x1a6904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 47)));
    // 0x1a6908: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1a6908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1a690c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1a690cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a6910: 0x2406ff1f  addiu       $a2, $zero, -0xE1
    ctx->pc = 0x1a6910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a6914: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x1a6914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1a6918: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x1a6918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1a691c: 0xa0e4002f  sb          $a0, 0x2F($a3)
    ctx->pc = 0x1a691cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6920: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a6920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6924: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6928: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1a6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1a692c: 0xac430280  sw          $v1, 0x280($v0)
    ctx->pc = 0x1a692cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 3));
    // 0x1a6930: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1a6934: 0x34a31007  ori         $v1, $a1, 0x1007
    ctx->pc = 0x1a6934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4103);
    // 0x1a6938: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a693c: 0x2271021  addu        $v0, $s1, $a3
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1a6940: 0xac430284  sw          $v1, 0x284($v0)
    ctx->pc = 0x1a6940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 3));
    // 0x1a6944: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1a6944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6948: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a694c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a6950: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6954: 0x24c30028  addiu       $v1, $a2, 0x28
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x1a6958: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1a6958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a695c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6960: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1a6960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a6964: 0xfca20288  sd          $v0, 0x288($a1)
    ctx->pc = 0x1a6964u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 648), GPR_U64(ctx, 2));
    // 0x1a6968: 0x8e22030c  lw          $v0, 0x30C($s1)
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x1a696c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6970: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6974: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a6978: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a697c: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a6980: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a6984: 0x9485001a  lhu         $a1, 0x1A($a0)
    ctx->pc = 0x1a6984u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1a6988: 0x515bc  dsll32      $v0, $a1, 22
    ctx->pc = 0x1a6988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 22));
    // 0x1a698c: 0x226be  dsrl32      $a0, $v0, 26
    ctx->pc = 0x1a698cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a6990: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6994: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a6994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6998: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a699c: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x1a699cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a69a0: 0x9507002a  lhu         $a3, 0x2A($t0)
    ctx->pc = 0x1a69a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 42)));
    // 0x1a69a4: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1a69a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1a69a8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a69ac: 0x2404fc0f  addiu       $a0, $zero, -0x3F1
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1a69b0: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1a69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1a69b4: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x1a69b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a69b8: 0xa502002a  sh          $v0, 0x2A($t0)
    ctx->pc = 0x1a69b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a69bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a69c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a69c4: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1a69c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a69c8: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1a69cc: 0x90c4002f  lbu         $a0, 0x2F($a2)
    ctx->pc = 0x1a69ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 47)));
    // 0x1a69d0: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x1a69d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x1a69d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a69d8: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x1a69dc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a69dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a69e0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1a69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a69e4: 0xa0c2002f  sb          $v0, 0x2F($a2)
    ctx->pc = 0x1a69e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a69e8: 0x82220310  lb          $v0, 0x310($s1)
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x1a69ec: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1a69ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a69f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a69f4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a69f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a69fc: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1a69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6a00: 0x9082002f  lbu         $v0, 0x2F($a0)
    ctx->pc = 0x1a6a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 47)));
    // 0x1a6a04: 0x30c5001f  andi        $a1, $a2, 0x1F
    ctx->pc = 0x1a6a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1a6a08: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1a6a0c: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x1a6a0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a6a10: 0x2851025  or          $v0, $s4, $a1
    ctx->pc = 0x1a6a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x1a6a14: 0xa082002f  sb          $v0, 0x2F($a0)
    ctx->pc = 0x1a6a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a6a18u;
}
