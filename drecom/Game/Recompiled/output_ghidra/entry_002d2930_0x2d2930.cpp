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

// Function: entry_002d2930
// Address: 0x2d2930 - 0x2d2974
void entry_002d2930_0x2d2930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2930_0x2d2930");
#endif

    switch (ctx->pc) {
        case 0x2d2940u: goto label_2d2940;
        case 0x2d294cu: goto label_2d294c;
        default: break;
    }

    ctx->pc = 0x2d2930u;

    // 0x2d2930: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2934: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d2934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d2938: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D2938u;
    SET_GPR_U32(ctx, 31, 0x2D2940u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D2938u, 0x2D2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2940u;
label_2d2940:
    // 0x2d2940: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2944: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2944u;
    SET_GPR_U32(ctx, 31, 0x2D294Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2944u, 0x2D294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D294Cu;
label_2d294c:
    // 0x2d294c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2950: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2954: 0x10600113  beqz        $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x2D2954u;
    {
        const bool branch_taken_0x2d2954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2954) {
            ctx->pc = 0x2D2DA4u;
            return;
        }
    }
    ctx->pc = 0x2D295Cu;
    // 0x2d295c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2960: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d2960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d2964: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2968: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d2968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d296c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2D296Cu;
    {
        const bool branch_taken_0x2d296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d296c) {
            ctx->pc = 0x2D2DA4u;
            return;
        }
    }
    ctx->pc = 0x2D2974u;
}
