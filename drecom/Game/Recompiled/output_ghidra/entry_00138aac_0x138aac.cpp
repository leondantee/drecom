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

// Function: entry_00138aac
// Address: 0x138aac - 0x138abc
void entry_00138aac_0x138aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138aac_0x138aac");
#endif

    ctx->pc = 0x138aacu;

    // 0x138aac: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x138aacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x138ab0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138ab4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138AB4u;
    {
        const bool branch_taken_0x138ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ab4) {
            ctx->pc = 0x138B08u;
            return;
        }
    }
    ctx->pc = 0x138ABCu;
}
