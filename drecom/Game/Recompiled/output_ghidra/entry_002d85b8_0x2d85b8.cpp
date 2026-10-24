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

// Function: entry_002d85b8
// Address: 0x2d85b8 - 0x2d8640
void entry_002d85b8_0x2d85b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d85b8_0x2d85b8");
#endif

    switch (ctx->pc) {
        case 0x2d85d0u: goto label_2d85d0;
        default: break;
    }

    ctx->pc = 0x2d85b8u;

    // 0x2d85b8: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d85b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d85bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d85bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85c0: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D85C0u;
    {
        const bool branch_taken_0x2d85c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d85c0) {
            ctx->pc = 0x2D8684u;
            return;
        }
    }
    ctx->pc = 0x2D85C8u;
    // 0x2d85c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D85C8u;
    SET_GPR_U32(ctx, 31, 0x2D85D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D85C8u, 0x2D85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D85D0u;
label_2d85d0:
    // 0x2d85d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d85d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d85d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85d8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2d85d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d85dc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D85DCu;
    {
        const bool branch_taken_0x2d85dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85dc) {
            ctx->pc = 0x2D8684u;
            return;
        }
    }
    ctx->pc = 0x2D85E4u;
    // 0x2d85e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d85e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d85e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d85ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d85ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d85f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d85f4: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D85F4u;
    {
        const bool branch_taken_0x2d85f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d85f4) {
            ctx->pc = 0x2D8684u;
            return;
        }
    }
    ctx->pc = 0x2D85FCu;
    // 0x2d85fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8600: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2d8600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8604: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8608: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8608u;
    {
        const bool branch_taken_0x2d8608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8608) {
            ctx->pc = 0x2D8640u;
            return;
        }
    }
    ctx->pc = 0x2D8610u;
    // 0x2d8610: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8614: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8618: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d861c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8620: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8620u;
    {
        const bool branch_taken_0x2d8620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8620) {
            ctx->pc = 0x2D8640u;
            return;
        }
    }
    ctx->pc = 0x2D8628u;
    // 0x2d8628: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d862c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d862cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8638: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8638u;
    {
        const bool branch_taken_0x2d8638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8638) {
            ctx->pc = 0x2D8684u;
            return;
        }
    }
    ctx->pc = 0x2D8640u;
}
