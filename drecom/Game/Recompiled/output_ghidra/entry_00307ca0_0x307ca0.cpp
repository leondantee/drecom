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

// Function: entry_00307ca0
// Address: 0x307ca0 - 0x307d30
void entry_00307ca0_0x307ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307ca0_0x307ca0");
#endif

    switch (ctx->pc) {
        case 0x307cc0u: goto label_307cc0;
        default: break;
    }

    ctx->pc = 0x307ca0u;

    // 0x307ca0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ca4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x307ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ca8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x307ca8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x307cac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x307cacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x307cb0: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x307cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x307cb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x307cb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307cb8: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x307CB8u;
    SET_GPR_U32(ctx, 31, 0x307CC0u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x307CB8u, 0x307CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CC0u;
label_307cc0:
    // 0x307cc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cc4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307cc8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307ccc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x307cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307cd0: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x307CD0u;
    {
        const bool branch_taken_0x307cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307cd0) {
            ctx->pc = 0x307D30u;
            return;
        }
    }
    ctx->pc = 0x307CD8u;
    // 0x307cd8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cdc: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307ce0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307ce4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307ce8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x307CE8u;
    {
        const bool branch_taken_0x307ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x307ce8) {
            ctx->pc = 0x307D30u;
            return;
        }
    }
    ctx->pc = 0x307CF0u;
    // 0x307cf0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307cf4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x307cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x307cf8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x307cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x307cfc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x307cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x307d00: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x307d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x307d04: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x307d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x307d08: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x307d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x307d0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x307d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x307d10: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x307d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x307d14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307d18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x307d1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d20: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x307d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307d24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x307d24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307d28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x307D28u;
    SET_GPR_U32(ctx, 31, 0x307D30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x307D28u, 0x307D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307D30u;
}
