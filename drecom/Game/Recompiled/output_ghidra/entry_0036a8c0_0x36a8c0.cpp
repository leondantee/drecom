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

// Function: entry_0036a8c0
// Address: 0x36a8c0 - 0x36a950
void entry_0036a8c0_0x36a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a8c0_0x36a8c0");
#endif

    switch (ctx->pc) {
        case 0x36a8d0u: goto label_36a8d0;
        case 0x36a8dcu: goto label_36a8dc;
        case 0x36a8f0u: goto label_36a8f0;
        case 0x36a8fcu: goto label_36a8fc;
        default: break;
    }

    ctx->pc = 0x36a8c0u;

    // 0x36a8c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a8c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a8c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A8C8u;
    SET_GPR_U32(ctx, 31, 0x36A8D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A8C8u, 0x36A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8D0u;
label_36a8d0:
    // 0x36a8d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A8D4u;
    SET_GPR_U32(ctx, 31, 0x36A8DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A8D4u, 0x36A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8DCu;
label_36a8dc:
    // 0x36a8dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a8e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a8e8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A8E8u;
    SET_GPR_U32(ctx, 31, 0x36A8F0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A8E8u, 0x36A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8F0u;
label_36a8f0:
    // 0x36a8f0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a8f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a8f4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A8F4u;
    SET_GPR_U32(ctx, 31, 0x36A8FCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A8F4u, 0x36A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8FCu;
label_36a8fc:
    // 0x36a8fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a900: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a904: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36A904u;
    {
        const bool branch_taken_0x36a904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a904) {
            ctx->pc = 0x36A950u;
            return;
        }
    }
    ctx->pc = 0x36A90Cu;
    // 0x36a90c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a914: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36a914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a91c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a920: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a924: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a928: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a930: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a934: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a938: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a93c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36a940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a944: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36a948: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36A948u;
    {
        const bool branch_taken_0x36a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a948) {
            ctx->pc = 0x36A950u;
            return;
        }
    }
    ctx->pc = 0x36A950u;
}
