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

// Function: entry_0030a8a8
// Address: 0x30a8a8 - 0x30a918
void entry_0030a8a8_0x30a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a8a8_0x30a8a8");
#endif

    switch (ctx->pc) {
        case 0x30a8b8u: goto label_30a8b8;
        case 0x30a8c4u: goto label_30a8c4;
        case 0x30a8d4u: goto label_30a8d4;
        case 0x30a8e0u: goto label_30a8e0;
        default: break;
    }

    ctx->pc = 0x30a8a8u;

    // 0x30a8a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a8acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a8b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30A8B0u;
    SET_GPR_U32(ctx, 31, 0x30A8B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30A8B0u, 0x30A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B8u;
label_30a8b8:
    // 0x30a8b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8bc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30A8BCu;
    SET_GPR_U32(ctx, 31, 0x30A8C4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30A8BCu, 0x30A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8C4u;
label_30a8c4:
    // 0x30a8c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30a8cc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30A8CCu;
    SET_GPR_U32(ctx, 31, 0x30A8D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30A8CCu, 0x30A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8D4u;
label_30a8d4:
    // 0x30a8d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8d8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30A8D8u;
    SET_GPR_U32(ctx, 31, 0x30A8E0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30A8D8u, 0x30A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8E0u;
label_30a8e0:
    // 0x30a8e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30a8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30a8e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A8E8u;
    {
        const bool branch_taken_0x30a8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a8e8) {
            ctx->pc = 0x30A93Cu;
            return;
        }
    }
    ctx->pc = 0x30A8F0u;
    // 0x30a8f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x30a8f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a8f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a8fc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x30a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x30a900: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30a904: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30a904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30a908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30a90c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x30a90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a910: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30A910u;
    {
        const bool branch_taken_0x30a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a910) {
            ctx->pc = 0x30A93Cu;
            return;
        }
    }
    ctx->pc = 0x30A918u;
}
