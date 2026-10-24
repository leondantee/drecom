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

// Function: entry_002d1810
// Address: 0x2d1810 - 0x2d1898
void entry_002d1810_0x2d1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1810_0x2d1810");
#endif

    switch (ctx->pc) {
        case 0x2d1830u: goto label_2d1830;
        case 0x2d183cu: goto label_2d183c;
        case 0x2d184cu: goto label_2d184c;
        case 0x2d1858u: goto label_2d1858;
        default: break;
    }

    ctx->pc = 0x2d1810u;

    // 0x2d1810: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1814: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d1818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d181c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d181cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1820: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1828: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D1828u;
    SET_GPR_U32(ctx, 31, 0x2D1830u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D1828u, 0x2D1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1830u;
label_2d1830:
    // 0x2d1830: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d1830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1834: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D1834u;
    SET_GPR_U32(ctx, 31, 0x2D183Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D1834u, 0x2D183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D183Cu;
label_2d183c:
    // 0x2d183c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1840: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d1840u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d1844: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D1844u;
    SET_GPR_U32(ctx, 31, 0x2D184Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D1844u, 0x2D184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D184Cu;
label_2d184c:
    // 0x2d184c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1850: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D1850u;
    SET_GPR_U32(ctx, 31, 0x2D1858u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D1850u, 0x2D1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1858u;
label_2d1858:
    // 0x2d1858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d185c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d185cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d1860: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1860u;
    {
        const bool branch_taken_0x2d1860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1860) {
            ctx->pc = 0x2D1898u;
            return;
        }
    }
    ctx->pc = 0x2D1868u;
    // 0x2d1868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d186c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d186cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1870: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d187c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d187cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1884: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d188c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d188cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1890: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1894: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1898u;
}
