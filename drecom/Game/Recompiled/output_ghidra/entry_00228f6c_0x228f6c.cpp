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

// Function: entry_00228f6c
// Address: 0x228f6c - 0x228f90
void entry_00228f6c_0x228f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228f6c_0x228f6c");
#endif

    ctx->pc = 0x228f6cu;

    // 0x228f6c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x228f70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x228f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x228f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x228f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228f78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228f7c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x228f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x228f80: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228f84: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228f84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228f88: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228F88u;
    SET_GPR_U32(ctx, 31, 0x228F90u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228F88u, 0x228F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F90u;
}
