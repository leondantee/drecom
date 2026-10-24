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

// Function: entry_00252ffc
// Address: 0x252ffc - 0x2530a4
void entry_00252ffc_0x252ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252ffc_0x252ffc");
#endif

    switch (ctx->pc) {
        case 0x25307cu: goto label_25307c;
        default: break;
    }

    ctx->pc = 0x252ffcu;

    // 0x252ffc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253000: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x253000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x253004: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253008: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25300c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25300cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253010: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253014: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253018: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x25301c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25301cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253020: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x253024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253028: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x253028u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25302c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x253030: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253030u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253034: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x253034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x253038: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25303c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x25303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x253040: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253044: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x253044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x253048: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253048u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25304c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x253050: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253054: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x253054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x253058: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253058u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25305c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x25305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x253060: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253060u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253064: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x253064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253068: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x253068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25306c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x25306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x253070: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x253070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x253074: 0xc059e1c  jal         func_167870
    ctx->pc = 0x253074u;
    SET_GPR_U32(ctx, 31, 0x25307Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x253074u, 0x25307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25307Cu;
label_25307c:
    // 0x25307c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25307cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253080: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x253080u;
    {
        const bool branch_taken_0x253080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x253080) {
            ctx->pc = 0x2530A4u;
            return;
        }
    }
    ctx->pc = 0x253088u;
    // 0x253088: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25308c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x25308cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x253090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253094: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253098: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x253098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x25309c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x25309Cu;
    {
        const bool branch_taken_0x25309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25309c) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x2530A4u;
}
