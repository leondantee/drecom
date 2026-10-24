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

// Function: entry_0031cc58
// Address: 0x31cc58 - 0x31cc80
void entry_0031cc58_0x31cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cc58_0x31cc58");
#endif

    switch (ctx->pc) {
        case 0x31cc68u: goto label_31cc68;
        default: break;
    }

    ctx->pc = 0x31cc58u;

    // 0x31cc58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31cc5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31cc60: 0xc0c7874  jal         func_31E1D0
    ctx->pc = 0x31CC60u;
    SET_GPR_U32(ctx, 31, 0x31CC68u);
    ctx->pc = 0x31E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1D0u, 0x31CC60u, 0x31CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC68u;
label_31cc68:
    // 0x31cc68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CC68u;
    {
        const bool branch_taken_0x31cc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cc68) {
            ctx->pc = 0x31CC80u;
            return;
        }
    }
    ctx->pc = 0x31CC70u;
    // 0x31cc70: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc74: 0x8ce41290  lw          $a0, 0x1290($a3)
    ctx->pc = 0x31cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4752)));
    // 0x31cc78: 0x34860004  ori         $a2, $a0, 0x4
    ctx->pc = 0x31cc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x31cc7c: 0xace61290  sw          $a2, 0x1290($a3)
    ctx->pc = 0x31cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4752), GPR_U32(ctx, 6));
    ctx->pc = 0x31cc80u;
}
