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

// Function: entry_0036c714
// Address: 0x36c714 - 0x36c7a8
void entry_0036c714_0x36c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c714_0x36c714");
#endif

    switch (ctx->pc) {
        case 0x36c724u: goto label_36c724;
        case 0x36c730u: goto label_36c730;
        case 0x36c740u: goto label_36c740;
        case 0x36c74cu: goto label_36c74c;
        case 0x36c77cu: goto label_36c77c;
        default: break;
    }

    ctx->pc = 0x36c714u;

    // 0x36c714: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c718: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c718u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c71c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C71Cu;
    SET_GPR_U32(ctx, 31, 0x36C724u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C71Cu, 0x36C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C724u;
label_36c724:
    // 0x36c724: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c728: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C728u;
    SET_GPR_U32(ctx, 31, 0x36C730u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C728u, 0x36C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C730u;
label_36c730:
    // 0x36c730: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c734: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c738: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36C738u;
    SET_GPR_U32(ctx, 31, 0x36C740u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36C738u, 0x36C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C740u;
label_36c740:
    // 0x36c740: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36c740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c744: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C744u;
    SET_GPR_U32(ctx, 31, 0x36C74Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C744u, 0x36C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C74Cu;
label_36c74c:
    // 0x36c74c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c750: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c754: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36C754u;
    {
        const bool branch_taken_0x36c754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c754) {
            ctx->pc = 0x36C7A8u;
            return;
        }
    }
    ctx->pc = 0x36C75Cu;
    // 0x36c75c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c760: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c764: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c768: 0x24065a03  addiu       $a2, $zero, 0x5A03
    ctx->pc = 0x36c768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x36c76c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c770: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c774: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x36C774u;
    SET_GPR_U32(ctx, 31, 0x36C77Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x36C774u, 0x36C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C77Cu;
label_36c77c:
    // 0x36c77c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c784: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c788: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c78c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36c78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c790: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c794: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c798: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c79c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c79cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c7a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c7a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36c7a8u;
}
