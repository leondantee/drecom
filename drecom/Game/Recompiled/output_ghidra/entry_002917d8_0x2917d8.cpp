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

// Function: entry_002917d8
// Address: 0x2917d8 - 0x291830
void entry_002917d8_0x2917d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002917d8_0x2917d8");
#endif

    switch (ctx->pc) {
        case 0x2917f8u: goto label_2917f8;
        case 0x291810u: goto label_291810;
        case 0x291824u: goto label_291824;
        default: break;
    }

    ctx->pc = 0x2917d8u;

    // 0x2917d8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2917d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2917dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2917DCu;
    {
        const bool branch_taken_0x2917dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2917dc) {
            ctx->pc = 0x291790u;
            return;
        }
    }
    ctx->pc = 0x2917E4u;
    // 0x2917e4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2917e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2917e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2917e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2917ec: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2917ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2917f0: 0xc040c00  jal         func_103000
    ctx->pc = 0x2917F0u;
    SET_GPR_U32(ctx, 31, 0x2917F8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2917F8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2917F8u) { return; }
    ctx->pc = 0x2917F8u;
label_2917f8:
    // 0x2917f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2917f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2917fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x291800: 0x244562f0  addiu       $a1, $v0, 0x62F0
    ctx->pc = 0x291800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x291804: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x291804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x291808: 0xc040c00  jal         func_103000
    ctx->pc = 0x291808u;
    SET_GPR_U32(ctx, 31, 0x291810u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x291810u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291810u) { return; }
    ctx->pc = 0x291810u;
label_291810:
    // 0x291810: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x291814: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x291814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x291818: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x291818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x29181c: 0xc040c92  jal         func_103248
    ctx->pc = 0x29181Cu;
    SET_GPR_U32(ctx, 31, 0x291824u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x291824u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291824u) { return; }
    ctx->pc = 0x291824u;
label_291824:
    // 0x291824: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x291824u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x291828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x291828u;
    {
        const bool branch_taken_0x291828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291828) {
            ctx->pc = 0x291860u;
            return;
        }
    }
    ctx->pc = 0x291830u;
}
