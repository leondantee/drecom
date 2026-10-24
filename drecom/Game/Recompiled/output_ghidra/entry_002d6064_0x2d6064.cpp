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

// Function: entry_002d6064
// Address: 0x2d6064 - 0x2d60c0
void entry_002d6064_0x2d6064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6064_0x2d6064");
#endif

    switch (ctx->pc) {
        case 0x2d60b8u: goto label_2d60b8;
        default: break;
    }

    ctx->pc = 0x2d6064u;

    // 0x2d6064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6068: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d606c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d606cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6070: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d6074: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d6074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d6078: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d6078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d607c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6080: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6084: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6088: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d608c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d608cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6090: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6090u;
    {
        const bool branch_taken_0x2d6090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6090) {
            ctx->pc = 0x2D60C0u;
            return;
        }
    }
    ctx->pc = 0x2D6098u;
    // 0x2d6098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d609c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d60a4: 0x24063c03  addiu       $a2, $zero, 0x3C03
    ctx->pc = 0x2d60a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15363));
    // 0x2d60a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d60a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d60ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d60acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d60b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D60B0u;
    SET_GPR_U32(ctx, 31, 0x2D60B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D60B0u, 0x2D60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60B8u;
label_2d60b8:
    // 0x2d60b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D60B8u;
    {
        const bool branch_taken_0x2d60b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60b8) {
            ctx->pc = 0x2D60E0u;
            return;
        }
    }
    ctx->pc = 0x2D60C0u;
}
