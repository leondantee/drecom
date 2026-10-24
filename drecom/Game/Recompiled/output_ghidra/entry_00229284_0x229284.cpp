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

// Function: entry_00229284
// Address: 0x229284 - 0x2292ac
void entry_00229284_0x229284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229284_0x229284");
#endif

    ctx->pc = 0x229284u;

    // 0x229284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229288: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22928c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x22928cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x229290: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x229290u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229294: 0x24020522  addiu       $v0, $zero, 0x522
    ctx->pc = 0x229294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x229298: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x229298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22929c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2292a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2292a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2292a4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2292A4u;
    SET_GPR_U32(ctx, 31, 0x2292ACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2292A4u, 0x2292ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292ACu;
}
