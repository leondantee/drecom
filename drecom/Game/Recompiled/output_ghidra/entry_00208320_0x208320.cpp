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

// Function: entry_00208320
// Address: 0x208320 - 0x20839c
void entry_00208320_0x208320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208320_0x208320");
#endif

    switch (ctx->pc) {
        case 0x20832cu: goto label_20832c;
        case 0x20833cu: goto label_20833c;
        case 0x208348u: goto label_208348;
        default: break;
    }

    ctx->pc = 0x208320u;

    // 0x208320: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208324: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x208324u;
    SET_GPR_U32(ctx, 31, 0x20832Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x208324u, 0x20832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20832Cu;
label_20832c:
    // 0x20832c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208330: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208334: 0xc080f60  jal         func_203D80
    ctx->pc = 0x208334u;
    SET_GPR_U32(ctx, 31, 0x20833Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x208334u, 0x20833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20833Cu;
label_20833c:
    // 0x20833c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208340: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x208340u;
    SET_GPR_U32(ctx, 31, 0x208348u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x208340u, 0x208348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208348u;
label_208348:
    // 0x208348: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20834c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20834cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x208350: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x208350u;
    {
        const bool branch_taken_0x208350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208350) {
            ctx->pc = 0x20839Cu;
            return;
        }
    }
    ctx->pc = 0x208358u;
    // 0x208358: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x208358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20835c: 0x8ca41340  lw          $a0, 0x1340($a1)
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4928)));
    // 0x208360: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x208364: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x208364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x208368: 0xaca31340  sw          $v1, 0x1340($a1)
    ctx->pc = 0x208368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4928), GPR_U32(ctx, 3));
    // 0x20836c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208370: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208374: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208378: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20837c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208380: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x208384: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208388: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x208388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20838c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208390: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x208390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x208394: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208398: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x208398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20839cu;
}
