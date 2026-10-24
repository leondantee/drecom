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

// Function: entry_00248788
// Address: 0x248788 - 0x2487ac
void entry_00248788_0x248788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248788_0x248788");
#endif

    ctx->pc = 0x248788u;

    // 0x248788: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x248788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x24878c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x24878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x248790: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248798: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x24879c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x24879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2487a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2487a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2487a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2487A4u;
    SET_GPR_U32(ctx, 31, 0x2487ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2487A4u, 0x2487ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487ACu;
}
