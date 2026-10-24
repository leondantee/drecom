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

// Function: entry_002259c4
// Address: 0x2259c4 - 0x225a48
void entry_002259c4_0x2259c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002259c4_0x2259c4");
#endif

    switch (ctx->pc) {
        case 0x225a1cu: goto label_225a1c;
        default: break;
    }

    ctx->pc = 0x2259c4u;

    // 0x2259c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2259c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2259cc: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x2259ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2259d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2259d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2259d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2259d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2259d8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2259d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2259dc: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2259DCu;
    {
        const bool branch_taken_0x2259dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2259dc) {
            ctx->pc = 0x225A48u;
            return;
        }
    }
    ctx->pc = 0x2259E4u;
    // 0x2259e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259ec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2259ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2259f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2259f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2259fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2259fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a00: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x225a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x225a08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225a0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x225a14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225A14u;
    SET_GPR_U32(ctx, 31, 0x225A1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225A14u, 0x225A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A1Cu;
label_225a1c:
    // 0x225a1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225a20: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x225a24: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x225a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x225a28: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x225a2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225a30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a34: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x225a34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x225a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225a40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225a44: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x225a44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x225a48u;
}
