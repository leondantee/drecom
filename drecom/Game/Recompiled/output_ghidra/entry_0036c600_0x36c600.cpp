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

// Function: entry_0036c600
// Address: 0x36c600 - 0x36c678
void entry_0036c600_0x36c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c600_0x36c600");
#endif

    switch (ctx->pc) {
        case 0x36c610u: goto label_36c610;
        case 0x36c61cu: goto label_36c61c;
        case 0x36c62cu: goto label_36c62c;
        case 0x36c638u: goto label_36c638;
        default: break;
    }

    ctx->pc = 0x36c600u;

    // 0x36c600: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c604: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c604u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c608: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C608u;
    SET_GPR_U32(ctx, 31, 0x36C610u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C608u, 0x36C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C610u;
label_36c610:
    // 0x36c610: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c614: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C614u;
    SET_GPR_U32(ctx, 31, 0x36C61Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C614u, 0x36C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C61Cu;
label_36c61c:
    // 0x36c61c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c620: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c624: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36C624u;
    SET_GPR_U32(ctx, 31, 0x36C62Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36C624u, 0x36C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C62Cu;
label_36c62c:
    // 0x36c62c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c630: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C630u;
    SET_GPR_U32(ctx, 31, 0x36C638u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C630u, 0x36C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C638u;
label_36c638:
    // 0x36c638: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c63c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C640u;
    {
        const bool branch_taken_0x36c640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c640) {
            ctx->pc = 0x36C678u;
            return;
        }
    }
    ctx->pc = 0x36C648u;
    // 0x36c648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c64c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c650: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c650u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c654: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c658: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c65c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c660: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c664: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c668: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c66c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c66cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c670: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c674: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36c678u;
}
