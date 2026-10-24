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

// Function: entry_001a181c
// Address: 0x1a181c - 0x1a1990
void entry_001a181c_0x1a181c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a181c_0x1a181c");
#endif

    switch (ctx->pc) {
        case 0x1a1840u: goto label_1a1840;
        case 0x1a190cu: goto label_1a190c;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a1934u: goto label_1a1934;
        case 0x1a194cu: goto label_1a194c;
        case 0x1a1970u: goto label_1a1970;
        default: break;
    }

    ctx->pc = 0x1a181cu;

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
    ctx->pc = 0x1a1990u;
}
