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

// Function: Message_move
// Address: 0x296360 - 0x2963b0
void Message_move_0x296360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Message_move_0x296360");
#endif

    switch (ctx->pc) {
        case 0x296360u: goto label_296360;
        case 0x296364u: goto label_296364;
        case 0x296368u: goto label_296368;
        case 0x29636cu: goto label_29636c;
        case 0x296370u: goto label_296370;
        case 0x296374u: goto label_296374;
        case 0x296378u: goto label_296378;
        case 0x29637cu: goto label_29637c;
        case 0x296380u: goto label_296380;
        case 0x296384u: goto label_296384;
        case 0x296388u: goto label_296388;
        case 0x29638cu: goto label_29638c;
        case 0x296390u: goto label_296390;
        case 0x296394u: goto label_296394;
        case 0x296398u: goto label_296398;
        case 0x29639cu: goto label_29639c;
        case 0x2963a0u: goto label_2963a0;
        case 0x2963a4u: goto label_2963a4;
        case 0x2963a8u: goto label_2963a8;
        case 0x2963acu: goto label_2963ac;
        default: break;
    }

    ctx->pc = 0x296360u;

label_296360:
    // 0x296360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_296364:
    // 0x296364: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x296364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_296368:
    // 0x296368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29636c:
    // 0x29636c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x29636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
label_296370:
    // 0x296370: 0x2450cb10  addiu       $s0, $v0, -0x34F0
    ctx->pc = 0x296370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
label_296374:
    // 0x296374: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x296374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_296378:
    // 0x296378: 0x920269c9  lbu         $v0, 0x69C9($s0)
    ctx->pc = 0x296378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27081)));
label_29637c:
    // 0x29637c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_296380:
    // 0x296380: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x296380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_296384:
    // 0x296384: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x296384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_296388:
    // 0x296388: 0x24426890  addiu       $v0, $v0, 0x6890
    ctx->pc = 0x296388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26768));
label_29638c:
    // 0x29638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_296390:
    // 0x296390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x296390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_296394:
    // 0x296394: 0x40f809  jalr        $v0
label_296398:
    if (ctx->pc == 0x296398u) {
        ctx->pc = 0x29639Cu;
        goto label_29639c;
    }
    ctx->pc = 0x296394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29639Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296394u, 0x29639Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29639Cu;
label_29639c:
    // 0x29639c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29639cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2963a0:
    // 0x2963a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2963a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2963a4:
    // 0x2963a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2963a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2963a8:
    // 0x2963a8: 0x3e00008  jr          $ra
label_2963ac:
    if (ctx->pc == 0x2963ACu) {
        ctx->pc = 0x2963B0u;
        goto label_fallthrough_0x2963a8;
    }
    ctx->pc = 0x2963A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2963a8:
    ctx->pc = 0x2963B0u;
}
