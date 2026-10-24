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

// Function: entry_0023a2a8
// Address: 0x23a2a8 - 0x23a2cc
void entry_0023a2a8_0x23a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a2a8_0x23a2a8");
#endif

    ctx->pc = 0x23a2a8u;

    // 0x23a2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a2ac: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23a2b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23a2b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23a2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a2b8: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23a2bc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23a2c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23a2c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23a2c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23A2C4u;
    SET_GPR_U32(ctx, 31, 0x23A2CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23A2C4u, 0x23A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2CCu;
}
