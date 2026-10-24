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

// Function: entry_0020e5e8
// Address: 0x20e5e8 - 0x20e668
void entry_0020e5e8_0x20e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e5e8_0x20e5e8");
#endif

    switch (ctx->pc) {
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e604u: goto label_20e604;
        case 0x20e614u: goto label_20e614;
        case 0x20e620u: goto label_20e620;
        default: break;
    }

    ctx->pc = 0x20e5e8u;

    // 0x20e5e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e5ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e5f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E5F0u;
    SET_GPR_U32(ctx, 31, 0x20E5F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E5F0u, 0x20E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5F8u;
label_20e5f8:
    // 0x20e5f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E5FCu;
    SET_GPR_U32(ctx, 31, 0x20E604u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E5FCu, 0x20E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E604u;
label_20e604:
    // 0x20e604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e608: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e60c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E60Cu;
    SET_GPR_U32(ctx, 31, 0x20E614u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E60Cu, 0x20E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E614u;
label_20e614:
    // 0x20e614: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e618: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E618u;
    SET_GPR_U32(ctx, 31, 0x20E620u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E618u, 0x20E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E620u;
label_20e620:
    // 0x20e620: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e624: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e628: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20E628u;
    {
        const bool branch_taken_0x20e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e628) {
            ctx->pc = 0x20E668u;
            return;
        }
    }
    ctx->pc = 0x20E630u;
    // 0x20e630: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e634: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20e634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e640: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e644: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e648: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e64c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e654: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e65c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e664: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20e668u;
}
