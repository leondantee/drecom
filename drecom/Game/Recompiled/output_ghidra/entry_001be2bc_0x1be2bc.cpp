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

// Function: entry_001be2bc
// Address: 0x1be2bc - 0x1be340
void entry_001be2bc_0x1be2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be2bc_0x1be2bc");
#endif

    switch (ctx->pc) {
        case 0x1be2c8u: goto label_1be2c8;
        default: break;
    }

    ctx->pc = 0x1be2bcu;

    // 0x1be2bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be2c0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x1BE2C8u;
    {
        const bool branch_taken_0x1be2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2c8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE2D0u;
    // 0x1be2d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1be2d8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1be2dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be2e0: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x1BE2E0u;
    {
        const bool branch_taken_0x1be2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2e0) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE2E8u;
    // 0x1be2e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1be2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1be2f0: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1be2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1be2f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be2f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1be2fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1be2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1be300: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be304: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1be304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1be308: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be30c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be310: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE310u;
    {
        const bool branch_taken_0x1be310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be310) {
            ctx->pc = 0x1BE340u;
            return;
        }
    }
    ctx->pc = 0x1BE318u;
    // 0x1be318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be31c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE31Cu;
    {
        const bool branch_taken_0x1be31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be31c) {
            ctx->pc = 0x1BE340u;
            return;
        }
    }
    ctx->pc = 0x1BE324u;
    // 0x1be324: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be328: 0x108300f8  beq         $a0, $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1BE328u;
    {
        const bool branch_taken_0x1be328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1be328) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE330u;
    // 0x1be330: 0x108000f6  beqz        $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1BE330u;
    {
        const bool branch_taken_0x1be330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be330) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE338u;
    // 0x1be338: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1BE338u;
    {
        const bool branch_taken_0x1be338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be338) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE340u;
}
