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

// Function: entry_0017a468
// Address: 0x17a468 - 0x17a498
void entry_0017a468_0x17a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a468_0x17a468");
#endif

    ctx->pc = 0x17a468u;

    // 0x17a468: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x17a468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x17a46c: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x17A46Cu;
    {
        const bool branch_taken_0x17a46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a46c) {
            ctx->pc = 0x17A1D0u;
            return;
        }
    }
    ctx->pc = 0x17A474u;
    // 0x17a474: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a478: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17a480: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17A480u;
    {
        const bool branch_taken_0x17a480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a480) {
            ctx->pc = 0x17A54Cu;
            return;
        }
    }
    ctx->pc = 0x17A488u;
    // 0x17a488: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x17a488u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17a48c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x17a48cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17A490u;
    {
        const bool branch_taken_0x17a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a490) {
            ctx->pc = 0x17A4C8u;
            return;
        }
    }
    ctx->pc = 0x17A498u;
}
