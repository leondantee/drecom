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

// Function: entry_002d89cc
// Address: 0x2d89cc - 0x2d8a50
void entry_002d89cc_0x2d89cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d89cc_0x2d89cc");
#endif

    switch (ctx->pc) {
        case 0x2d89e4u: goto label_2d89e4;
        default: break;
    }

    ctx->pc = 0x2d89ccu;

    // 0x2d89cc: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2d89ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d89d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d89d4: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D89D4u;
    {
        const bool branch_taken_0x2d89d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d89d4) {
            ctx->pc = 0x2D8A94u;
            return;
        }
    }
    ctx->pc = 0x2D89DCu;
    // 0x2d89dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D89DCu;
    SET_GPR_U32(ctx, 31, 0x2D89E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D89DCu, 0x2D89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D89E4u;
label_2d89e4:
    // 0x2d89e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d89e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d89e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d89ec: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D89ECu;
    {
        const bool branch_taken_0x2d89ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d89ec) {
            ctx->pc = 0x2D8A94u;
            return;
        }
    }
    ctx->pc = 0x2D89F4u;
    // 0x2d89f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d89f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d89f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d89fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d89fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8a04: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8A04u;
    {
        const bool branch_taken_0x2d8a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a04) {
            ctx->pc = 0x2D8A94u;
            return;
        }
    }
    ctx->pc = 0x2D8A0Cu;
    // 0x2d8a0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a10: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a18: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8A18u;
    {
        const bool branch_taken_0x2d8a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a18) {
            ctx->pc = 0x2D8A50u;
            return;
        }
    }
    ctx->pc = 0x2D8A20u;
    // 0x2d8a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a24: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8a30: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8A30u;
    {
        const bool branch_taken_0x2d8a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a30) {
            ctx->pc = 0x2D8A50u;
            return;
        }
    }
    ctx->pc = 0x2D8A38u;
    // 0x2d8a38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8a3c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8a40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8a44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8a48: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8A48u;
    {
        const bool branch_taken_0x2d8a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a48) {
            ctx->pc = 0x2D8A94u;
            return;
        }
    }
    ctx->pc = 0x2D8A50u;
}
