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

// Function: entry_0013415c
// Address: 0x13415c - 0x1341a0
void entry_0013415c_0x13415c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013415c_0x13415c");
#endif

    switch (ctx->pc) {
        case 0x13416cu: goto label_13416c;
        case 0x134178u: goto label_134178;
        default: break;
    }

    ctx->pc = 0x13415cu;

    // 0x13415c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134160: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x134160u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x134164: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x134164u;
    SET_GPR_U32(ctx, 31, 0x13416Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x134164u, 0x13416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13416Cu;
label_13416c:
    // 0x13416c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134170: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x134170u;
    SET_GPR_U32(ctx, 31, 0x134178u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x134170u, 0x134178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134178u;
label_134178:
    // 0x134178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13417c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x134180: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x134180u;
    {
        const bool branch_taken_0x134180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134180) {
            ctx->pc = 0x1341A0u;
            return;
        }
    }
    ctx->pc = 0x134188u;
    // 0x134188: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13418c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x134190: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134194: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x134194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x134198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134198u;
    {
        const bool branch_taken_0x134198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134198) {
            ctx->pc = 0x1341D0u;
            return;
        }
    }
    ctx->pc = 0x1341A0u;
}
