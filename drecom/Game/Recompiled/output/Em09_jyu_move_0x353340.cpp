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

// Function: Em09_jyu_move
// Address: 0x353340 - 0x353888
void Em09_jyu_move_0x353340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_jyu_move_0x353340");
#endif

    ctx->pc = 0x353340u;

    // 0x353340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x353340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x353344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x353348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35334c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x353350: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x353350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x353354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x353354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x353358: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x353358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35335c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353360: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x353360u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353364: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x353364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353368: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x353368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35336c: 0x9063006e  lbu         $v1, 0x6E($v1)
    ctx->pc = 0x35336cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 110)));
    // 0x353370: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x353370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353374: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x353374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353378: 0x1083013d  beq         $a0, $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x353378u;
    {
        const bool branch_taken_0x353378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x353378) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x353380u;
    // 0x353380: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x353380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353384: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x353384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x353388: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x353388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35338c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x35338cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x353390: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x353390u;
    {
        const bool branch_taken_0x353390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x353390) {
            ctx->pc = 0x3533B4u;
            goto label_3533b4;
        }
    }
    ctx->pc = 0x353398u;
    // 0x353398: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35339c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x35339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3533a0: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x3533a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x3533a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3533a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3533a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3533a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3533ac: 0x14830130  bne         $a0, $v1, . + 4 + (0x130 << 2)
    ctx->pc = 0x3533ACu;
    {
        const bool branch_taken_0x3533ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3533ac) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x3533B4u;
label_3533b4:
    // 0x3533b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3533b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3533b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3533bc: 0x9083006e  lbu         $v1, 0x6E($a0)
    ctx->pc = 0x3533bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 110)));
    // 0x3533c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3533c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3533c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3533c8: 0x10a400f6  beq         $a1, $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3533C8u;
    {
        const bool branch_taken_0x3533c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3533c8) {
            ctx->pc = 0x3537A4u;
            goto label_3537a4;
        }
    }
    ctx->pc = 0x3533D0u;
    // 0x3533d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3533d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3533d4: 0x10a300bf  beq         $a1, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x3533D4u;
    {
        const bool branch_taken_0x3533d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3533d4) {
            ctx->pc = 0x3536D4u;
            goto label_3536d4;
        }
    }
    ctx->pc = 0x3533DCu;
    // 0x3533dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3533dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3533e0: 0x10a30092  beq         $a1, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x3533E0u;
    {
        const bool branch_taken_0x3533e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3533e0) {
            ctx->pc = 0x35362Cu;
            goto label_35362c;
        }
    }
    ctx->pc = 0x3533E8u;
    // 0x3533e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3533e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3533ec: 0x10a4003c  beq         $a1, $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3533ECu;
    {
        const bool branch_taken_0x3533ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3533ec) {
            ctx->pc = 0x3534E0u;
            goto label_3534e0;
        }
    }
    ctx->pc = 0x3533F4u;
    // 0x3533f4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3533F4u;
    {
        const bool branch_taken_0x3533f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533f4) {
            ctx->pc = 0x353404u;
            goto label_353404;
        }
    }
    ctx->pc = 0x3533FCu;
    // 0x3533fc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x3533FCu;
    {
        const bool branch_taken_0x3533fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3533fc) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x353404u;
label_353404:
    // 0x353404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353408: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35340c: 0x90650070  lbu         $a1, 0x70($v1)
    ctx->pc = 0x35340cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353410: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x353410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x353414: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x353414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353418: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353418u;
    {
        const bool branch_taken_0x353418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x353418) {
            ctx->pc = 0x353438u;
            goto label_353438;
        }
    }
    ctx->pc = 0x353420u;
    // 0x353420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353424: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353428: 0x90640070  lbu         $a0, 0x70($v1)
    ctx->pc = 0x353428u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x35342c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353430: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353434: 0xa0640071  sb          $a0, 0x71($v1)
    ctx->pc = 0x353434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 4));
label_353438:
    // 0x353438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35343c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353440: 0x9064006f  lbu         $a0, 0x6F($v1)
    ctx->pc = 0x353440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 111)));
    // 0x353444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35344c: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x35344cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x353450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x353450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353458: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35345c: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x35345cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x353460: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353464: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353468: 0xa0600074  sb          $zero, 0x74($v1)
    ctx->pc = 0x353468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x35346c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353474: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x353474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x353478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35347c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35347cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353484: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353488: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35348c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35348cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353490: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353494: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353498: 0xde030050  ld          $v1, 0x50($s0)
    ctx->pc = 0x353498u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x35349c: 0x3903e  dsrl32      $s2, $v1, 0
    ctx->pc = 0x35349cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3534a0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x3534a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3534a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534ac: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x3534acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x3534b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534b8: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x3534b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x3534bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3534c0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3534c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3534c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3534cc: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x3534ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x3534d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3534d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3534d4: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x3534d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x3534d8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3534d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3534dc: 0xfe0301a0  sd          $v1, 0x1A0($s0)
    ctx->pc = 0x3534dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 416), GPR_U64(ctx, 3));
label_3534e0:
    // 0x3534e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3534e8: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x3534e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x3534ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3534ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3534f0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3534f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3534f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3534f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3534f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3534f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3534fc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3534fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353504: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353508: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x35350c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353510: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353514: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x353518: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35351c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35351cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353520: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353524: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353524u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353528: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35352c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353530: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x353530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353534: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353538: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x353538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35353c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353540: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353544: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35354c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353550: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353554: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35355c: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x35355cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x353560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353564: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353568: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x35356c: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x35356cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353570: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353574: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353578: 0x80630072  lb          $v1, 0x72($v1)
    ctx->pc = 0x353578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x35357c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x35357cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353580: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353584: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353588: 0x90830073  lbu         $v1, 0x73($a0)
    ctx->pc = 0x353588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
    // 0x35358c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35358cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x353590: 0xa0830073  sb          $v1, 0x73($a0)
    ctx->pc = 0x353590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x353594: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353598: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35359c: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x35359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x3535a0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3535a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3535a4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3535a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3535a8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x3535a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3535ac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3535acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3535b0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3535B0u;
    {
        const bool branch_taken_0x3535b0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3535b0) {
            ctx->pc = 0x3535C4u;
            goto label_3535c4;
        }
    }
    ctx->pc = 0x3535B8u;
    // 0x3535b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535c0: 0xa0600073  sb          $zero, 0x73($v1)
    ctx->pc = 0x3535c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 0));
label_3535c4:
    // 0x3535c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535cc: 0x80630072  lb          $v1, 0x72($v1)
    ctx->pc = 0x3535ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x3535d0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3535d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3535d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535dc: 0x90830074  lbu         $v1, 0x74($a0)
    ctx->pc = 0x3535dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3535e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3535e4: 0xa0830074  sb          $v1, 0x74($a0)
    ctx->pc = 0x3535e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x3535e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535f0: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x3535f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3535f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3535f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3535f8: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x3535f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3535fc: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x3535FCu;
    {
        const bool branch_taken_0x3535fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3535fc) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x353604u;
    // 0x353604: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x353608: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35360c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353610: 0xa0640074  sb          $a0, 0x74($v1)
    ctx->pc = 0x353610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x353614: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x353614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35361c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353620: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x353620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x353624: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x353624u;
    {
        const bool branch_taken_0x353624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353624) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x35362Cu;
label_35362c:
    // 0x35362c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353634: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x353634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x353638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35363c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35363cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353644: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353648: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35364c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35364cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353650: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353654: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35365c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353660: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x353664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353668: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35366c: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x35366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353670: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353670u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353674: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353678: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35367c: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x35367cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353680: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353684: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x353684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353688: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35368c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353690: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x353694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353698: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35369c: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x35369cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x3536a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536a8: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x3536a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3536ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3536acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3536b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3536b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3536b4: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x3536b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x3536b8: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x3536b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x3536bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3536bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3536c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536c8: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x3536c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x3536cc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3536CCu;
    {
        const bool branch_taken_0x3536cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3536cc) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x3536D4u;
label_3536d4:
    // 0x3536d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3536dc: 0x90630071  lbu         $v1, 0x71($v1)
    ctx->pc = 0x3536dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x3536e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3536e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3536e4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3536e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3536e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3536e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3536ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3536ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3536f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3536f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3536f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3536f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3536fc: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x3536fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353704: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353708: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x353708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x35370c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35370cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353710: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x353714: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x353714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353718: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353718u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x35371c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353720: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353724: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x353724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353728: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35372c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x35372cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353734: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x353734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x353738: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35373c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x353740: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353744: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x353744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x353748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35374c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353750: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x353750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x353754: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x353754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353758: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x353758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35375c: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x35375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x353760: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x353760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x353764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353768: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35376c: 0x90640070  lbu         $a0, 0x70($v1)
    ctx->pc = 0x35376cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353774: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353778: 0xa0640071  sb          $a0, 0x71($v1)
    ctx->pc = 0x353778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 4));
    // 0x35377c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x35377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353784: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353788: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x353788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x35378c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x35378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353794: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353798: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x353798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x35379c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x35379Cu;
    {
        const bool branch_taken_0x35379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35379c) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x3537A4u;
label_3537a4:
    // 0x3537a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537a8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3537a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537ac: 0x84a40076  lh          $a0, 0x76($a1)
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 118)));
    // 0x3537b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3537b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3537b4: 0xa4a30076  sh          $v1, 0x76($a1)
    ctx->pc = 0x3537b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 118), (uint16_t)GPR_U32(ctx, 3));
    // 0x3537b8: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3537B8u;
    {
        const bool branch_taken_0x3537b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3537b8) {
            ctx->pc = 0x353870u;
            goto label_353870;
        }
    }
    ctx->pc = 0x3537C0u;
    // 0x3537c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3537c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537c8: 0x84710036  lh          $s1, 0x36($v1)
    ctx->pc = 0x3537c8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x3537cc: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3537ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3537d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3537d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3537d4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3537d8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3537D8u;
    {
        const bool branch_taken_0x3537d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3537d8) {
            ctx->pc = 0x353860u;
            goto label_353860;
        }
    }
    ctx->pc = 0x3537E0u;
    // 0x3537e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3537e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537e8: 0x84830038  lh          $v1, 0x38($a0)
    ctx->pc = 0x3537e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3537ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3537ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3537f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3537f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3537f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3537f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3537f8: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3537F8u;
    {
        const bool branch_taken_0x3537f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3537f8) {
            ctx->pc = 0x353860u;
            goto label_353860;
        }
    }
    ctx->pc = 0x353800u;
    // 0x353800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353804: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353808: 0x8463003a  lh          $v1, 0x3A($v1)
    ctx->pc = 0x353808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x35380c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35380cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x353810: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x353810u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x353814: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353818: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x353818u;
    {
        const bool branch_taken_0x353818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x353818) {
            ctx->pc = 0x353860u;
            goto label_353860;
        }
    }
    ctx->pc = 0x353820u;
    // 0x353820: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353828: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35382c: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x35382cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x353830: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353838: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x353838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35383c: 0xa4a40038  sh          $a0, 0x38($a1)
    ctx->pc = 0x35383cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x353840: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353848: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35384c: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x35384cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x353850: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x353850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353858: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35385c: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x35385cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
label_353860:
    // 0x353860: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x353860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353864: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x353864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353868: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x353868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35386c: 0xa065006e  sb          $a1, 0x6E($v1)
    ctx->pc = 0x35386cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 5));
label_353870:
    // 0x353870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35387c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35387cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353880: 0x3e00008  jr          $ra
    ctx->pc = 0x353880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353888u;
}
