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

// Function: entry_002d37ec
// Address: 0x2d37ec - 0x2d3874
void entry_002d37ec_0x2d37ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d37ec_0x2d37ec");
#endif

    switch (ctx->pc) {
        case 0x2d380cu: goto label_2d380c;
        case 0x2d3818u: goto label_2d3818;
        case 0x2d3828u: goto label_2d3828;
        case 0x2d3834u: goto label_2d3834;
        default: break;
    }

    ctx->pc = 0x2d37ecu;

    // 0x2d37ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d37f0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d37f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d37f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d37f8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d37fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3800: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3804u;
    SET_GPR_U32(ctx, 31, 0x2D380Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3804u, 0x2D380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D380Cu;
label_2d380c:
    // 0x2d380c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3810: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3810u;
    SET_GPR_U32(ctx, 31, 0x2D3818u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3810u, 0x2D3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3818u;
label_2d3818:
    // 0x2d3818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d381c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d381cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3820: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3820u;
    SET_GPR_U32(ctx, 31, 0x2D3828u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3820u, 0x2D3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3828u;
label_2d3828:
    // 0x2d3828: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d382c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D382Cu;
    SET_GPR_U32(ctx, 31, 0x2D3834u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D382Cu, 0x2D3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3834u;
label_2d3834:
    // 0x2d3834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3838: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d383c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D383Cu;
    {
        const bool branch_taken_0x2d383c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d383c) {
            ctx->pc = 0x2D3874u;
            return;
        }
    }
    ctx->pc = 0x2D3844u;
    // 0x2d3844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3848: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d384c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d384cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3850: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2d3850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d3854: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3858: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d385c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3860: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3868: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d386c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3870: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d3874u;
}
