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

// Function: entry_00309314
// Address: 0x309314 - 0x30938c
void entry_00309314_0x309314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309314_0x309314");
#endif

    switch (ctx->pc) {
        case 0x309324u: goto label_309324;
        case 0x309330u: goto label_309330;
        case 0x309340u: goto label_309340;
        case 0x30934cu: goto label_30934c;
        default: break;
    }

    ctx->pc = 0x309314u;

    // 0x309314: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309318: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30931c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30931Cu;
    SET_GPR_U32(ctx, 31, 0x309324u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30931Cu, 0x309324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309324u;
label_309324:
    // 0x309324: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309328: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309328u;
    SET_GPR_U32(ctx, 31, 0x309330u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309328u, 0x309330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309330u;
label_309330:
    // 0x309330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309338: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309338u;
    SET_GPR_U32(ctx, 31, 0x309340u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309338u, 0x309340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309340u;
label_309340:
    // 0x309340: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309344: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309344u;
    SET_GPR_U32(ctx, 31, 0x30934Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309344u, 0x30934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30934Cu;
label_30934c:
    // 0x30934c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309354: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x309354u;
    {
        const bool branch_taken_0x309354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309354) {
            ctx->pc = 0x30938Cu;
            return;
        }
    }
    ctx->pc = 0x30935Cu;
    // 0x30935c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309360: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309368: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x309368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30936c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30936cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309370: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30937c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309388: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30938cu;
}
