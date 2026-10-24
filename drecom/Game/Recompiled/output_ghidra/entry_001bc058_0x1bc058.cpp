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

// Function: entry_001bc058
// Address: 0x1bc058 - 0x1bc0a4
void entry_001bc058_0x1bc058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc058_0x1bc058");
#endif

    switch (ctx->pc) {
        case 0x1bc068u: goto label_1bc068;
        case 0x1bc0a0u: goto label_1bc0a0;
        default: break;
    }

    ctx->pc = 0x1bc058u;

    // 0x1bc058: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc05c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc05cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc060: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BC060u;
    SET_GPR_U32(ctx, 31, 0x1BC068u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BC060u, 0x1BC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC068u;
label_1bc068:
    // 0x1bc068: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc06c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc070: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1bc074: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC074u;
    {
        const bool branch_taken_0x1bc074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc074) {
            ctx->pc = 0x1BC0A4u;
            return;
        }
    }
    ctx->pc = 0x1BC07Cu;
    // 0x1bc07c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc080: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc084: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x1bc084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
    // 0x1bc088: 0x34e3999a  ori         $v1, $a3, 0x999A
    ctx->pc = 0x1bc088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x1bc08c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc090: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1bc094: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1bc094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1bc098: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BC098u;
    SET_GPR_U32(ctx, 31, 0x1BC0A0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC0A0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC0A0u) { return; }
    ctx->pc = 0x1BC0A0u;
label_1bc0a0:
    // 0x1bc0a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc0a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bc0a4u;
}
