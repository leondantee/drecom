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

// Function: entry_001386f8
// Address: 0x1386f8 - 0x138718
void entry_001386f8_0x1386f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001386f8_0x1386f8");
#endif

    switch (ctx->pc) {
        case 0x138714u: goto label_138714;
        default: break;
    }

    ctx->pc = 0x1386f8u;

    // 0x1386f8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1386fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1386fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x138700: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138704: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x138704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138708: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13870c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x13870Cu;
    SET_GPR_U32(ctx, 31, 0x138714u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x13870Cu, 0x138714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138714u;
label_138714:
    // 0x138714: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x138718u;
}
