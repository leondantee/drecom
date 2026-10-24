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

// Function: entry_00227224
// Address: 0x227224 - 0x22724c
void entry_00227224_0x227224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227224_0x227224");
#endif

    switch (ctx->pc) {
        case 0x227248u: goto label_227248;
        default: break;
    }

    ctx->pc = 0x227224u;

    // 0x227224: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227228: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22722c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x227230: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x227230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227234: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x227238: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22723c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22723cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227240: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227240u;
    SET_GPR_U32(ctx, 31, 0x227248u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227240u, 0x227248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227248u;
label_227248:
    // 0x227248: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227248u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22724cu;
}
