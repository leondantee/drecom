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

// Function: SndStatusVolSet
// Address: 0x19fcb0 - 0x19fd28
void SndStatusVolSet_0x19fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndStatusVolSet_0x19fcb0");
#endif

    switch (ctx->pc) {
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fd04u: goto label_19fd04;
        case 0x19fd18u: goto label_19fd18;
        default: break;
    }

    ctx->pc = 0x19fcb0u;

    // 0x19fcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fcb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19fcb8: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x19fcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x19fcbc: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x19fcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19fcc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19FCC0u;
    {
        const bool branch_taken_0x19fcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fcc0) {
            ctx->pc = 0x19FCF4u;
            goto label_19fcf4;
        }
    }
    ctx->pc = 0x19FCC8u;
    // 0x19fcc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fcd0: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FCD0u;
    SET_GPR_U32(ctx, 31, 0x19FCD8u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FCD0u, 0x19FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCD8u;
label_19fcd8:
    // 0x19fcd8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19FCD8u;
    {
        const bool branch_taken_0x19fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fcd8) {
            ctx->pc = 0x19FD18u;
            goto label_19fd18;
        }
    }
    ctx->pc = 0x19FCE0u;
    // 0x19fce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fce4: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FCE4u;
    SET_GPR_U32(ctx, 31, 0x19FCECu);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FCE4u, 0x19FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCECu;
label_19fcec:
    // 0x19fcec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FD18u;
            goto label_19fd18;
        }
    }
    ctx->pc = 0x19FCF4u;
label_19fcf4:
    // 0x19fcf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fcf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fcfc: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FCFCu;
    SET_GPR_U32(ctx, 31, 0x19FD04u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FCFCu, 0x19FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD04u;
label_19fd04:
    // 0x19fd04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FD04u;
    {
        const bool branch_taken_0x19fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd04) {
            ctx->pc = 0x19FD18u;
            goto label_19fd18;
        }
    }
    ctx->pc = 0x19FD0Cu;
    // 0x19fd0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fd10: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19FD10u;
    SET_GPR_U32(ctx, 31, 0x19FD18u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19FD10u, 0x19FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD18u;
label_19fd18:
    // 0x19fd18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19fd18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19fd1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19fd20: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FD28u;
}
