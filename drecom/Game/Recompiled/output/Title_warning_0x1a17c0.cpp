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

// Function: Title_warning
// Address: 0x1a17c0 - 0x1a1aa0
void Title_warning_0x1a17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_warning_0x1a17c0");
#endif

    switch (ctx->pc) {
        case 0x1a17e8u: goto label_1a17e8;
        case 0x1a1840u: goto label_1a1840;
        case 0x1a190cu: goto label_1a190c;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a1934u: goto label_1a1934;
        case 0x1a194cu: goto label_1a194c;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a78u: goto label_1a1a78;
        default: break;
    }

    ctx->pc = 0x1a17c0u;

    // 0x1a17c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a17c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a17c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a17cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1a17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1a17d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a17d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a17d4: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1a17d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a17dc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1a17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1a17e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a17e4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1a17e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a17e8:
    // 0x1a17e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a17ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1a17ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1a17f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a17f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a17f8: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A1A18u;
            goto label_1a1a18;
        }
    }
    ctx->pc = 0x1A1800u;
    // 0x1a1800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1804: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A1804u;
    {
        const bool branch_taken_0x1a1804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1804) {
            ctx->pc = 0x1A1990u;
            goto label_1a1990;
        }
    }
    ctx->pc = 0x1A180Cu;
    // 0x1a180c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A180Cu;
    {
        const bool branch_taken_0x1a180c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a180c) {
            ctx->pc = 0x1A181Cu;
            goto label_1a181c;
        }
    }
    ctx->pc = 0x1A1814u;
    // 0x1a1814: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1A1814u;
    {
        const bool branch_taken_0x1a1814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1814) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A181Cu;
label_1a181c:
    // 0x1a181c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a181cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1820: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1824: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1828: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1828u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a182c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a182cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1830: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a1830u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1834: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1838: 0xc059190  jal         func_164640
    ctx->pc = 0x1A1838u;
    SET_GPR_U32(ctx, 31, 0x1A1840u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A1838u, 0x1A1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1844: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1a1848: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a1848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a184c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a1850: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x1a1854: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x1a1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x1a1858: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a1858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a185c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1860: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a1860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a1864: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a1864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a1868: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a186c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a186cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1870: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a1874: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a1874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a1878: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x1a1878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x1a187c: 0x34432800  ori         $v1, $v0, 0x2800
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x1a1880: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1a1880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a1884: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1888: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1a1888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1a188c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1a188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1a1890: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1a1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a1894: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a1894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a1898: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a1898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a189c: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a18a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a18a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a18a4: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x1a18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x1a18a8: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1a18a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1a18ac: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1a18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a18b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a18b4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1a18b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a18b8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a18bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a18c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a18c4: 0x2442ecf8  addiu       $v0, $v0, -0x1308
    ctx->pc = 0x1a18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962424));
    // 0x1a18c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a18cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a18d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18d4: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1a18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1a18d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1a18dc: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x1a18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x1a18e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18e4: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1a18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x1a18e8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1a18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1a18ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18f0: 0xfc430060  sd          $v1, 0x60($v0)
    ctx->pc = 0x1a18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 3));
    // 0x1a18f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a18f8: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x1a18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1a18fc: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a1900: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1a1900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1a1904: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1904u;
    SET_GPR_U32(ctx, 31, 0x1A190Cu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1904u, 0x1A190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A190Cu;
label_1a190c:
    // 0x1a190c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a190cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1910: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1A1910u;
    SET_GPR_U32(ctx, 31, 0x1A1918u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1A1910u, 0x1A1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1918u;
label_1a1918:
    // 0x1a1918: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a191c: 0x240400cf  addiu       $a0, $zero, 0xCF
    ctx->pc = 0x1a191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x1a1920: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1a1920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1a1924: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x1a1924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x1a1928: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1a1928u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a192c: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x1A192Cu;
    SET_GPR_U32(ctx, 31, 0x1A1934u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x1A192Cu, 0x1A1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1934u;
label_1a1934:
    // 0x1a1934: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1938: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a193c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1a193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1a1940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1944: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1A1944u;
    SET_GPR_U32(ctx, 31, 0x1A194Cu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1A1944u, 0x1A194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A194Cu;
label_1a194c:
    // 0x1a194c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a194cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1950: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1950u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1954: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a1954u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1958: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a1958u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a195c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1960: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1a1960u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1964: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a1964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a1968: 0xc059190  jal         func_164640
    ctx->pc = 0x1A1968u;
    SET_GPR_U32(ctx, 31, 0x1A1970u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A1968u, 0x1A1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1970u;
label_1a1970:
    // 0x1a1970: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1a1970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1a1974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1978: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a1978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1a197c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1980: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1988: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a1988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a198c: 0x0  nop
    ctx->pc = 0x1a198cu;
    // NOP
label_1a1990:
    // 0x1a1990: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1994: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a1998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1998u;
    {
        const bool branch_taken_0x1a1998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1998) {
            ctx->pc = 0x1A19B8u;
            goto label_1a19b8;
        }
    }
    ctx->pc = 0x1A19A0u;
    // 0x1a19a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a19a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a19a4: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x1a19a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x1a19a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a19ac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1a19acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1a19b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A19B0u;
    {
        const bool branch_taken_0x1a19b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19b0) {
            ctx->pc = 0x1A19F0u;
            goto label_1a19f0;
        }
    }
    ctx->pc = 0x1A19B8u;
label_1a19b8:
    // 0x1a19b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a19bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a19c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a19c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a19c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a19c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a19cc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a19ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a19d0: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a19d4: 0xc059190  jal         func_164640
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A19D4u, 0x1A19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19e0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a19e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a19e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a19e8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a19e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a19ec: 0x0  nop
    ctx->pc = 0x1a19ecu;
    // NOP
label_1a19f0:
    // 0x1a19f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19f4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a19f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A19F8u;
    {
        const bool branch_taken_0x1a19f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19f8) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A00u;
    // 0x1a1a00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a04: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1a1a08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1a0c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1a1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1a1a10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1A10u;
    {
        const bool branch_taken_0x1a1a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a10) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A18u;
label_1a1a18:
    // 0x1a1a18: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1A1A18u;
    SET_GPR_U32(ctx, 31, 0x1A1A20u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1A1A18u, 0x1A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A20u;
label_1a1a20:
    // 0x1a1a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1A20u;
    {
        const bool branch_taken_0x1a1a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a20) {
            ctx->pc = 0x1A1A40u;
            goto label_1a1a40;
        }
    }
    ctx->pc = 0x1A1A28u;
    // 0x1a1a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a2c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A34u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A1A2Cu, 0x1A1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A34u;
label_1a1a34:
    // 0x1a1a34: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1a1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a1a38: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A40u;
label_1a1a40:
    // 0x1a1a40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1a44: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1a48: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a1a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a1a4c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a58: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1a5c: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1a60: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a1a64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1A64u;
    SET_GPR_U32(ctx, 31, 0x1A1A6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1A64u, 0x1A1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A6Cu;
label_1a1a6c:
    // 0x1a1a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a70: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1A70u;
    SET_GPR_U32(ctx, 31, 0x1A1A78u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1A70u, 0x1A1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A78u;
label_1a1a78:
    // 0x1a1a78: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
    ctx->pc = 0x1A1A78u;
    {
        const bool branch_taken_0x1a1a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a78) {
            ctx->pc = 0x1A17E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a17e8;
        }
    }
    ctx->pc = 0x1A1A80u;
label_1a1a80:
    // 0x1a1a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1a8c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a1a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1AA0u;
}
