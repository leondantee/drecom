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

// Function: entry_0021c400
// Address: 0x21c400 - 0x21c418
void entry_0021c400_0x21c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c400_0x21c400");
#endif

    ctx->pc = 0x21c400u;

    // 0x21c400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x21c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c404: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x21C404u;
    {
        const bool branch_taken_0x21c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c404) {
            ctx->pc = 0x21C4F8u;
            return;
        }
    }
    ctx->pc = 0x21C40Cu;
    // 0x21c40c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21c40cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c410: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x21C410u;
    {
        const bool branch_taken_0x21c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c410) {
            ctx->pc = 0x21C4E0u;
            return;
        }
    }
    ctx->pc = 0x21C418u;
}
