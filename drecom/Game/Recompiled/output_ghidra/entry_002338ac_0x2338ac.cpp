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

// Function: entry_002338ac
// Address: 0x2338ac - 0x233918
void entry_002338ac_0x2338ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002338ac_0x2338ac");
#endif

    switch (ctx->pc) {
        case 0x2338c0u: goto label_2338c0;
        case 0x2338d4u: goto label_2338d4;
        case 0x233908u: goto label_233908;
        default: break;
    }

    ctx->pc = 0x2338acu;

    // 0x2338ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2338acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2338b0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2338b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2338b8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x2338B8u;
    SET_GPR_U32(ctx, 31, 0x2338C0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2338B8u, 0x2338C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2338c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2338c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2338cc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2338CCu;
    SET_GPR_U32(ctx, 31, 0x2338D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2338CCu, 0x2338D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338D4u;
label_2338d4:
    // 0x2338d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2338d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2338d8: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2338d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2338dc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2338DCu;
    {
        const bool branch_taken_0x2338dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2338dc) {
            ctx->pc = 0x233918u;
            return;
        }
    }
    ctx->pc = 0x2338E4u;
    // 0x2338e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2338e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2338e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2338ec: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2338ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2338f0: 0x24020502  addiu       $v0, $zero, 0x502
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x2338f4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2338f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2338f8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2338fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x233900: 0xc0965d0  jal         func_259740
    ctx->pc = 0x233900u;
    SET_GPR_U32(ctx, 31, 0x233908u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x233900u, 0x233908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233908u;
label_233908:
    // 0x233908: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x233908u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23390c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233910: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233914: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x233914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x233918u;
}
