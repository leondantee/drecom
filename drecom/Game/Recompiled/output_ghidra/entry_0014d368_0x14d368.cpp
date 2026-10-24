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

// Function: entry_0014d368
// Address: 0x14d368 - 0x14d3cc
void entry_0014d368_0x14d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d368_0x14d368");
#endif

    switch (ctx->pc) {
        case 0x14d378u: goto label_14d378;
        case 0x14d384u: goto label_14d384;
        case 0x14d398u: goto label_14d398;
        case 0x14d3a4u: goto label_14d3a4;
        default: break;
    }

    ctx->pc = 0x14d368u;

    // 0x14d368: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d370: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D370u;
    SET_GPR_U32(ctx, 31, 0x14D378u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D370u, 0x14D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D378u;
label_14d378:
    // 0x14d378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d37c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D37Cu;
    SET_GPR_U32(ctx, 31, 0x14D384u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D37Cu, 0x14D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D384u;
label_14d384:
    // 0x14d384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d390: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D390u;
    SET_GPR_U32(ctx, 31, 0x14D398u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D390u, 0x14D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D398u;
label_14d398:
    // 0x14d398: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d39c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D39Cu;
    SET_GPR_U32(ctx, 31, 0x14D3A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D39Cu, 0x14D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3A4u;
label_14d3a4:
    // 0x14d3a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d3ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14D3ACu;
    {
        const bool branch_taken_0x14d3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3ac) {
            ctx->pc = 0x14D478u;
            return;
        }
    }
    ctx->pc = 0x14D3B4u;
    // 0x14d3b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14d3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14d3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d3c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14d3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d3c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14D3C4u;
    {
        const bool branch_taken_0x14d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3c4) {
            ctx->pc = 0x14D478u;
            return;
        }
    }
    ctx->pc = 0x14D3CCu;
}
