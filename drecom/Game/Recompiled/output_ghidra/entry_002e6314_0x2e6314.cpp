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

// Function: entry_002e6314
// Address: 0x2e6314 - 0x2e6394
void entry_002e6314_0x2e6314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6314_0x2e6314");
#endif

    switch (ctx->pc) {
        case 0x2e6324u: goto label_2e6324;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e634cu: goto label_2e634c;
        default: break;
    }

    ctx->pc = 0x2e6314u;

    // 0x2e6314: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6318: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e631c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E631Cu;
    SET_GPR_U32(ctx, 31, 0x2E6324u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E631Cu, 0x2E6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6324u;
label_2e6324:
    // 0x2e6324: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6328: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E6328u;
    SET_GPR_U32(ctx, 31, 0x2E6330u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E6328u, 0x2E6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6334: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6338: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E6338u;
    SET_GPR_U32(ctx, 31, 0x2E6340u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6338u, 0x2E6340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6340u;
label_2e6340:
    // 0x2e6340: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6344: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6344u;
    SET_GPR_U32(ctx, 31, 0x2E634Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6344u, 0x2E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E634Cu;
label_2e634c:
    // 0x2e634c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e6350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e6354: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6354u;
    {
        const bool branch_taken_0x2e6354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6354) {
            ctx->pc = 0x2E6394u;
            return;
        }
    }
    ctx->pc = 0x2E635Cu;
    // 0x2e635c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6360: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6368: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e636c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6370: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e6370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6374: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e637c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e6380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6388: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e638c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E638Cu;
    {
        const bool branch_taken_0x2e638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e638c) {
            ctx->pc = 0x2E6394u;
            return;
        }
    }
    ctx->pc = 0x2E6394u;
}
