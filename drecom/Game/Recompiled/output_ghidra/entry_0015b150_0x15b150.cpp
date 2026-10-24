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

// Function: entry_0015b150
// Address: 0x15b150 - 0x15b19c
void entry_0015b150_0x15b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b150_0x15b150");
#endif

    ctx->pc = 0x15b150u;

    // 0x15b150: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x15b154: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x15b154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x15b158: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x15b158u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15b15c: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x15B15Cu;
    {
        const bool branch_taken_0x15b15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b15c) {
            ctx->pc = 0x15AD00u;
            return;
        }
    }
    ctx->pc = 0x15B164u;
    // 0x15b164: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x15b164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b168: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b16c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15b16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15b170: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15B170u;
    {
        const bool branch_taken_0x15b170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b170) {
            ctx->pc = 0x15B1D0u;
            return;
        }
    }
    ctx->pc = 0x15B178u;
    // 0x15b178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b17c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x15b180: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x15b184: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b188: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B188u;
    {
        const bool branch_taken_0x15b188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b188) {
            ctx->pc = 0x15B19Cu;
            return;
        }
    }
    ctx->pc = 0x15B190u;
    // 0x15b190: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b194: 0xc05d054  jal         func_174150
    ctx->pc = 0x15B194u;
    SET_GPR_U32(ctx, 31, 0x15B19Cu);
    ctx->pc = 0x174150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174150u, 0x15B194u, 0x15B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B19Cu;
}
