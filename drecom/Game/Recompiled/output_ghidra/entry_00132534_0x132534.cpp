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

// Function: entry_00132534
// Address: 0x132534 - 0x132564
void entry_00132534_0x132534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132534_0x132534");
#endif

    switch (ctx->pc) {
        case 0x13255cu: goto label_13255c;
        default: break;
    }

    ctx->pc = 0x132534u;

    // 0x132534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132538: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x132538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13253c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x132540: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x132540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x132544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x132544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x132548: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x132548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x13254c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x13254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x132550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x132550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132554: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x132554u;
    SET_GPR_U32(ctx, 31, 0x13255Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x132554u, 0x13255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13255Cu;
label_13255c:
    // 0x13255c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13255Cu;
    {
        const bool branch_taken_0x13255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13255c) {
            ctx->pc = 0x1325BCu;
            return;
        }
    }
    ctx->pc = 0x132564u;
}
