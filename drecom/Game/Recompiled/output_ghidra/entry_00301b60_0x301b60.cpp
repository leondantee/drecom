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

// Function: entry_00301b60
// Address: 0x301b60 - 0x301ba0
void entry_00301b60_0x301b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301b60_0x301b60");
#endif

    ctx->pc = 0x301b60u;

    // 0x301b60: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x301b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x301b64: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x301b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x301b68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x301b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x301b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301b70: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x301b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x301b74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301b74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301b78: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x301b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x301b7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x301b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x301b80: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x301b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x301b84: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x301b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x301b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301b8c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301b90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x301b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x301b94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x301b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301b98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x301B98u;
    SET_GPR_U32(ctx, 31, 0x301BA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x301B98u, 0x301BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301BA0u;
}
