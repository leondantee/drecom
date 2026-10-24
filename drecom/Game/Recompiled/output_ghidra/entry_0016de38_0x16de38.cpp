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

// Function: entry_0016de38
// Address: 0x16de38 - 0x16de4c
void entry_0016de38_0x16de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de38_0x16de38");
#endif

    ctx->pc = 0x16de38u;

    // 0x16de38: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16de38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16de3c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16de40: 0xafb00258  sw          $s0, 0x258($sp)
    ctx->pc = 0x16de40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 16));
    // 0x16de44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DE44u;
    {
        const bool branch_taken_0x16de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de44) {
            ctx->pc = 0x16DE68u;
            return;
        }
    }
    ctx->pc = 0x16DE4Cu;
}
