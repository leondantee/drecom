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

// Function: entry_002faa08
// Address: 0x2faa08 - 0x2faab4
void entry_002faa08_0x2faa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002faa08_0x2faa08");
#endif

    switch (ctx->pc) {
        case 0x2faaa0u: goto label_2faaa0;
        case 0x2faaacu: goto label_2faaac;
        default: break;
    }

    ctx->pc = 0x2faa08u;

    // 0x2faa08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa0c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2faa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2faa10: 0x28c1000b  slti        $at, $a2, 0xB
    ctx->pc = 0x2faa10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2faa14: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2FAA14u;
    {
        const bool branch_taken_0x2faa14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faa14) {
            ctx->pc = 0x2FAB24u;
            return;
        }
    }
    ctx->pc = 0x2FAA1Cu;
    // 0x2faa1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa20: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2faa24: 0x28610012  slti        $at, $v1, 0x12
    ctx->pc = 0x2faa24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2faa28: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2FAA28u;
    {
        const bool branch_taken_0x2faa28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa28) {
            ctx->pc = 0x2FAB24u;
            return;
        }
    }
    ctx->pc = 0x2FAA30u;
    // 0x2faa30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2faa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2faa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2faa38: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FAA38u;
    {
        const bool branch_taken_0x2faa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2faa38) {
            ctx->pc = 0x2FAAB4u;
            return;
        }
    }
    ctx->pc = 0x2FAA40u;
    // 0x2faa40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2faa44: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2faa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2faa48: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2faa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2faa4c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2faa4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa50: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2faa50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2faa54: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2faa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2faa58: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2faa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2faa5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2faa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2faa60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2faa64: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x2faa64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2faa68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2faa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2faa6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2faa70: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x2faa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2faa74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2faa74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faa78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2faa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2faa7c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2faa7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2faa80: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x2faa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x2faa84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2faa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2faa88: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2faa88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2faa8c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2faa8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2faa90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2faa90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2faa94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2faa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2faa98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FAA98u;
    SET_GPR_U32(ctx, 31, 0x2FAAA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FAA98u, 0x2FAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAA0u;
label_2faaa0:
    // 0x2faaa0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2faaa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2faaa4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FAAA4u;
    SET_GPR_U32(ctx, 31, 0x2FAAACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FAAA4u, 0x2FAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAACu;
label_2faaac:
    // 0x2faaac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FAAACu;
    {
        const bool branch_taken_0x2faaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faaac) {
            ctx->pc = 0x2FAB24u;
            return;
        }
    }
    ctx->pc = 0x2FAAB4u;
}
