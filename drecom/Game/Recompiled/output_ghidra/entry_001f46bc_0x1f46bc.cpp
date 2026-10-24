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

// Function: entry_001f46bc
// Address: 0x1f46bc - 0x1f473c
void entry_001f46bc_0x1f46bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f46bc_0x1f46bc");
#endif

    switch (ctx->pc) {
        case 0x1f46dcu: goto label_1f46dc;
        default: break;
    }

    ctx->pc = 0x1f46bcu;

label_1f46bc:
    // 0x1f46bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46c0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f46c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f46c4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f46c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f46c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f46c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f46cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f46ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f46d0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f46d4: 0xc096254  jal         func_258950
    ctx->pc = 0x1F46D4u;
    SET_GPR_U32(ctx, 31, 0x1F46DCu);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F46D4u, 0x1F46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46DCu;
label_1f46dc:
    // 0x1f46dc: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f46e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f46e4: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F46E4u;
    {
        const bool branch_taken_0x1f46e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f46e4) {
            ctx->pc = 0x1F46BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f46bc;
        }
    }
    ctx->pc = 0x1F46ECu;
    // 0x1f46ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46f0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f46f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f46f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f46f8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f46fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4700: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f470c: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x1f470cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f4710: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F4710u;
    {
        const bool branch_taken_0x1f4710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4710) {
            ctx->pc = 0x1F487Cu;
            return;
        }
    }
    ctx->pc = 0x1F4718u;
    // 0x1f4718: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f4718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f471c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4720: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4728: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f472c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f472cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4734: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f4734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4738: 0x0  nop
    ctx->pc = 0x1f4738u;
    // NOP
    ctx->pc = 0x1f473cu;
}
