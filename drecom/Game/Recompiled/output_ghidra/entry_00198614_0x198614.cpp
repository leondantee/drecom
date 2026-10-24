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

// Function: entry_00198614
// Address: 0x198614 - 0x19864c
void entry_00198614_0x198614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198614_0x198614");
#endif

    switch (ctx->pc) {
        case 0x198634u: goto label_198634;
        default: break;
    }

    ctx->pc = 0x198614u;

    // 0x198614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198618: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19861c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198620: 0x24065a29  addiu       $a2, $zero, 0x5A29
    ctx->pc = 0x198620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23081));
    // 0x198624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198628: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19862c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19862Cu;
    SET_GPR_U32(ctx, 31, 0x198634u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19862Cu, 0x198634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198634u;
label_198634:
    // 0x198634: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198638: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19863c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198640: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198644: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x198644u;
    {
        const bool branch_taken_0x198644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198644) {
            ctx->pc = 0x1986ECu;
            return;
        }
    }
    ctx->pc = 0x19864Cu;
}
