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

// Function: entry_00264718
// Address: 0x264718 - 0x264784
void entry_00264718_0x264718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264718_0x264718");
#endif

    switch (ctx->pc) {
        case 0x26475cu: goto label_26475c;
        case 0x264768u: goto label_264768;
        default: break;
    }

    ctx->pc = 0x264718u;

    // 0x264718: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x26471c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x264720: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x264720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x264724: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264728: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26472c: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x26472cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x264730: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x264730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x264734: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264738: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x264738u;
    {
        const bool branch_taken_0x264738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264738) {
            ctx->pc = 0x264800u;
            return;
        }
    }
    ctx->pc = 0x264740u;
    // 0x264740: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264744: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x264744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264748: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x264748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26474c: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x26474cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x264750: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x264750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264754: 0xc05e858  jal         func_17A160
    ctx->pc = 0x264754u;
    SET_GPR_U32(ctx, 31, 0x26475Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x264754u, 0x26475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26475Cu;
label_26475c:
    // 0x26475c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x26475cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264760: 0xc05e964  jal         func_17A590
    ctx->pc = 0x264760u;
    SET_GPR_U32(ctx, 31, 0x264768u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x264760u, 0x264768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264768u;
label_264768:
    // 0x264768: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x264768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
    // 0x26476c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x26476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x264770: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x264770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x264774: 0xafb50118  sw          $s5, 0x118($sp)
    ctx->pc = 0x264774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 21));
    // 0x264778: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x264778u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26477c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26477Cu;
    {
        const bool branch_taken_0x26477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26477c) {
            ctx->pc = 0x2647B0u;
            return;
        }
    }
    ctx->pc = 0x264784u;
}
