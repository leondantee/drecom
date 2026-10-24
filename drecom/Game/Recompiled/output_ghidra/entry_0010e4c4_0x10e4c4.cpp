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

// Function: entry_0010e4c4
// Address: 0x10e4c4 - 0x10e4f8
void entry_0010e4c4_0x10e4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e4c4_0x10e4c4");
#endif

    ctx->pc = 0x10e4c4u;

label_10e4c4:
    // 0x10e4c4: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x10e4c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e4c8: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x10e4c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10e4cc: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x10e4ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10e4d0: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x10e4d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10e4d4: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x10e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x10e4d8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x10e4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x10e4dc: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x10e4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x10e4e0: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x10e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x10e4e4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10e4e8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10e4ec: 0x0  nop
    ctx->pc = 0x10e4ecu;
    // NOP
    // 0x10e4f0: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10E4F0u;
    {
        const bool branch_taken_0x10e4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10e4f0) {
            ctx->pc = 0x10E4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e4c4;
        }
    }
    ctx->pc = 0x10E4F8u;
}
