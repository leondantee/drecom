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

// Function: caseD_3
// Address: 0x14d138 - 0x14d1ac
void caseD_3_0x14d138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14d138");
#endif

    switch (ctx->pc) {
        case 0x14d15cu: goto label_14d15c;
        case 0x14d168u: goto label_14d168;
        case 0x14d17cu: goto label_14d17c;
        case 0x14d188u: goto label_14d188;
        default: break;
    }

    ctx->pc = 0x14d138u;

    // 0x14d138: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d13c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14d140: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x14d144: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d148: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x14d148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x14d14c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d150: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14d154: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D154u;
    SET_GPR_U32(ctx, 31, 0x14D15Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D154u, 0x14D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D15Cu;
label_14d15c:
    // 0x14d15c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d160: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D160u;
    SET_GPR_U32(ctx, 31, 0x14D168u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D160u, 0x14D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D168u;
label_14d168:
    // 0x14d168: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d16c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d170: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d174: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D174u;
    SET_GPR_U32(ctx, 31, 0x14D17Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D174u, 0x14D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D17Cu;
label_14d17c:
    // 0x14d17c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d180: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x14D180u;
    SET_GPR_U32(ctx, 31, 0x14D188u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14D180u, 0x14D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D188u;
label_14d188:
    // 0x14d188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D188u;
    {
        const bool branch_taken_0x14d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d188) {
            ctx->pc = 0x14D1ACu;
            return;
        }
    }
    ctx->pc = 0x14D190u;
    // 0x14d190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d194: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d198: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14d198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14d19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d1a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d1a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d1acu;
}
