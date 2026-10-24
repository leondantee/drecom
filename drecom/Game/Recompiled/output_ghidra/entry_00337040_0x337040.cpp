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

// Function: entry_00337040
// Address: 0x337040 - 0x3370b0
void entry_00337040_0x337040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337040_0x337040");
#endif

    switch (ctx->pc) {
        case 0x33705cu: goto label_33705c;
        case 0x337080u: goto label_337080;
        default: break;
    }

    ctx->pc = 0x337040u;

    // 0x337040: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337044: 0x24444c18  addiu       $a0, $v0, 0x4C18
    ctx->pc = 0x337044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x337048: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33704c: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x33704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x337050: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x337054: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x337054u;
    SET_GPR_U32(ctx, 31, 0x33705Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33705Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33705Cu) { return; }
    ctx->pc = 0x33705Cu;
label_33705c:
    // 0x33705c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x33705cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x337060: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337064: 0x24444bf0  addiu       $a0, $v0, 0x4BF0
    ctx->pc = 0x337064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
    // 0x337068: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x337068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x33706c: 0x2445c324  addiu       $a1, $v0, -0x3CDC
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951716));
    // 0x337070: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x337070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x337074: 0x24464c10  addiu       $a2, $v0, 0x4C10
    ctx->pc = 0x337074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
    // 0x337078: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x337078u;
    SET_GPR_U32(ctx, 31, 0x337080u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x337078u, 0x337080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337080u;
label_337080:
    // 0x337080: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x337080u;
    {
        const bool branch_taken_0x337080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337080) {
            ctx->pc = 0x3375ECu;
            return;
        }
    }
    ctx->pc = 0x337088u;
    // 0x337088: 0x8e225dd4  lw          $v0, 0x5DD4($s1)
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24020)));
    // 0x33708c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337090: 0xae225dd4  sw          $v0, 0x5DD4($s1)
    ctx->pc = 0x337090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 2));
    // 0x337094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337098: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337098u;
    {
        const bool branch_taken_0x337098 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x337098) {
            ctx->pc = 0x3370B0u;
            return;
        }
    }
    ctx->pc = 0x3370A0u;
    // 0x3370a0: 0x26e2000c  addiu       $v0, $s7, 0xC
    ctx->pc = 0x3370a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x3370a4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3370a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x3370a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3370A8u;
    {
        const bool branch_taken_0x3370a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3370a8) {
            ctx->pc = 0x3370C0u;
            return;
        }
    }
    ctx->pc = 0x3370B0u;
}
