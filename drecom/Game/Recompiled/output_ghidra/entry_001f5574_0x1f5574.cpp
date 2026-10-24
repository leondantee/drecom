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

// Function: entry_001f5574
// Address: 0x1f5574 - 0x1f5598
void entry_001f5574_0x1f5574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5574_0x1f5574");
#endif

    ctx->pc = 0x1f5574u;

    // 0x1f5574: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5578: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f557c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f5580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f5580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f5584: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1f5584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x1f5588: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f5588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f558c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f558cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5590: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F5590u;
    SET_GPR_U32(ctx, 31, 0x1F5598u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F5590u, 0x1F5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5598u;
}
