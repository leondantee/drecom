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

// Function: entry_0016ede8
// Address: 0x16ede8 - 0x16ee08
void entry_0016ede8_0x16ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ede8_0x16ede8");
#endif

    ctx->pc = 0x16ede8u;

    // 0x16ede8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16edec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EDECu;
    {
        const bool branch_taken_0x16edec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16edec) {
            ctx->pc = 0x16EE08u;
            return;
        }
    }
    ctx->pc = 0x16EDF4u;
    // 0x16edf4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x16edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16edf8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x16edfc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x16edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x16ee00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EE00u;
    {
        const bool branch_taken_0x16ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee00) {
            ctx->pc = 0x16EE10u;
            return;
        }
    }
    ctx->pc = 0x16EE08u;
}
