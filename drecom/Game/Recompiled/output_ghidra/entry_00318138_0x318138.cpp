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

// Function: entry_00318138
// Address: 0x318138 - 0x318184
void entry_00318138_0x318138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318138_0x318138");
#endif

    switch (ctx->pc) {
        case 0x318144u: goto label_318144;
        default: break;
    }

    ctx->pc = 0x318138u;

    // 0x318138: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31813c: 0xc0c6aac  jal         func_31AAB0
    ctx->pc = 0x31813Cu;
    SET_GPR_U32(ctx, 31, 0x318144u);
    ctx->pc = 0x31AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AAB0u, 0x31813Cu, 0x318144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318144u;
label_318144:
    // 0x318144: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x318144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x318148: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x318148u;
    {
        const bool branch_taken_0x318148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x318148) {
            ctx->pc = 0x318184u;
            return;
        }
    }
    ctx->pc = 0x318150u;
    // 0x318150: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x318150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318154: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x318154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318158: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x318158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x31815c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318160: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x318160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x318164: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x318164u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318168: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x318168u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31816c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318170: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x318170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x318174: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x318174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318178: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x318178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x31817c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x31817Cu;
    {
        const bool branch_taken_0x31817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31817c) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x318184u;
}
