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

// Function: entry_0028e180
// Address: 0x28e180 - 0x28e1d4
void entry_0028e180_0x28e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e180_0x28e180");
#endif

    switch (ctx->pc) {
        case 0x28e1ccu: goto label_28e1cc;
        default: break;
    }

    ctx->pc = 0x28e180u;

    // 0x28e180: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e184: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e18c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28E18Cu;
    {
        const bool branch_taken_0x28e18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e18c) {
            ctx->pc = 0x28E1E8u;
            return;
        }
    }
    ctx->pc = 0x28E194u;
    // 0x28e194: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28e194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28e198: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e19c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28e19cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28e1a0: 0x82025de9  lb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28e1a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28e1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28e1a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28e1a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28e1ac: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28e1b0: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E1B0u;
    {
        const bool branch_taken_0x28e1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28e1b0) {
            ctx->pc = 0x28E1D4u;
            return;
        }
    }
    ctx->pc = 0x28E1B8u;
    // 0x28e1b8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28e1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x28e1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28e1c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e1c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e1c4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28E1C4u;
    SET_GPR_U32(ctx, 31, 0x28E1CCu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28E1C4u, 0x28E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1CCu;
label_28e1cc:
    // 0x28e1cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E1CCu;
    {
        const bool branch_taken_0x28e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1cc) {
            ctx->pc = 0x28E1E8u;
            return;
        }
    }
    ctx->pc = 0x28E1D4u;
}
