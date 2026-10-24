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

// Function: entry_0031dda0
// Address: 0x31dda0 - 0x31ddc4
void entry_0031dda0_0x31dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dda0_0x31dda0");
#endif

    ctx->pc = 0x31dda0u;

    // 0x31dda0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x31dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x31dda4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31dda8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31dda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31ddac: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x31ddb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x31ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31ddb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x31ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x31ddb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31ddb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ddbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x31DDBCu;
    SET_GPR_U32(ctx, 31, 0x31DDC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x31DDBCu, 0x31DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDC4u;
}
