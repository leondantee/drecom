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

// Function: entry_0021767c
// Address: 0x21767c - 0x2176b0
void entry_0021767c_0x21767c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021767c_0x21767c");
#endif

    ctx->pc = 0x21767cu;

label_21767c:
    // 0x21767c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x21767cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217680: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x217680u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x217684: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x217684u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x217688: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x217688u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21768c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x21768cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x217690: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x217690u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x217694: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x217694u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x217698: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x217698u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x21769c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2176a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2176a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2176a4: 0x0  nop
    ctx->pc = 0x2176a4u;
    // NOP
    // 0x2176a8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2176A8u;
    {
        const bool branch_taken_0x2176a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2176a8) {
            ctx->pc = 0x21767Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21767c;
        }
    }
    ctx->pc = 0x2176B0u;
}
