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

// Function: entry_00136cbc
// Address: 0x136cbc - 0x136ce0
void entry_00136cbc_0x136cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136cbc_0x136cbc");
#endif

    switch (ctx->pc) {
        case 0x136cc4u: goto label_136cc4;
        default: break;
    }

    ctx->pc = 0x136cbcu;

    // 0x136cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136CBCu;
    SET_GPR_U32(ctx, 31, 0x136CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136CBCu, 0x136CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC4u;
label_136cc4:
    // 0x136cc4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x136cc4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136cc8: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x136cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x136ccc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cd0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cd4: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x136cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cd8: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x136CD8u;
    {
        const bool branch_taken_0x136cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cd8) {
            ctx->pc = 0x137430u;
            return;
        }
    }
    ctx->pc = 0x136CE0u;
}
