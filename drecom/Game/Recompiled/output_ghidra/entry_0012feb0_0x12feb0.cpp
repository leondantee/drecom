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

// Function: entry_0012feb0
// Address: 0x12feb0 - 0x12fedc
void entry_0012feb0_0x12feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012feb0_0x12feb0");
#endif

    ctx->pc = 0x12feb0u;

    // 0x12feb0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12feb4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12feb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12febc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12fec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12fec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12fec4: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12fec8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x12fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12fecc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x12feccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x12fed0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12fed0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12fed4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12FED4u;
    SET_GPR_U32(ctx, 31, 0x12FEDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12FED4u, 0x12FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FEDCu;
}
