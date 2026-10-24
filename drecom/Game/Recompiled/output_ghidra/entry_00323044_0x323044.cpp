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

// Function: entry_00323044
// Address: 0x323044 - 0x32305c
void entry_00323044_0x323044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00323044_0x323044");
#endif

    ctx->pc = 0x323044u;

    // 0x323044: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x323044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323048: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323048u;
    {
        const bool branch_taken_0x323048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323048) {
            ctx->pc = 0x32305Cu;
            return;
        }
    }
    ctx->pc = 0x323050u;
    // 0x323050: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x323050u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x323054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x323054u;
    {
        const bool branch_taken_0x323054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323054) {
            ctx->pc = 0x323070u;
            return;
        }
    }
    ctx->pc = 0x32305Cu;
}
