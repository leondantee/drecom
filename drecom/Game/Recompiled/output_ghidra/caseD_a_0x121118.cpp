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

// Function: caseD_a
// Address: 0x121118 - 0x121190
void caseD_a_0x121118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x121118");
#endif

    switch (ctx->pc) {
        case 0x121140u: goto label_121140;
        case 0x121184u: goto label_121184;
        default: break;
    }

    ctx->pc = 0x121118u;

    // 0x121118: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12111c: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x12111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x121120: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121124: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121128: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12112c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x121130: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x121130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x121134: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121134u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121138: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121138u;
    SET_GPR_U32(ctx, 31, 0x121140u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121138u, 0x121140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121140u;
label_121140:
    // 0x121140: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121148: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12114c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12114cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121150: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x121154: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121158: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12115c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121160: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121164: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12116c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121170: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x121170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x121174: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121178: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x121178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x12117c: 0xc04d934  jal         func_1364D0
    ctx->pc = 0x12117Cu;
    SET_GPR_U32(ctx, 31, 0x121184u);
    ctx->pc = 0x1364D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D0u, 0x12117Cu, 0x121184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121184u;
label_121184:
    // 0x121184: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121188: 0x100006e9  b           . + 4 + (0x6E9 << 2)
    ctx->pc = 0x121188u;
    {
        const bool branch_taken_0x121188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121188) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121190u;
}
