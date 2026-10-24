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

// Function: entry_0036d0dc
// Address: 0x36d0dc - 0x36d144
void entry_0036d0dc_0x36d0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d0dc_0x36d0dc");
#endif

    switch (ctx->pc) {
        case 0x36d0ecu: goto label_36d0ec;
        case 0x36d0f8u: goto label_36d0f8;
        case 0x36d104u: goto label_36d104;
        default: break;
    }

    ctx->pc = 0x36d0dcu;

    // 0x36d0dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36d0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d0e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36D0E4u;
    SET_GPR_U32(ctx, 31, 0x36D0ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36D0E4u, 0x36D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0ECu;
label_36d0ec:
    // 0x36d0ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36D0F0u;
    SET_GPR_U32(ctx, 31, 0x36D0F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36D0F0u, 0x36D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0F8u;
label_36d0f8:
    // 0x36d0f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d0fc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36D0FCu;
    SET_GPR_U32(ctx, 31, 0x36D104u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36D0FCu, 0x36D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D104u;
label_36d104:
    // 0x36d104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d108: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36d108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36d10c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36D10Cu;
    {
        const bool branch_taken_0x36d10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d10c) {
            ctx->pc = 0x36D144u;
            return;
        }
    }
    ctx->pc = 0x36D114u;
    // 0x36d114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d11c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d124: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36d124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d12c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36d12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36d134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d140: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36d140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x36d144u;
}
