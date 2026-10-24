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

// Function: MIPMAP_disp
// Address: 0x1a6260 - 0x1a73e0
void MIPMAP_disp_0x1a6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MIPMAP_disp_0x1a6260");
#endif

    switch (ctx->pc) {
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6df8u: goto label_1a6df8;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70ccu: goto label_1a70cc;
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a717cu: goto label_1a717c;
        case 0x1a718cu: goto label_1a718c;
        case 0x1a719cu: goto label_1a719c;
        case 0x1a7258u: goto label_1a7258;
        case 0x1a726cu: goto label_1a726c;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a72a0u: goto label_1a72a0;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7394u: goto label_1a7394;
        default: break;
    }

    ctx->pc = 0x1a6260u;

    // 0x1a6260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a6264: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1a6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1a6268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a6268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a626c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a6270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a6270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a6274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a627c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1a627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1a6280: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a6280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a6284: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1a6284u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a6288: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a628c: 0x24630320  addiu       $v1, $v1, 0x320
    ctx->pc = 0x1a628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x1a6290: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1a6290u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6298: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1a6298u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a629c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a62a0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1a62a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a62a4: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x1A62A4u;
    {
        const bool branch_taken_0x1a62a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62a4) {
            ctx->pc = 0x1A6E00u;
            goto label_1a6e00;
        }
    }
    ctx->pc = 0x1A62ACu;
label_1a62ac:
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
            goto label_1a6a18;
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
            goto label_1a6a18;
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
label_1a6a18:
    // 0x1a6a18: 0x9224031a  lbu         $a0, 0x31A($s1)
    ctx->pc = 0x1a6a18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 794)));
    // 0x1a6a1c: 0x108000a4  beqz        $a0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1A6A1Cu;
    {
        const bool branch_taken_0x1a6a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a1c) {
            ctx->pc = 0x1A6CB0u;
            goto label_1a6cb0;
        }
    }
    ctx->pc = 0x1A6A24u;
    // 0x1a6a24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6a28: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a2c: 0x903023  subu        $a2, $a0, $s0
    ctx->pc = 0x1a6a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6a30: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6a34: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6a38: 0xac6206f0  sw          $v0, 0x6F0($v1)
    ctx->pc = 0x1a6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 2));
    // 0x1a6a3c: 0x3c025c00  lui         $v0, 0x5C00
    ctx->pc = 0x1a6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23552 << 16));
    // 0x1a6a40: 0x34431a06  ori         $v1, $v0, 0x1A06
    ctx->pc = 0x1a6a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6662);
    // 0x1a6a44: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6a4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6a54: 0xac4306f4  sw          $v1, 0x6F4($v0)
    ctx->pc = 0x1a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1780), GPR_U32(ctx, 3));
    // 0x1a6a58: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x1a6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6a5c: 0x34868080  ori         $a2, $a0, 0x8080
    ctx->pc = 0x1a6a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1a6a60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a64: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a6c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6a70: 0x248206f8  addiu       $v0, $a0, 0x6F8
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1784));
    // 0x1a6a74: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6a78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6a7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6a80: 0x24448100  addiu       $a0, $v0, -0x7F00
    ctx->pc = 0x1a6a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6a84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6a8c: 0x8c223cd8  lw          $v0, 0x3CD8($at)
    ctx->pc = 0x1a6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD8u));
    // 0x1a6a90: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6a90u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6a94: 0x0  nop
    ctx->pc = 0x1a6a94u;
    // NOP
    // 0x1a6a98: 0x0  nop
    ctx->pc = 0x1a6a98u;
    // NOP
    // 0x1a6a9c: 0x3812  mflo        $a3
    ctx->pc = 0x1a6a9cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1a6aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6aa4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a6aa8: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6aac: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x1a6ab0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6ab4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6ab8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6abc: 0x24428100  addiu       $v0, $v0, -0x7F00
    ctx->pc = 0x1a6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6ac0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6ac4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6ac8: 0x8c223cd0  lw          $v0, 0x3CD0($at)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CD0u));
    // 0x1a6acc: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6accu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6ad0: 0x0  nop
    ctx->pc = 0x1a6ad0u;
    // NOP
    // 0x1a6ad4: 0x0  nop
    ctx->pc = 0x1a6ad4u;
    // NOP
    // 0x1a6ad8: 0x1012  mflo        $v0
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a6adc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a6ae0: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a6ae4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6ae8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a6ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a6aec: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6af0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a6af4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6af8: 0x90a023  subu        $s4, $a0, $s0
    ctx->pc = 0x1a6af8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6afc: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1a6b00: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1a6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6b04: 0x244306fc  addiu       $v1, $v0, 0x6FC
    ctx->pc = 0x1a6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1788));
    // 0x1a6b08: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1a6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1a6b0c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6b10: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b14: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6b18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6b1c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6b20: 0x24620700  addiu       $v0, $v1, 0x700
    ctx->pc = 0x1a6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a6b24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6b28: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a6b30: 0x24468100  addiu       $a2, $v0, -0x7F00
    ctx->pc = 0x1a6b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
    // 0x1a6b34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a6b38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6b3c: 0x8c223cc8  lw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D3CC8u));
    // 0x1a6b40: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6b40u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6b44: 0x0  nop
    ctx->pc = 0x1a6b44u;
    // NOP
    // 0x1a6b48: 0x0  nop
    ctx->pc = 0x1a6b48u;
    // NOP
    // 0x1a6b4c: 0x2012  mflo        $a0
    ctx->pc = 0x1a6b4cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6b50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a6b54: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a6b58: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6b5c: 0x24857000  addiu       $a1, $a0, 0x7000
    ctx->pc = 0x1a6b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a6b60: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x1a6b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a6b64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6b68: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1a6b68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1a6b6c: 0x25238100  addiu       $v1, $t1, -0x7F00
    ctx->pc = 0x1a6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934784));
    // 0x1a6b70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a6b78: 0x8c243cc0  lw          $a0, 0x3CC0($at)
    ctx->pc = 0x1a6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D3CC0u));
    // 0x1a6b7c: 0x93001b  divu        $zero, $a0, $s3
    ctx->pc = 0x1a6b7cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a6b80: 0x0  nop
    ctx->pc = 0x1a6b80u;
    // NOP
    // 0x1a6b84: 0x0  nop
    ctx->pc = 0x1a6b84u;
    // NOP
    // 0x1a6b88: 0x2812  mflo        $a1
    ctx->pc = 0x1a6b88u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a6b8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a6b90: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x1a6b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6b94: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1a6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6b98: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x1a6b9c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6ba0: 0xc44025  or          $t0, $a2, $a0
    ctx->pc = 0x1a6ba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1a6ba4: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a6ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6ba8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1a6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a6bac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6bb0: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6bb4: 0x24e30704  addiu       $v1, $a3, 0x704
    ctx->pc = 0x1a6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1796));
    // 0x1a6bb8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a6bbc: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a6bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6bc0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6bc4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6bc8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a6bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6bcc: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6bd0: 0x24620708  addiu       $v0, $v1, 0x708
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1800));
    // 0x1a6bd4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6bd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6bdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6be0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6be4: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1a6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a6be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6bec: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6bf0: 0x8c8202c0  lw          $v0, 0x2C0($a0)
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x1a6bf4: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x1a6bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a6bf8: 0xac8302c0  sw          $v1, 0x2C0($a0)
    ctx->pc = 0x1a6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 3));
    // 0x1a6bfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6c00: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x1a6c00u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6c04: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x1a6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a6c08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c0c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6c10: 0x9047002c  lbu         $a3, 0x2C($v0)
    ctx->pc = 0x1a6c10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a6c14: 0x30860001  andi        $a2, $a0, 0x1
    ctx->pc = 0x1a6c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a6c18: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6c1c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1a6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a6c20: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1a6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a6c24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a6c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a6c28: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x1a6c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6c2c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6c30: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6c34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c38: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c3c: 0x9089002c  lbu         $t1, 0x2C($a0)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a6c40: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1a6c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1a6c44: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a6c48: 0x2407ffe7  addiu       $a3, $zero, -0x19
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1a6c4c: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x1a6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1a6c50: 0x483025  or          $a2, $v0, $t0
    ctx->pc = 0x1a6c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1a6c54: 0xa086002c  sb          $a2, 0x2C($a0)
    ctx->pc = 0x1a6c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a6c58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6c5c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c60: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6c64: 0xac4402b8  sw          $a0, 0x2B8($v0)
    ctx->pc = 0x1a6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 4));
    // 0x1a6c68: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a6c6c: 0x34641043  ori         $a0, $v1, 0x1043
    ctx->pc = 0x1a6c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x1a6c70: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c78: 0xac4402bc  sw          $a0, 0x2BC($v0)
    ctx->pc = 0x1a6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 4));
    // 0x1a6c7c: 0x240a0089  addiu       $t2, $zero, 0x89
    ctx->pc = 0x1a6c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1a6c80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c84: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c88: 0xfd0a02c0  sd          $t2, 0x2C0($t0)
    ctx->pc = 0x1a6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 704), GPR_U64(ctx, 10));
    // 0x1a6c8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6c90: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a6c94: 0xdce402c0  ld          $a0, 0x2C0($a3)
    ctx->pc = 0x1a6c94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 704)));
    // 0x1a6c98: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6c9c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1a6c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a6ca0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6ca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a6ca8: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x1a6ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6cac: 0xfce902c0  sd          $t1, 0x2C0($a3)
    ctx->pc = 0x1a6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 704), GPR_U64(ctx, 9));
label_1a6cb0:
    // 0x1a6cb0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6cb4: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x1a6cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6cb8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a6cbc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6cc0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a6cc4: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6cc8: 0x1102021  addu        $a0, $t0, $s0
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a6ccc: 0x4a040  sll         $s4, $a0, 1
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6cd0: 0x2903821  addu        $a3, $s4, $s0
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1a6cd4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6cd8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6cdc: 0xac6602c4  sw          $a2, 0x2C4($v1)
    ctx->pc = 0x1a6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 708), GPR_U32(ctx, 6));
    // 0x1a6ce0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6ce4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a6cec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6cf0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6cf4: 0x2462821  addu        $a1, $s2, $a2
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a6cf8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a6cfc: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x1a6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x1a6d00: 0x24a502bc  addiu       $a1, $a1, 0x2BC
    ctx->pc = 0x1a6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 700));
    // 0x1a6d04: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D04u;
    SET_GPR_U32(ctx, 31, 0x1A6D0Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D04u, 0x1A6D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D0Cu;
label_1a6d0c:
    // 0x1a6d0c: 0x92270315  lbu         $a3, 0x315($s1)
    ctx->pc = 0x1a6d0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 789)));
    // 0x1a6d10: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6D48u;
            goto label_1a6d48;
        }
    }
    ctx->pc = 0x1A6D18u;
    // 0x1a6d18: 0x92230317  lbu         $v1, 0x317($s1)
    ctx->pc = 0x1a6d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 791)));
    // 0x1a6d1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6D1Cu;
    {
        const bool branch_taken_0x1a6d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d1c) {
            ctx->pc = 0x1A6D48u;
            goto label_1a6d48;
        }
    }
    ctx->pc = 0x1A6D24u;
    // 0x1a6d24: 0x104900  sll         $t1, $s0, 4
    ctx->pc = 0x1a6d24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6d28: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1a6d2c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d30: 0x24c31614  addiu       $v1, $a2, 0x1614
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5652));
    // 0x1a6d34: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6d34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6d38: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1a6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1a6d3c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D44u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D3Cu, 0x1A6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D44u;
label_1a6d44:
    // 0x1a6d44: 0x0  nop
    ctx->pc = 0x1a6d44u;
    // NOP
label_1a6d48:
    // 0x1a6d48: 0x9222031a  lbu         $v0, 0x31A($s1)
    ctx->pc = 0x1a6d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 794)));
    // 0x1a6d4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A6D4Cu;
    {
        const bool branch_taken_0x1a6d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d4c) {
            ctx->pc = 0x1A6DA8u;
            goto label_1a6da8;
        }
    }
    ctx->pc = 0x1A6D54u;
    // 0x1a6d54: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6d58: 0x1103823  subu        $a3, $t0, $s0
    ctx->pc = 0x1a6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a6d5c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a6d60: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6d64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d68: 0x24461614  addiu       $a2, $v0, 0x1614
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6d6c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1a6d6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a6d70: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1a6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1a6d74: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D74u;
    SET_GPR_U32(ctx, 31, 0x1A6D7Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D74u, 0x1A6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D7Cu;
label_1a6d7c:
    // 0x1a6d7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6d80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6d84: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a6d88: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6d8c: 0x24431614  addiu       $v1, $v0, 0x1614
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6d90: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6d90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6d94: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
    // 0x1a6d98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6D98u;
    SET_GPR_U32(ctx, 31, 0x1A6DA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6D98u, 0x1A6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DA0u;
label_1a6da0:
    // 0x1a6da0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a6da0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6da4: 0x0  nop
    ctx->pc = 0x1a6da4u;
    // NOP
label_1a6da8:
    // 0x1a6da8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a6dac: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1a6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6db0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a6db4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6db8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a6db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6dbc: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x1a6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a6dc0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6dc4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6dc8: 0x24650474  addiu       $a1, $v1, 0x474
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1140));
    // 0x1a6dcc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6DCCu;
    SET_GPR_U32(ctx, 31, 0x1A6DD4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6DCCu, 0x1A6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DD4u;
label_1a6dd4:
    // 0x1a6dd4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6dd8: 0x703023  subu        $a2, $v1, $s0
    ctx->pc = 0x1a6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6ddc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6de0: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6de4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6de8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6dec: 0x24650510  addiu       $a1, $v1, 0x510
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1a6df0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6DF0u;
    SET_GPR_U32(ctx, 31, 0x1A6DF8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6DF0u, 0x1A6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DF8u;
label_1a6df8:
    // 0x1a6df8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a6dfc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1a6dfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a6e00:
    // 0x1a6e00: 0x922302f8  lbu         $v1, 0x2F8($s1)
    ctx->pc = 0x1a6e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x1a6e04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a6e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a6e08: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1a6e08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a6e0c: 0x1020fd27  beqz        $at, . + 4 + (-0x2D9 << 2)
    ctx->pc = 0x1A6E0Cu;
    {
        const bool branch_taken_0x1a6e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e0c) {
            ctx->pc = 0x1A62ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62ac;
        }
    }
    ctx->pc = 0x1A6E14u;
    // 0x1a6e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6e18: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1a6e18u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6e1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e20: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x1a6e20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a6e24: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x1A6E24u;
    {
        const bool branch_taken_0x1a6e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e24) {
            ctx->pc = 0x1A73A8u;
            goto label_1a73a8;
        }
    }
    ctx->pc = 0x1A6E2Cu;
label_1a6e2c:
    // 0x1a6e2c: 0x92270314  lbu         $a3, 0x314($s1)
    ctx->pc = 0x1a6e2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a6e30: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a6e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a6e34: 0x30660001  andi        $a2, $v1, 0x1
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a6e38: 0x10c000a5  beqz        $a2, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1A6E38u;
    {
        const bool branch_taken_0x1a6e38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e38) {
            ctx->pc = 0x1A70D0u;
            goto label_1a70d0;
        }
    }
    ctx->pc = 0x1A6E40u;
    // 0x1a6e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6e44: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e48: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6e50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6e54: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x1a6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
    // 0x1a6e58: 0x3c065c00  lui         $a2, 0x5C00
    ctx->pc = 0x1a6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23552 << 16));
    // 0x1a6e5c: 0x34c61a06  ori         $a2, $a2, 0x1A06
    ctx->pc = 0x1a6e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6662);
    // 0x1a6e60: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x1a6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e64: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a6e68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6e6c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6e70: 0xac460134  sw          $a2, 0x134($v0)
    ctx->pc = 0x1a6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 6));
    // 0x1a6e74: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a6e78: 0x34444040  ori         $a0, $v0, 0x4040
    ctx->pc = 0x1a6e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a6e7c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6e80: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6e84: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6e88: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a6e8c: 0x24620138  addiu       $v0, $v1, 0x138
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x1a6e90: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6e94: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a6e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6e98: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6E98u;
    SET_GPR_U32(ctx, 31, 0x1A6EA0u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6E98u, 0x1A6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EA0u;
label_1a6ea0:
    // 0x1a6ea0: 0x3c054070  lui         $a1, 0x4070
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6ea4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1a6ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a6ea8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a6ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a6eac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6eacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6eb0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A6EB0u;
    SET_GPR_U32(ctx, 31, 0x1A6EB8u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A6EB0u, 0x1A6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EB8u;
label_1a6eb8:
    // 0x1a6eb8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a6eb8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ebc: 0x8e2202fc  lw          $v0, 0x2FC($s1)
    ctx->pc = 0x1a6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a6ec0: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a6ec0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6ec4: 0x0  nop
    ctx->pc = 0x1a6ec4u;
    // NOP
    // 0x1a6ec8: 0x0  nop
    ctx->pc = 0x1a6ec8u;
    // NOP
    // 0x1a6ecc: 0x2012  mflo        $a0
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6ed0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6ED0u;
    SET_GPR_U32(ctx, 31, 0x1A6ED8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6ED0u, 0x1A6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ED8u;
label_1a6ed8:
    // 0x1a6ed8: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1a6ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a6edc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ee0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A6EE0u;
    SET_GPR_U32(ctx, 31, 0x1A6EE8u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A6EE0u, 0x1A6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6eec: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A6EECu;
    SET_GPR_U32(ctx, 31, 0x1A6EF4u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A6EECu, 0x1A6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EF4u;
label_1a6ef4:
    // 0x1a6ef4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1a6ef4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6ef8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6efc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6f00: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6f04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1a6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6f08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a6f0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6f10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a6f14: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a6f18: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1a6f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a6f1c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6f20: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6f24: 0x24628120  addiu       $v0, $v1, -0x7EE0
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6f28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a6f2c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a6f30: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a6f34: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1a6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a6f38: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a6f3c: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x1a6f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a6f40: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6f44: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6f48: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6f4c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x1a6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1a6f50: 0x2462013c  addiu       $v0, $v1, 0x13C
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 316));
    // 0x1a6f54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a6f58: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x1a6f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a6f5c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6f60: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6f64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a6f68: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a6f6c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1a6f70: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a6f74: 0x92230311  lbu         $v1, 0x311($s1)
    ctx->pc = 0x1a6f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 785)));
    // 0x1a6f78: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1a6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a6f7c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a6f80: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6f84: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1a6f88: 0x8e2202fc  lw          $v0, 0x2FC($s1)
    ctx->pc = 0x1a6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 764)));
    // 0x1a6f8c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1a6f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6f90: 0xd3001b  divu        $zero, $a2, $s3
    ctx->pc = 0x1a6f90u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1a6f94: 0x0  nop
    ctx->pc = 0x1a6f94u;
    // NOP
    // 0x1a6f98: 0x0  nop
    ctx->pc = 0x1a6f98u;
    // NOP
    // 0x1a6f9c: 0x2012  mflo        $a0
    ctx->pc = 0x1a6f9cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a6fa0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6FA0u;
    SET_GPR_U32(ctx, 31, 0x1A6FA8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6FA0u, 0x1A6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FA8u;
label_1a6fa8:
    // 0x1a6fa8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a6fa8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a6facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a6fb0: 0xc040044  jal         func_100110
    ctx->pc = 0x1A6FB0u;
    SET_GPR_U32(ctx, 31, 0x1A6FB8u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A6FB0u, 0x1A6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FB8u;
label_1a6fb8:
    // 0x1a6fb8: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a6fbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6fc0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a6fc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fc4: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A6FC4u;
    SET_GPR_U32(ctx, 31, 0x1A6FCCu);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A6FC4u, 0x1A6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FCCu;
label_1a6fcc:
    // 0x1a6fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fd0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1a6fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a6fd4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A6FD4u;
    SET_GPR_U32(ctx, 31, 0x1A6FDCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A6FD4u, 0x1A6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FDCu;
label_1a6fdc:
    // 0x1a6fdc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a6fdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a6fe0: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A6FE0u;
    SET_GPR_U32(ctx, 31, 0x1A6FE8u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A6FE0u, 0x1A6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FE8u;
label_1a6fe8:
    // 0x1a6fe8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a6fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a6fec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a6ff0: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a6ff4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ff8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a6ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7000: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a7000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a7004: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a7008: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1a7008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a700c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a7010: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1a7014: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1a7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1a7018: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a7018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a701c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a7020: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a7020u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a7024: 0x0  nop
    ctx->pc = 0x1a7024u;
    // NOP
    // 0x1a7028: 0x0  nop
    ctx->pc = 0x1a7028u;
    // NOP
    // 0x1a702c: 0x1812  mflo        $v1
    ctx->pc = 0x1a702cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a7030: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a7034: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7038: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a703c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a7040: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a7044: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1a7044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a7048: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a704c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a704cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a7050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7054: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1a7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a7058: 0x24420144  addiu       $v0, $v0, 0x144
    ctx->pc = 0x1a7058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 324));
    // 0x1a705c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a705cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7060: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1a7060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7064: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a7064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7068: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a7068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a706c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7070: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7074: 0x24620148  addiu       $v0, $v1, 0x148
    ctx->pc = 0x1a7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x1a7078: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a7078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a707c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a707cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7080: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7084: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7088: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x1a7088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a708c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7090: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7094: 0x24650130  addiu       $a1, $v1, 0x130
    ctx->pc = 0x1a7094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x1a7098: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7098u;
    SET_GPR_U32(ctx, 31, 0x1A70A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7098u, 0x1A70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70A0u;
label_1a70a0:
    // 0x1a70a0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a70a4: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a70a8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a70ac: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a70b0: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a70b4: 0x2491821  addu        $v1, $s2, $t1
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1a70b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a70bc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a70c0: 0x24650220  addiu       $a1, $v1, 0x220
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x1a70c4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A70C4u;
    SET_GPR_U32(ctx, 31, 0x1A70CCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A70C4u, 0x1A70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70CCu;
label_1a70cc:
    // 0x1a70cc: 0x0  nop
    ctx->pc = 0x1a70ccu;
    // NOP
label_1a70d0:
    // 0x1a70d0: 0x92270314  lbu         $a3, 0x314($s1)
    ctx->pc = 0x1a70d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x1a70d4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a70d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a70d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a70d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a70dc: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x1A70DCu;
    {
        const bool branch_taken_0x1a70dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70dc) {
            ctx->pc = 0x1A7398u;
            goto label_1a7398;
        }
    }
    ctx->pc = 0x1A70E4u;
    // 0x1a70e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a70e8: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x1a70e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a70ec: 0x1103023  subu        $a2, $t0, $s0
    ctx->pc = 0x1a70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1a70f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a70f4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a70f8: 0xac6400dc  sw          $a0, 0xDC($v1)
    ctx->pc = 0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 4));
    // 0x1a70fc: 0x3c035c00  lui         $v1, 0x5C00
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23552 << 16));
    // 0x1a7100: 0x34671a06  ori         $a3, $v1, 0x1A06
    ctx->pc = 0x1a7100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6662);
    // 0x1a7104: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x1a7104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7108: 0xd01823  subu        $v1, $a2, $s0
    ctx->pc = 0x1a7108u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a710c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7110: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1a7110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7114: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x1a7114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x1a7118: 0x3c02ff40  lui         $v0, 0xFF40
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65344 << 16));
    // 0x1a711c: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a7120: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7124: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a7128: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a712c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a7130: 0x244200e4  addiu       $v0, $v0, 0xE4
    ctx->pc = 0x1a7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1a7134: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7138: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a713c: 0xc040044  jal         func_100110
    ctx->pc = 0x1A713Cu;
    SET_GPR_U32(ctx, 31, 0x1A7144u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A713Cu, 0x1A7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7144u;
label_1a7144:
    // 0x1a7144: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a7148: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a7148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a714c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a714cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7150: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A7150u;
    SET_GPR_U32(ctx, 31, 0x1A7158u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A7150u, 0x1A7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7158u;
label_1a7158:
    // 0x1a7158: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a7158u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a715c: 0x8e230300  lw          $v1, 0x300($s1)
    ctx->pc = 0x1a715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a7160: 0x73001b  divu        $zero, $v1, $s3
    ctx->pc = 0x1a7160u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a7164: 0x0  nop
    ctx->pc = 0x1a7164u;
    // NOP
    // 0x1a7168: 0x0  nop
    ctx->pc = 0x1a7168u;
    // NOP
    // 0x1a716c: 0x1812  mflo        $v1
    ctx->pc = 0x1a716cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a7170: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a7170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7174: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7174u;
    SET_GPR_U32(ctx, 31, 0x1A717Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7174u, 0x1A717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A717Cu;
label_1a717c:
    // 0x1a717c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x1a717cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a7180: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7180u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7184: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A7184u;
    SET_GPR_U32(ctx, 31, 0x1A718Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A7184u, 0x1A718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A718Cu;
label_1a718c:
    // 0x1a718c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a718cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7190: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1a7190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7194: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A7194u;
    SET_GPR_U32(ctx, 31, 0x1A719Cu);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A7194u, 0x1A719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A719Cu;
label_1a719c:
    // 0x1a719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1a719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a71a0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1a71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a71a4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a71a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a71a8: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1a71ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a71acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a71b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a71b4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1a71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a71b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a71bc: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1a71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a71c0: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x1a71c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1a71c4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a71c8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1a71cc: 0x25078120  addiu       $a3, $t0, -0x7EE0
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934816));
    // 0x1a71d0: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a71d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a71d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a71d8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a71dc: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a71e0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1a71e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a71e4: 0x492025  or          $a0, $v0, $t1
    ctx->pc = 0x1a71e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a71e8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a71ec: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a71f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a71f4: 0x2425021  addu        $t2, $s2, $v0
    ctx->pc = 0x1a71f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a71f8: 0x254200e8  addiu       $v0, $t2, 0xE8
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 232));
    // 0x1a71fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a71fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a7200: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x1a7200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a7204: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7208: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a720c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a720cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a7210: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1a7210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a7214: 0x24c300ec  addiu       $v1, $a2, 0xEC
    ctx->pc = 0x1a7214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 236));
    // 0x1a7218: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a7218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1a721c: 0x92220312  lbu         $v0, 0x312($s1)
    ctx->pc = 0x1a721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 786)));
    // 0x1a7220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a7224: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x1a7224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a7228: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a722c: 0x918c3  sra         $v1, $t1, 3
    ctx->pc = 0x1a722cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 3));
    // 0x1a7230: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1a7230u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7234: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x1a7234u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7238: 0x8e260300  lw          $a2, 0x300($s1)
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1a723c: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x1a723cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a7240: 0x113001b  divu        $zero, $t0, $s3
    ctx->pc = 0x1a7240u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x1a7244: 0x0  nop
    ctx->pc = 0x1a7244u;
    // NOP
    // 0x1a7248: 0x0  nop
    ctx->pc = 0x1a7248u;
    // NOP
    // 0x1a724c: 0x2012  mflo        $a0
    ctx->pc = 0x1a724cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a7250: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7250u;
    SET_GPR_U32(ctx, 31, 0x1A7258u);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7250u, 0x1A7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7258u;
label_1a7258:
    // 0x1a7258: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1a7258u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a725c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a7260: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1a7260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a7264: 0xc040044  jal         func_100110
    ctx->pc = 0x1A7264u;
    SET_GPR_U32(ctx, 31, 0x1A726Cu);
    ctx->pc = 0x100110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100110u, 0x1A7264u, 0x1A726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A726Cu;
label_1a726c:
    // 0x1a726c: 0x3c034070  lui         $v1, 0x4070
    ctx->pc = 0x1a726cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16496 << 16));
    // 0x1a7270: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a7270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7274: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1a7274u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a7278: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7278u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a727c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a7284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7288: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1a7288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a728c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1A728Cu;
    SET_GPR_U32(ctx, 31, 0x1A7294u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1A728Cu, 0x1A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7294u;
label_1a7294:
    // 0x1a7294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1a7294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7298: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x1A7298u;
    SET_GPR_U32(ctx, 31, 0x1A72A0u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x1A7298u, 0x1A72A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72A0u;
label_1a72a0:
    // 0x1a72a0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a72a4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a72a8: 0x24a38120  addiu       $v1, $a1, -0x7EE0
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a72ac: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a72b0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1a72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a72b4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a72b8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1a72b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a72bc: 0x24e37900  addiu       $v1, $a3, 0x7900
    ctx->pc = 0x1a72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1a72c0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x1a72c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a72c4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a72c8: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1a72c8u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
    // 0x1a72d0: 0x0  nop
    ctx->pc = 0x1a72d0u;
    // NOP
    // 0x1a72d4: 0x3012  mflo        $a2
    ctx->pc = 0x1a72d4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a72d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1a72dc: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1a72e0: 0x24a28120  addiu       $v0, $a1, -0x7EE0
    ctx->pc = 0x1a72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1a72e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a72e8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1a72e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72ec: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x1a72ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1a72f0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1a72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a72f4: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x1a72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x1a72f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1a72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a72fc: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x1a72fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a7300: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a7300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7304: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a7304u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a7308: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a730c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7310: 0x24a200f0  addiu       $v0, $a1, 0xF0
    ctx->pc = 0x1a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x1a7314: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a7314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1a7318: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a7318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a731c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1a731cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7320: 0xb03823  subu        $a3, $a1, $s0
    ctx->pc = 0x1a7320u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1a7324: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1a7324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a7328: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a732c: 0x24a200f4  addiu       $v0, $a1, 0xF4
    ctx->pc = 0x1a732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
    // 0x1a7330: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7334: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a7338: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x1a7338u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a733c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7340: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a7340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a7344: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1a7344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1a7348: 0x24851614  addiu       $a1, $a0, 0x1614
    ctx->pc = 0x1a7348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5652));
    // 0x1a734c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1a734cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a7350: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1a7354: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1a7354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7358: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A7358u;
    SET_GPR_U32(ctx, 31, 0x1A7360u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A7358u, 0x1A7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7360u;
label_1a7360:
    // 0x1a7360: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a7360u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a7364: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1a7364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a7368: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x1a7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a736c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7370: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7374: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a7378: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a737c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a7380: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a7380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a7384: 0x24a30184  addiu       $v1, $a1, 0x184
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 388));
    // 0x1a7388: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1a7388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a738c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A738Cu;
    SET_GPR_U32(ctx, 31, 0x1A7394u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A738Cu, 0x1A7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7394u;
label_1a7394:
    // 0x1a7394: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a7394u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a7398:
    // 0x1a7398: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a739c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1a739cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a73a0: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a73a4: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x1a73a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1a73a8:
    // 0x1a73a8: 0x922702f8  lbu         $a3, 0x2F8($s1)
    ctx->pc = 0x1a73a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x1a73ac: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1a73acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a73b0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1a73b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a73b4: 0x1020fe9d  beqz        $at, . + 4 + (-0x163 << 2)
    ctx->pc = 0x1A73B4u;
    {
        const bool branch_taken_0x1a73b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a73b4) {
            ctx->pc = 0x1A6E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6e2c;
        }
    }
    ctx->pc = 0x1A73BCu;
    // 0x1a73bc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1a73bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a73c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a73c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a73c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a73c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a73c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a73c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a73cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a73ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a73d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a73d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a73d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a73d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A73D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A73E0u;
}
