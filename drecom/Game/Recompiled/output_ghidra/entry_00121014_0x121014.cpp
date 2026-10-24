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

// Function: entry_00121014
// Address: 0x121014 - 0x121078
void entry_00121014_0x121014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121014_0x121014");
#endif

    switch (ctx->pc) {
        case 0x12103cu: goto label_12103c;
        default: break;
    }

    ctx->pc = 0x121014u;

    // 0x121014: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121018: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x12101c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121020: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121024: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121028: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x12102c: 0x24a505b0  addiu       $a1, $a1, 0x5B0
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x121030: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121030u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121034: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121034u;
    SET_GPR_U32(ctx, 31, 0x12103Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121034u, 0x12103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12103Cu;
label_12103c:
    // 0x12103c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12103cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121044: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121048: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x121048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12104c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x121050: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121054: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x121058: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12105c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x12105cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121060: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121064: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121064u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121068: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12106c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12106cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x121070: 0x1000072f  b           . + 4 + (0x72F << 2)
    ctx->pc = 0x121070u;
    {
        const bool branch_taken_0x121070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121070) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121078u;
}
