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

// Function: entry_0015ae78
// Address: 0x15ae78 - 0x15aed8
void entry_0015ae78_0x15ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ae78_0x15ae78");
#endif

    switch (ctx->pc) {
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aed0u: goto label_15aed0;
        default: break;
    }

    ctx->pc = 0x15ae78u;

    // 0x15ae78: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15ae7c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15ae80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15ae80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae84: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ae88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15ae8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15ae90: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x15ae94: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15ae98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ae9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15aea0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15aea4: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15aea8: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x15AEA8u;
    SET_GPR_U32(ctx, 31, 0x15AEB0u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x15AEB0u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15AEB0u) { return; }
    ctx->pc = 0x15AEB0u;
label_15aeb0:
    // 0x15aeb0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x15aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x15aeb4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15aeb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15aeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15aebc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15aebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15aec0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15aec4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x15aec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15aec8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x15AEC8u;
    SET_GPR_U32(ctx, 31, 0x15AED0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x15AEC8u, 0x15AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AED0u;
label_15aed0:
    // 0x15aed0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AF00u;
            return;
        }
    }
    ctx->pc = 0x15AED8u;
}
