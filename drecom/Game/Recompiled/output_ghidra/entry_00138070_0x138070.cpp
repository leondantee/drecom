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

// Function: entry_00138070
// Address: 0x138070 - 0x13809c
void entry_00138070_0x138070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138070_0x138070");
#endif

    ctx->pc = 0x138070u;

    // 0x138070: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x138070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138074: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x138074u;
    {
        const bool branch_taken_0x138074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138074) {
            ctx->pc = 0x137F78u;
            return;
        }
    }
    ctx->pc = 0x13807Cu;
    // 0x13807c: 0x8665008e  lh          $a1, 0x8E($s3)
    ctx->pc = 0x13807cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138080: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x138080u;
    {
        const bool branch_taken_0x138080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x138080) {
            ctx->pc = 0x13809Cu;
            return;
        }
    }
    ctx->pc = 0x138088u;
    // 0x138088: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x13808c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138090: 0xa672008e  sh          $s2, 0x8E($s3)
    ctx->pc = 0x138090u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 18));
    // 0x138094: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x138094u;
    {
        const bool branch_taken_0x138094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138094) {
            ctx->pc = 0x138110u;
            return;
        }
    }
    ctx->pc = 0x13809Cu;
}
