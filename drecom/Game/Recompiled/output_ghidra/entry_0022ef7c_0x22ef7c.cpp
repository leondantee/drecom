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

// Function: entry_0022ef7c
// Address: 0x22ef7c - 0x22efa0
void entry_0022ef7c_0x22ef7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ef7c_0x22ef7c");
#endif

    ctx->pc = 0x22ef7cu;

    // 0x22ef7c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ef80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ef84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef8c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22ef90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ef94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ef94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ef98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22EF98u;
    SET_GPR_U32(ctx, 31, 0x22EFA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22EF98u, 0x22EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFA0u;
}
