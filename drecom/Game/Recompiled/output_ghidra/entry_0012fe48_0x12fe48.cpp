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

// Function: entry_0012fe48
// Address: 0x12fe48 - 0x12fe80
void entry_0012fe48_0x12fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fe48_0x12fe48");
#endif

    switch (ctx->pc) {
        case 0x12fe78u: goto label_12fe78;
        default: break;
    }

    ctx->pc = 0x12fe48u;

    // 0x12fe48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12fe4c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12fe50: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x12fe54: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x12fe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x12fe58: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12fe58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12fe5c: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12fe60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12fe60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x12fe64: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x12fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12fe68: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12fe68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12fe6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fe6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12fe70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12FE70u;
    SET_GPR_U32(ctx, 31, 0x12FE78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FE70u, 0x12FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE78u;
label_12fe78:
    // 0x12fe78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FEDCu;
            return;
        }
    }
    ctx->pc = 0x12FE80u;
}
