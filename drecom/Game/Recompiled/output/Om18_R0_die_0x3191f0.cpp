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

// Function: Om18_R0_die
// Address: 0x3191f0 - 0x319288
void Om18_R0_die_0x3191f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_R0_die_0x3191f0");
#endif

    switch (ctx->pc) {
        case 0x3191f0u: goto label_3191f0;
        case 0x3191f4u: goto label_3191f4;
        case 0x3191f8u: goto label_3191f8;
        case 0x3191fcu: goto label_3191fc;
        case 0x319200u: goto label_319200;
        case 0x319204u: goto label_319204;
        case 0x319208u: goto label_319208;
        case 0x31920cu: goto label_31920c;
        case 0x319210u: goto label_319210;
        case 0x319214u: goto label_319214;
        case 0x319218u: goto label_319218;
        case 0x31921cu: goto label_31921c;
        case 0x319220u: goto label_319220;
        case 0x319224u: goto label_319224;
        case 0x319228u: goto label_319228;
        case 0x31922cu: goto label_31922c;
        case 0x319230u: goto label_319230;
        case 0x319234u: goto label_319234;
        case 0x319238u: goto label_319238;
        case 0x31923cu: goto label_31923c;
        case 0x319240u: goto label_319240;
        case 0x319244u: goto label_319244;
        case 0x319248u: goto label_319248;
        case 0x31924cu: goto label_31924c;
        case 0x319250u: goto label_319250;
        case 0x319254u: goto label_319254;
        case 0x319258u: goto label_319258;
        case 0x31925cu: goto label_31925c;
        case 0x319260u: goto label_319260;
        case 0x319264u: goto label_319264;
        case 0x319268u: goto label_319268;
        case 0x31926cu: goto label_31926c;
        case 0x319270u: goto label_319270;
        case 0x319274u: goto label_319274;
        case 0x319278u: goto label_319278;
        case 0x31927cu: goto label_31927c;
        case 0x319280u: goto label_319280;
        case 0x319284u: goto label_319284;
        default: break;
    }

    ctx->pc = 0x3191f0u;

label_3191f0:
    // 0x3191f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3191f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3191f4:
    // 0x3191f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3191f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3191f8:
    // 0x3191f8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3191f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3191fc:
    // 0x3191fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3191fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_319200:
    // 0x319200: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x319200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_319204:
    // 0x319204: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x319204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_319208:
    // 0x319208: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x319208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31920c:
    // 0x31920c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31920cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_319210:
    // 0x319210: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x319210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319214:
    // 0x319214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x319214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319218:
    // 0x319218: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x319218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_31921c:
    // 0x31921c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_319220:
    // 0x319220: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x319220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_319224:
    // 0x319224: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x319224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_319228:
    // 0x319228: 0x24429c30  addiu       $v0, $v0, -0x63D0
    ctx->pc = 0x319228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941744));
label_31922c:
    // 0x31922c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_319230:
    // 0x319230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x319230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319234:
    // 0x319234: 0x40f809  jalr        $v0
label_319238:
    if (ctx->pc == 0x319238u) {
        ctx->pc = 0x31923Cu;
        goto label_31923c;
    }
    ctx->pc = 0x319234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31923Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319234u, 0x31923Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31923Cu;
label_31923c:
    // 0x31923c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319240:
    // 0x319240: 0x8c6312a8  lw          $v1, 0x12A8($v1)
    ctx->pc = 0x319240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4776)));
label_319244:
    // 0x319244: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_319248:
    if (ctx->pc == 0x319248u) {
        ctx->pc = 0x31924Cu;
        goto label_31924c;
    }
    ctx->pc = 0x319244u;
    {
        const bool branch_taken_0x319244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319244) {
            ctx->pc = 0x319278u;
            goto label_319278;
        }
    }
    ctx->pc = 0x31924Cu;
label_31924c:
    // 0x31924c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319250:
    // 0x319250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x319250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319254:
    // 0x319254: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x319254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_319258:
    // 0x319258: 0xc079140  jal         func_1E4500
label_31925c:
    if (ctx->pc == 0x31925Cu) {
        ctx->pc = 0x319260u;
        goto label_319260;
    }
    ctx->pc = 0x319258u;
    SET_GPR_U32(ctx, 31, 0x319260u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x319258u, 0x319260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319260u;
label_319260:
    // 0x319260: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x319260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319264:
    // 0x319264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x319264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319268:
    // 0x319268: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x319268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_31926c:
    // 0x31926c: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x31926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_319270:
    // 0x319270: 0xc079140  jal         func_1E4500
label_319274:
    if (ctx->pc == 0x319274u) {
        ctx->pc = 0x319278u;
        goto label_319278;
    }
    ctx->pc = 0x319270u;
    SET_GPR_U32(ctx, 31, 0x319278u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x319270u, 0x319278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319278u;
label_319278:
    // 0x319278: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x319278u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31927c:
    // 0x31927c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31927cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_319280:
    // 0x319280: 0x3e00008  jr          $ra
label_319284:
    if (ctx->pc == 0x319284u) {
        ctx->pc = 0x319288u;
        goto label_fallthrough_0x319280;
    }
    ctx->pc = 0x319280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319280:
    ctx->pc = 0x319288u;
}
