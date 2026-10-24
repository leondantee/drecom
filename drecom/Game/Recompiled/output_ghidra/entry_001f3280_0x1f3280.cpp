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

// Function: entry_001f3280
// Address: 0x1f3280 - 0x1f32e8
void entry_001f3280_0x1f3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3280_0x1f3280");
#endif

    switch (ctx->pc) {
        case 0x1f32ccu: goto label_1f32cc;
        default: break;
    }

    ctx->pc = 0x1f3280u;

    // 0x1f3280: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3284: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3288: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f3288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f328c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F328Cu;
    {
        const bool branch_taken_0x1f328c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f328c) {
            ctx->pc = 0x1F32E8u;
            return;
        }
    }
    ctx->pc = 0x1F3294u;
    // 0x1f3294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f329c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f329cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f32a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32a8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f32a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32b0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f32b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f32b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32b8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f32b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f32bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f32c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F32C4u;
    SET_GPR_U32(ctx, 31, 0x1F32CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F32C4u, 0x1F32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32CCu;
label_1f32cc:
    // 0x1f32cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f32ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f32d0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f32d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f32d4: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f32d8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f32d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f32dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f32dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f32e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32e4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f32e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f32e8u;
}
