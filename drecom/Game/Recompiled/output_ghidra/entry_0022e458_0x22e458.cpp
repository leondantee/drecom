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

// Function: entry_0022e458
// Address: 0x22e458 - 0x22e47c
void entry_0022e458_0x22e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e458_0x22e458");
#endif

    ctx->pc = 0x22e458u;

    // 0x22e458: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22e45c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22e45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22e460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e468: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x22e46c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22e470: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22e470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22e474: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22E474u;
    SET_GPR_U32(ctx, 31, 0x22E47Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22E474u, 0x22E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E47Cu;
}
