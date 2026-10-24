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

// Function: entry_001f4068
// Address: 0x1f4068 - 0x1f40e8
void entry_001f4068_0x1f4068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4068_0x1f4068");
#endif

    switch (ctx->pc) {
        case 0x1f4088u: goto label_1f4088;
        default: break;
    }

    ctx->pc = 0x1f4068u;

label_1f4068:
    // 0x1f4068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f406c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f406cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4070: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f4070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4074: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4078: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f407c: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f407cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4080: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4080u;
    SET_GPR_U32(ctx, 31, 0x1F4088u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4080u, 0x1F4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4088u;
label_1f4088:
    // 0x1f4088: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f408c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4090: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F4090u;
    {
        const bool branch_taken_0x1f4090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4090) {
            ctx->pc = 0x1F4068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4068;
        }
    }
    ctx->pc = 0x1F4098u;
    // 0x1f4098: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f409c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f409cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f40a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f40a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f40a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f40a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f40acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f40b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f40b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f40b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f40b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f40b8: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1f40bc: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F40BCu;
    {
        const bool branch_taken_0x1f40bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f40bc) {
            ctx->pc = 0x1F4188u;
            return;
        }
    }
    ctx->pc = 0x1F40C4u;
    // 0x1f40c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f40c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40cc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f40ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f40d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40d4: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f40d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f40d8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f40d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f40dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f40e0: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f40e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f40e4: 0x0  nop
    ctx->pc = 0x1f40e4u;
    // NOP
    ctx->pc = 0x1f40e8u;
}
