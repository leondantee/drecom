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

// Function: entry_0021cce0
// Address: 0x21cce0 - 0x21cd00
void entry_0021cce0_0x21cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cce0_0x21cce0");
#endif

    ctx->pc = 0x21cce0u;

    // 0x21cce0: 0x2e630040  sltiu       $v1, $s3, 0x40
    ctx->pc = 0x21cce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x21cce4: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x21CCE4u;
    {
        const bool branch_taken_0x21cce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cce4) {
            ctx->pc = 0x21C9C0u;
            return;
        }
    }
    ctx->pc = 0x21CCECu;
    // 0x21ccec: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x21ccecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ccf0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21ccf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ccf4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ccf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ccf8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ccf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ccfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ccfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x21cd00u;
}
