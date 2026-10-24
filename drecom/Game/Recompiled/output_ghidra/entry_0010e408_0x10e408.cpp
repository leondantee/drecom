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

// Function: entry_0010e408
// Address: 0x10e408 - 0x10e444
void entry_0010e408_0x10e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e408_0x10e408");
#endif

    ctx->pc = 0x10e408u;

label_10e408:
    // 0x10e408: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x10e408u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e40c: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x10e40cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10e410: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x10e410u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10e414: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10e418: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x10e418u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x10e41c: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x10e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x10e420: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x10e420u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x10e424: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x10e424u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x10e428: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10e42c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10e430: 0x0  nop
    ctx->pc = 0x10e430u;
    // NOP
    // 0x10e434: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10E434u;
    {
        const bool branch_taken_0x10e434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10e434) {
            ctx->pc = 0x10E408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e408;
        }
    }
    ctx->pc = 0x10E43Cu;
    // 0x10e43c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x10E43Cu;
    {
        const bool branch_taken_0x10e43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e43c) {
            ctx->pc = 0x10E518u;
            return;
        }
    }
    ctx->pc = 0x10E444u;
}
