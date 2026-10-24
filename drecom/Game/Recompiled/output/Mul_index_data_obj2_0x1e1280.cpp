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

// Function: Mul_index_data_obj2
// Address: 0x1e1280 - 0x1e1a70
void Mul_index_data_obj2_0x1e1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj2_0x1e1280");
#endif

    switch (ctx->pc) {
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e1674u: goto label_1e1674;
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16e8u: goto label_1e16e8;
        case 0x1e1798u: goto label_1e1798;
        case 0x1e17c0u: goto label_1e17c0;
        case 0x1e17d8u: goto label_1e17d8;
        case 0x1e181cu: goto label_1e181c;
        case 0x1e1854u: goto label_1e1854;
        case 0x1e1878u: goto label_1e1878;
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e1924u: goto label_1e1924;
        case 0x1e196cu: goto label_1e196c;
        case 0x1e19b0u: goto label_1e19b0;
        case 0x1e19ecu: goto label_1e19ec;
        default: break;
    }

    ctx->pc = 0x1e1280u;

    // 0x1e1280: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1e1284: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1e1284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1e1288: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e128c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1e128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1e1290: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e1290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e1294: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e1298: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e129c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e12a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e12a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e12a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e12a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e12ac: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e12acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x1e12b0: 0xafa501a8  sw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 5));
    // 0x1e12b4: 0xafa701b8  sw          $a3, 0x1B8($sp)
    ctx->pc = 0x1e12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 7));
    // 0x1e12b8: 0x8fb001a0  lw          $s0, 0x1A0($sp)
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e12bc: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x1e12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1e12c0: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x1e12c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x1e12c4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e12c8: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x1e12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e12cc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1E12CCu;
    SET_GPR_U32(ctx, 31, 0x1E12D4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1E12CCu, 0x1E12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12D4u;
label_1e12d4:
    // 0x1e12d4: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x1e12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x1e12d8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e12dc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1e12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1e12e0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e12e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e12e4: 0x8fb401a8  lw          $s4, 0x1A8($sp)
    ctx->pc = 0x1e12e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e12e8: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1e12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1e12ec: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e12ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e12f0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e12f4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1e12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e12f8: 0x70a0f628  paddub      $fp, $a1, $zero
    ctx->pc = 0x1e12f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e12fc: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x1e12fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1300: 0x8cc30040  lw          $v1, 0x40($a2)
    ctx->pc = 0x1e1300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1e1304: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1e1304u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e1308: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e130c: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1e130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1e1310: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x1e1310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x1e1314: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1318: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e1318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e131c: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1e131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x1e1320: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x1e1320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x1e1324: 0x8fb201a0  lw          $s2, 0x1A0($sp)
    ctx->pc = 0x1e1324u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1328: 0x8e440134  lw          $a0, 0x134($s2)
    ctx->pc = 0x1e1328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x1e132c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x1e132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x1e1330: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1334: 0x8c770134  lw          $s7, 0x134($v1)
    ctx->pc = 0x1e1334u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1338: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e133c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1e133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1e1340: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x1e1340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x1e1344: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1e1344u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e1348:
    // 0x1e1348: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e134c: 0x30720001  andi        $s2, $v1, 0x1
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e1350: 0x124001a7  beqz        $s2, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E19F0u;
            goto label_1e19f0;
        }
    }
    ctx->pc = 0x1E1358u;
    // 0x1e1358: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e1358u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e135c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1360: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1e1360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1e1364: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1364u;
    {
        const bool branch_taken_0x1e1364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1364) {
            ctx->pc = 0x1E138Cu;
            goto label_1e138c;
        }
    }
    ctx->pc = 0x1E136Cu;
    // 0x1e136c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e136cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1370: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e1374: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1e1374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1378: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x1e1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
    // 0x1e137c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1380: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e1380u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e1384: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x1E1384u;
    {
        const bool branch_taken_0x1e1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1384) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E138Cu;
label_1e138c:
    // 0x1e138c: 0x96060100  lhu         $a2, 0x100($s0)
    ctx->pc = 0x1e138cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e1390: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x1e1390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e1394: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1398: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e139c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e13a0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e13a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e13a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e13ac: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13b0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1e13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e13b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e13b8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13c0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e13c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e13c4: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13c8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e13cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e13d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1e13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e13d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e13dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e13e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13e4: 0x0  nop
    ctx->pc = 0x1e13e4u;
    // NOP
    // 0x1e13e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e13e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e13ec: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e13f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e13f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e13fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1400: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e1400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e1404: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1408: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e140c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1410: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1414: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e1414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1418: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e141c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1420: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1428: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e142c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1430: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e1430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e1434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e143c: 0x0  nop
    ctx->pc = 0x1e143cu;
    // NOP
    // 0x1e1440: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e1440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e1444: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e144c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1450: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1454: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1458: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e1458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e145c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e145cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1460: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1468: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e146c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1470: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e1470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e1474: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1478: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e147c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e147cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1480: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1484: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e1484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1488: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e1488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e148c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1494: 0x0  nop
    ctx->pc = 0x1e1494u;
    // NOP
    // 0x1e1498: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e1498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e149c: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e149cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e14a0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1E14A0u;
    {
        const bool branch_taken_0x1e14a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e14a0) {
            ctx->pc = 0x1E167Cu;
            goto label_1e167c;
        }
    }
    ctx->pc = 0x1E14A8u;
    // 0x1e14a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e14ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e14b0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e14b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e14b4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e14b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e14b8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e14bc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e14c0: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e14c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e14c8: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1e14c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e14cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e14d0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e14d4: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e14d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e14dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e14e0: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e14e4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e14e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e14e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e14ec: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E14ECu;
    {
        const bool branch_taken_0x1e14ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14ec) {
            ctx->pc = 0x1E1650u;
            goto label_1e1650;
        }
    }
    ctx->pc = 0x1E14F4u;
    // 0x1e14f4: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x1e14f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x1e14f8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E14F8u;
    {
        const bool branch_taken_0x1e14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14f8) {
            ctx->pc = 0x1E15D8u;
            goto label_1e15d8;
        }
    }
    ctx->pc = 0x1E1500u;
    // 0x1e1500: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1504: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e150c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1510: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1514: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e1514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e1518: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e151c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1524: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1528: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e152c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e1530: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1534: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e153c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1540: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1544: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e1544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e1548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e154c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1550: 0x0  nop
    ctx->pc = 0x1e1550u;
    // NOP
    // 0x1e1554: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e1558: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e155c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e1560: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1564: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1568: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1e156c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e1570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1574: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1574u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1578: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e157c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1580: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1584: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e1584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1588: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e158c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1e158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1e1590: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e1590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e1594: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1598: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e159c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e15a0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e15a4: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e15a8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e15a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e15ac: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e15acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e15b0: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1e15b4: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e15b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e15bc: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1e15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e15c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e15c4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e15c8: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e15cc: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E15CCu;
    SET_GPR_U32(ctx, 31, 0x1E15D4u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E15CCu, 0x1E15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D4u;
label_1e15d4:
    // 0x1e15d4: 0x0  nop
    ctx->pc = 0x1e15d4u;
    // NOP
label_1e15d8:
    // 0x1e15d8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e15dc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15e0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e15e4: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e15e8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15ec: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e15ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e15f0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e15f4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e15f8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1e15fc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e1600: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1604: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1e1604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1e1608: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e160c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1610: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1e1610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1e1614: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e1618: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e161c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1e161cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1e1620: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e1620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e1624: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1628: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x1e1628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x1e162c: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e1630: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1634: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1e1634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1e1638: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x1e1638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1e163c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1640: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1e1640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1e1644: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1648: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1e1648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e164c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_1e1650:
    // 0x1e1650: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e1654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1658: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e1658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e165c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e1660: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e1664: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e1664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e1668: 0x72e03628  paddub      $a2, $s7, $zero
    ctx->pc = 0x1e1668u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e166c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E166Cu;
    SET_GPR_U32(ctx, 31, 0x1E1674u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E166Cu, 0x1E1674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1674u;
label_1e1674:
    // 0x1e1674: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1E1674u;
    {
        const bool branch_taken_0x1e1674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1674) {
            ctx->pc = 0x1E17C0u;
            goto label_1e17c0;
        }
    }
    ctx->pc = 0x1E167Cu;
label_1e167c:
    // 0x1e167c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1680: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1684: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E1684u;
    {
        const bool branch_taken_0x1e1684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1684) {
            ctx->pc = 0x1E1700u;
            goto label_1e1700;
        }
    }
    ctx->pc = 0x1E168Cu;
    // 0x1e168c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1690: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e1694: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1698: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e1698u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e169c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e16a0: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e16a4: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e16a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e16ac: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e16b0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e16b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e16b8: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e16bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e16c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e16c4: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e16c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e16c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E16CCu;
    SET_GPR_U32(ctx, 31, 0x1E16D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E16D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E16D4u) { return; }
    ctx->pc = 0x1E16D4u;
label_1e16d4:
    // 0x1e16d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e16d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16d8: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x1e16d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e16dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e16dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e16e0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E16E0u;
    SET_GPR_U32(ctx, 31, 0x1E16E8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E16E8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E16E8u) { return; }
    ctx->pc = 0x1E16E8u;
label_1e16e8:
    // 0x1e16e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e16ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e16ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e16f0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e16f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e16f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e16f8: 0x0  nop
    ctx->pc = 0x1e16f8u;
    // NOP
    // 0x1e16fc: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_1e1700:
    // 0x1e1700: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1704: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e170c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e170cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e1710: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1714: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e1714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1e1718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e171c: 0x0  nop
    ctx->pc = 0x1e171cu;
    // NOP
    // 0x1e1720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1724: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e1728: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e172c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x1e172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1e1730: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1730u;
    {
        const bool branch_taken_0x1e1730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e1730) {
            ctx->pc = 0x1E174Cu;
            goto label_1e174c;
        }
    }
    ctx->pc = 0x1E1738u;
    // 0x1e1738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e173c: 0x0  nop
    ctx->pc = 0x1e173cu;
    // NOP
    // 0x1e1740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1744u;
    {
        const bool branch_taken_0x1e1744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1744) {
            ctx->pc = 0x1E1768u;
            goto label_1e1768;
        }
    }
    ctx->pc = 0x1E174Cu;
label_1e174c:
    // 0x1e174c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e1750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1754: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e1754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e1758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e175c: 0x0  nop
    ctx->pc = 0x1e175cu;
    // NOP
    // 0x1e1760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1764: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e1764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e1768:
    // 0x1e1768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e176c: 0x0  nop
    ctx->pc = 0x1e176cu;
    // NOP
    // 0x1e1770: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E1770u;
    {
        const bool branch_taken_0x1e1770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1770) {
            ctx->pc = 0x1E17A8u;
            goto label_1e17a8;
        }
    }
    ctx->pc = 0x1E1778u;
    // 0x1e1778: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e177c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e1780: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1784: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1788: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e1788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e178c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e178cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1790: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E1790u;
    SET_GPR_U32(ctx, 31, 0x1E1798u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E1790u, 0x1E1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1798u;
label_1e1798:
    // 0x1e1798: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1798u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e179c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e179cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e17a0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1E17A0u;
    {
        const bool branch_taken_0x1e17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e17a0) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E17A8u;
label_1e17a8:
    // 0x1e17a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e17ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e17b0: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e17b4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e17b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e17b8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E17B8u;
    SET_GPR_U32(ctx, 31, 0x1E17C0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E17B8u, 0x1E17C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17C0u;
label_1e17c0:
    // 0x1e17c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e17c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e17c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e17c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e17cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e17ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e17d0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E17D0u;
    SET_GPR_U32(ctx, 31, 0x1E17D8u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E17D8u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E17D8u) { return; }
    ctx->pc = 0x1E17D8u;
label_1e17d8:
    // 0x1e17d8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e17dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e17e0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e17e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e17e4: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e17e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e17e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E17E8u;
    {
        const bool branch_taken_0x1e17e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e17e8) {
            ctx->pc = 0x1E1808u;
            goto label_1e1808;
        }
    }
    ctx->pc = 0x1E17F0u;
    // 0x1e17f0: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e17f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e17f8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e17f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e17fc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e17fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1800: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1800u;
    {
        const bool branch_taken_0x1e1800 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1800) {
            ctx->pc = 0x1E182Cu;
            goto label_1e182c;
        }
    }
    ctx->pc = 0x1E1808u;
label_1e1808:
    // 0x1e1808: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1808u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e180c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1810: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e1810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1814: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E1814u;
    SET_GPR_U32(ctx, 31, 0x1E181Cu);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E1814u, 0x1E181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E181Cu;
label_1e181c:
    // 0x1e181c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e181cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1820: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1824: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E1824u;
    {
        const bool branch_taken_0x1e1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1824) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E182Cu;
label_1e182c:
    // 0x1e182c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e1830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1834: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e1834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e1838: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1838u;
    {
        const bool branch_taken_0x1e1838 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1838) {
            ctx->pc = 0x1E1864u;
            goto label_1e1864;
        }
    }
    ctx->pc = 0x1E1840u;
    // 0x1e1840: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1840u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1844: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1848: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e1848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e184c: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E184Cu;
    SET_GPR_U32(ctx, 31, 0x1E1854u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E184Cu, 0x1E1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1854u;
label_1e1854:
    // 0x1e1854: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1858: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e185c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1E185Cu;
    {
        const bool branch_taken_0x1e185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e185c) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E1864u;
label_1e1864:
    // 0x1e1864: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e1864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e1868: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e186c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e186cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1870: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E1870u;
    SET_GPR_U32(ctx, 31, 0x1E1878u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E1870u, 0x1E1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1878u;
label_1e1878:
    // 0x1e1878: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e187c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1880: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1884: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1888: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1888u;
    {
        const bool branch_taken_0x1e1888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1888) {
            ctx->pc = 0x1E18A8u;
            goto label_1e18a8;
        }
    }
    ctx->pc = 0x1E1890u;
    // 0x1e1890: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e1894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1898: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e189c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e189cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e18a0: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E18A0u;
    {
        const bool branch_taken_0x1e18a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e18a0) {
            ctx->pc = 0x1E18CCu;
            goto label_1e18cc;
        }
    }
    ctx->pc = 0x1E18A8u;
label_1e18a8:
    // 0x1e18a8: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e18a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e18ac: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e18b0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e18b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e18b4: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E18B4u;
    SET_GPR_U32(ctx, 31, 0x1E18BCu);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E18B4u, 0x1E18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18BCu;
label_1e18bc:
    // 0x1e18bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e18c0: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e18c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e18c4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E18C4u;
    {
        const bool branch_taken_0x1e18c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18c4) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E18CCu;
label_1e18cc:
    // 0x1e18cc: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e18d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e18d4: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e18d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e18d8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E18D8u;
    {
        const bool branch_taken_0x1e18d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e18d8) {
            ctx->pc = 0x1E1910u;
            goto label_1e1910;
        }
    }
    ctx->pc = 0x1E18E0u;
    // 0x1e18e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e18e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e18e4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e18e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e18e8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e18ec: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e18ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e18f0: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E18F0u;
    SET_GPR_U32(ctx, 31, 0x1E18F8u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E18F0u, 0x1E18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18F8u;
label_1e18f8:
    // 0x1e18f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e18f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e18fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1900: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1904: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e1904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e1908: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E1908u;
    {
        const bool branch_taken_0x1e1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1908) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E1910u;
label_1e1910:
    // 0x1e1910: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e1914: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e1914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e1918: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e191c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E191Cu;
    SET_GPR_U32(ctx, 31, 0x1E1924u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E191Cu, 0x1E1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1924u;
label_1e1924:
    // 0x1e1924: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e1924u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1928: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e192c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1930: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1934: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e1934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1938: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1938u;
    {
        const bool branch_taken_0x1e1938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1938) {
            ctx->pc = 0x1E1958u;
            goto label_1e1958;
        }
    }
    ctx->pc = 0x1E1940u;
    // 0x1e1940: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e1944: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1948: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e194c: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e194cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1950: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1988u;
            goto label_1e1988;
        }
    }
    ctx->pc = 0x1E1958u;
label_1e1958:
    // 0x1e1958: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e195c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1960: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e1960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1964: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E1964u;
    SET_GPR_U32(ctx, 31, 0x1E196Cu);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E1964u, 0x1E196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E196Cu;
label_1e196c:
    // 0x1e196c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e196cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1970: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1974: 0x72e0a628  paddub      $s4, $s7, $zero
    ctx->pc = 0x1e1974u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1e1978: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e1978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e197c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e197cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e1980: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1980u;
    {
        const bool branch_taken_0x1e1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1980) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E1988u;
label_1e1988:
    // 0x1e1988: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1e1988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e198c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1990: 0x2c6159d9  sltiu       $at, $v1, 0x59D9
    ctx->pc = 0x1e1990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e1994: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1994u;
    {
        const bool branch_taken_0x1e1994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1994) {
            ctx->pc = 0x1E19CCu;
            goto label_1e19cc;
        }
    }
    ctx->pc = 0x1E199Cu;
    // 0x1e199c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e199cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e19a0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e19a4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e19a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19a8: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E19A8u;
    SET_GPR_U32(ctx, 31, 0x1E19B0u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E19A8u, 0x1E19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19B0u;
label_1e19b0:
    // 0x1e19b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e19b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e19b4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e19b8: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x1e19b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19bc: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e19c0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e19c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e19c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E19C4u;
    {
        const bool branch_taken_0x1e19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c4) {
            ctx->pc = 0x1E1A00u;
            goto label_1e1a00;
        }
    }
    ctx->pc = 0x1E19CCu;
label_1e19cc:
    // 0x1e19cc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e19d0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e19d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e19d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e19d8: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x1e19d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e19dc: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1e19dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e19e0: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x1e19e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19e4: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E19E4u;
    SET_GPR_U32(ctx, 31, 0x1E19ECu);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E19E4u, 0x1E19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19ECu;
label_1e19ec:
    // 0x1e19ec: 0x0  nop
    ctx->pc = 0x1e19ecu;
    // NOP
label_1e19f0:
    // 0x1e19f0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1e19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e19f4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x1e19f4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e19f8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e19fc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e19fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e1a00:
    // 0x1e1a00: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e1a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e1a08: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1e1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x1e1a0c: 0x1460fe4e  bnez        $v1, . + 4 + (-0x1B2 << 2)
    ctx->pc = 0x1E1A0Cu;
    {
        const bool branch_taken_0x1e1a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a0c) {
            ctx->pc = 0x1E1348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1348;
        }
    }
    ctx->pc = 0x1E1A14u;
    // 0x1e1a14: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e1a18: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1a1c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e1a20: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1A20u;
    {
        const bool branch_taken_0x1e1a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a20) {
            ctx->pc = 0x1E1A3Cu;
            goto label_1e1a3c;
        }
    }
    ctx->pc = 0x1E1A28u;
    // 0x1e1a28: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1a2c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e1a30: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e1a34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e1a38: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e1a3c:
    // 0x1e1a3c: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e1a3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e1a40: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e1a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e1a44: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e1a44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e1a48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e1a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e1a4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e1a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1a50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e1a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1a54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e1a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1a58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e1a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1a5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e1a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1a60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a64: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x1e1a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e1a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1A70u;
}
