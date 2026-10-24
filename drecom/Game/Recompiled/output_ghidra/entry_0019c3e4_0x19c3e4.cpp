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

// Function: entry_0019c3e4
// Address: 0x19c3e4 - 0x19c468
void entry_0019c3e4_0x19c3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c3e4_0x19c3e4");
#endif

    switch (ctx->pc) {
        case 0x19c3f4u: goto label_19c3f4;
        case 0x19c400u: goto label_19c400;
        case 0x19c414u: goto label_19c414;
        case 0x19c420u: goto label_19c420;
        default: break;
    }

    ctx->pc = 0x19c3e4u;

    // 0x19c3e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c3e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c3e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c3ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19C3ECu;
    SET_GPR_U32(ctx, 31, 0x19C3F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19C3ECu, 0x19C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3F4u;
label_19c3f4:
    // 0x19c3f4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c3f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19C3F8u;
    SET_GPR_U32(ctx, 31, 0x19C400u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19C3F8u, 0x19C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C400u;
label_19c400:
    // 0x19c400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c404: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19c408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c40c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x19C40Cu;
    SET_GPR_U32(ctx, 31, 0x19C414u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x19C40Cu, 0x19C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C414u;
label_19c414:
    // 0x19c414: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c418: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19C418u;
    SET_GPR_U32(ctx, 31, 0x19C420u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19C418u, 0x19C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C420u;
label_19c420:
    // 0x19c420: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c424: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19c424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19c428: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19C428u;
    {
        const bool branch_taken_0x19c428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c428) {
            ctx->pc = 0x19C468u;
            return;
        }
    }
    ctx->pc = 0x19C430u;
    // 0x19c430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c434: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c438: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19c438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19c43c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c440: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19c440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c444: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c448: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19c448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c44c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c450: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19c450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c454: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x19c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19c458: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c45c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x19c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x19c460: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19C460u;
    {
        const bool branch_taken_0x19c460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c460) {
            ctx->pc = 0x19C468u;
            return;
        }
    }
    ctx->pc = 0x19C468u;
}
