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

// Function: entry_00267254
// Address: 0x267254 - 0x267284
void entry_00267254_0x267254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267254_0x267254");
#endif

    switch (ctx->pc) {
        case 0x267268u: goto label_267268;
        case 0x26727cu: goto label_26727c;
        default: break;
    }

    ctx->pc = 0x267254u;

    // 0x267254: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x267258: 0x26450a68  addiu       $a1, $s2, 0xA68
    ctx->pc = 0x267258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x26725c: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x26725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x267260: 0xc0506e8  jal         func_141BA0
    ctx->pc = 0x267260u;
    SET_GPR_U32(ctx, 31, 0x267268u);
    ctx->pc = 0x141BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141BA0u, 0x267260u, 0x267268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267268u;
label_267268:
    // 0x267268: 0xae021248  sw          $v0, 0x1248($s0)
    ctx->pc = 0x267268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 2));
    // 0x26726c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26726cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267270: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x267270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x267274: 0xc099a54  jal         func_266950
    ctx->pc = 0x267274u;
    SET_GPR_U32(ctx, 31, 0x26727Cu);
    ctx->pc = 0x266950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266950u, 0x267274u, 0x26727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26727Cu;
label_26727c:
    // 0x26727c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26727Cu;
    {
        const bool branch_taken_0x26727c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26727c) {
            ctx->pc = 0x267298u;
            return;
        }
    }
    ctx->pc = 0x267284u;
}
