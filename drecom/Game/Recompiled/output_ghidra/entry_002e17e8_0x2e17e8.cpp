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

// Function: entry_002e17e8
// Address: 0x2e17e8 - 0x2e1890
void entry_002e17e8_0x2e17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e17e8_0x2e17e8");
#endif

    ctx->pc = 0x2e17e8u;

    // 0x2e17e8: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2e17e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e17ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E17ECu;
    {
        const bool branch_taken_0x2e17ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e17ec) {
            ctx->pc = 0x2E17B4u;
            return;
        }
    }
    ctx->pc = 0x2E17F4u;
    // 0x2e17f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e17f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e17f8: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e17fc: 0x24a60e10  addiu       $a2, $a1, 0xE10
    ctx->pc = 0x2e17fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3600));
    // 0x2e1800: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x2e1800u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2e1804: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1804u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1808: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2e1808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e180c: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x2e180cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x2e1810: 0x71009e28  paddub      $s3, $t0, $zero
    ctx->pc = 0x2e1810u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2e1814: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1814u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1818: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e1818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e181c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1820: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e1820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1824: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e1824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e1828: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2e1828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2e182c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1830: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e1834: 0x24530990  addiu       $s3, $v0, 0x990
    ctx->pc = 0x2e1834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2e1838: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e1838u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e183c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2e183cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e1840: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e1844: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2e1844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1848: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1850: 0x0  nop
    ctx->pc = 0x2e1850u;
    // NOP
    // 0x2e1854: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e1858: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e1858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e185c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e185cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1860: 0x0  nop
    ctx->pc = 0x2e1860u;
    // NOP
    // 0x2e1864: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x2e1864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x2e1868: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e186c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e186cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e1870: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2e1870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1874: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2e1874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1878: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e187c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x2e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2e1880: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2e1880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e1884: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e1884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1888: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2E1888u;
    SET_GPR_U32(ctx, 31, 0x2E1890u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2E1888u, 0x2E1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1890u;
}
