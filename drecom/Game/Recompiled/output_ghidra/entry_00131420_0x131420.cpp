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

// Function: entry_00131420
// Address: 0x131420 - 0x131450
void entry_00131420_0x131420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131420_0x131420");
#endif

    switch (ctx->pc) {
        case 0x131448u: goto label_131448;
        default: break;
    }

    ctx->pc = 0x131420u;

    // 0x131420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131424: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131428: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13142c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131430: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131434: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131438: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13143c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13143cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131440: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131440u;
    SET_GPR_U32(ctx, 31, 0x131448u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131440u, 0x131448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131448u;
label_131448:
    // 0x131448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131448u;
    {
        const bool branch_taken_0x131448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131448) {
            ctx->pc = 0x1314A8u;
            return;
        }
    }
    ctx->pc = 0x131450u;
}
