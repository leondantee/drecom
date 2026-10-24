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

// Function: entry_0023321c
// Address: 0x23321c - 0x2332b0
void entry_0023321c_0x23321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023321c_0x23321c");
#endif

    switch (ctx->pc) {
        case 0x233230u: goto label_233230;
        case 0x233240u: goto label_233240;
        case 0x2332acu: goto label_2332ac;
        default: break;
    }

    ctx->pc = 0x23321cu;

    // 0x23321c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23321cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233220: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233224: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x233224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x233228: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x233228u;
    SET_GPR_U32(ctx, 31, 0x233230u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x233228u, 0x233230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233230u;
label_233230:
    // 0x233230: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x233230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233234: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x233234u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x233238: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x233238u;
    SET_GPR_U32(ctx, 31, 0x233240u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x233238u, 0x233240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233240u;
label_233240:
    // 0x233240: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x233240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x233244: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x233244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x233248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23324c: 0x15030047  bne         $t0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x23324Cu;
    {
        const bool branch_taken_0x23324c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x23324c) {
            ctx->pc = 0x23336Cu;
            return;
        }
    }
    ctx->pc = 0x233254u;
    // 0x233254: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x233254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233258: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x23325c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23325cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x233260: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x233260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x233264: 0x18600041  blez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x233264u;
    {
        const bool branch_taken_0x233264 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x233264) {
            ctx->pc = 0x23336Cu;
            return;
        }
    }
    ctx->pc = 0x23326Cu;
    // 0x23326c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x233270: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x233270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x233274: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x233274u;
    {
        const bool branch_taken_0x233274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233274) {
            ctx->pc = 0x23336Cu;
            return;
        }
    }
    ctx->pc = 0x23327Cu;
    // 0x23327c: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233280: 0x862510a6  lh          $a1, 0x10A6($s1)
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x233284: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x233284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x233288: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x233288u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x23328c: 0x1cc00008  bgtz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23328Cu;
    {
        const bool branch_taken_0x23328c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x23328c) {
            ctx->pc = 0x2332B0u;
            return;
        }
    }
    ctx->pc = 0x233294u;
    // 0x233294: 0x24111770  addiu       $s1, $zero, 0x1770
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x233298: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x233298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x23329c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2332a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2332a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2332a4: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x2332A4u;
    SET_GPR_U32(ctx, 31, 0x2332ACu);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x2332A4u, 0x2332ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332ACu;
label_2332ac:
    // 0x2332ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2332acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2332b0u;
}
