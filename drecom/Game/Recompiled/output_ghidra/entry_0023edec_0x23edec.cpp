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

// Function: entry_0023edec
// Address: 0x23edec - 0x23ee10
void entry_0023edec_0x23edec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023edec_0x23edec");
#endif

    ctx->pc = 0x23edecu;

    // 0x23edec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23edf0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23edf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23edf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23edf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23edfc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23ee00: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23ee04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23ee04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23ee08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23EE08u;
    SET_GPR_U32(ctx, 31, 0x23EE10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23EE08u, 0x23EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE10u;
}
