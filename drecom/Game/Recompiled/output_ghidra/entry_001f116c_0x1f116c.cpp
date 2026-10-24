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

// Function: entry_001f116c
// Address: 0x1f116c - 0x1f1194
void entry_001f116c_0x1f116c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f116c_0x1f116c");
#endif

    switch (ctx->pc) {
        case 0x1f1190u: goto label_1f1190;
        default: break;
    }

    ctx->pc = 0x1f116cu;

    // 0x1f116c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1170: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1174: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1178: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f117c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f1180: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1184: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1184u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1188: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1188u;
    SET_GPR_U32(ctx, 31, 0x1F1190u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1188u, 0x1F1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1190u;
label_1f1190:
    // 0x1f1190: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1190u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f1194u;
}
