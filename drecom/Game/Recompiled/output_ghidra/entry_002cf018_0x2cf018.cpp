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

// Function: entry_002cf018
// Address: 0x2cf018 - 0x2cf030
void entry_002cf018_0x2cf018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf018_0x2cf018");
#endif

    ctx->pc = 0x2cf018u;

    // 0x2cf018: 0x2e030012  sltiu       $v1, $s0, 0x12
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x2cf01c: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2CF01Cu;
    {
        const bool branch_taken_0x2cf01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf01c) {
            ctx->pc = 0x2CEF14u;
            return;
        }
    }
    ctx->pc = 0x2CF024u;
    // 0x2cf024: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2cf024u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cf028: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2CF028u;
    {
        const bool branch_taken_0x2cf028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf028) {
            ctx->pc = 0x2CF388u;
            return;
        }
    }
    ctx->pc = 0x2CF030u;
}
