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

// Function: entry_0023d0e0
// Address: 0x23d0e0 - 0x23d104
void entry_0023d0e0_0x23d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d0e0_0x23d0e0");
#endif

    ctx->pc = 0x23d0e0u;

    // 0x23d0e0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d0e4: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x23d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x23d0e8: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x23d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x23d0ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d0f0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x23d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23d0f4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x23d0f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d0f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d0fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D0FCu;
    SET_GPR_U32(ctx, 31, 0x23D104u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D0FCu, 0x23D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D104u;
}
