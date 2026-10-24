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

// Function: entry_00131480
// Address: 0x131480 - 0x1314a8
void entry_00131480_0x131480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131480_0x131480");
#endif

    ctx->pc = 0x131480u;

    // 0x131480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131484: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131488: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13148c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131494: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x131498: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13149c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13149cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1314a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1314A0u;
    SET_GPR_U32(ctx, 31, 0x1314A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1314A0u, 0x1314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314A8u;
}
