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

// Function: entry_0030f524
// Address: 0x30f524 - 0x30f574
void entry_0030f524_0x30f524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f524_0x30f524");
#endif

    switch (ctx->pc) {
        case 0x30f570u: goto label_30f570;
        default: break;
    }

    ctx->pc = 0x30f524u;

    // 0x30f524: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f528: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x30f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30f52c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x30f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x30f530: 0x34a4fe00  ori         $a0, $a1, 0xFE00
    ctx->pc = 0x30f530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65024);
    // 0x30f534: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30f538: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x30F538u;
    {
        const bool branch_taken_0x30f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f538) {
            ctx->pc = 0x30F6B0u;
            return;
        }
    }
    ctx->pc = 0x30F540u;
    // 0x30f540: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f544: 0x8c851338  lw          $a1, 0x1338($a0)
    ctx->pc = 0x30f544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x30f548: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x30f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30f54c: 0x3464e000  ori         $a0, $v1, 0xE000
    ctx->pc = 0x30f54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x30f550: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x30f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30f554: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F554u;
    {
        const bool branch_taken_0x30f554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f554) {
            ctx->pc = 0x30F574u;
            return;
        }
    }
    ctx->pc = 0x30F55Cu;
    // 0x30f55c: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f560: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30f564: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x30f564u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x30f568: 0xc0c44fc  jal         func_3113F0
    ctx->pc = 0x30F568u;
    SET_GPR_U32(ctx, 31, 0x30F570u);
    ctx->pc = 0x3113F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3113F0u, 0x30F568u, 0x30F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F570u;
label_30f570:
    // 0x30f570: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x30f570u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30f574u;
}
