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

// Function: entry_00214ba8
// Address: 0x214ba8 - 0x214bc8
void entry_00214ba8_0x214ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214ba8_0x214ba8");
#endif

    ctx->pc = 0x214ba8u;

    // 0x214ba8: 0xae02aad4  sw          $v0, -0x552C($s0)
    ctx->pc = 0x214ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945492), GPR_U32(ctx, 2));
    // 0x214bac: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x214bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x214bb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214bb4: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x214bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x214bb8: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x214bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x214bbc: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x214bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x214bc0: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x214bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x214bc4: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x214bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    ctx->pc = 0x214bc8u;
}
