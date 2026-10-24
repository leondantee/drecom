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

// Function: entry_0030fcd8
// Address: 0x30fcd8 - 0x30fd2c
void entry_0030fcd8_0x30fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fcd8_0x30fcd8");
#endif

    switch (ctx->pc) {
        case 0x30fd1cu: goto label_30fd1c;
        default: break;
    }

    ctx->pc = 0x30fcd8u;

    // 0x30fcd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fcdc: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x30fcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x30fce0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30fce4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30fce8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30FCE8u;
    {
        const bool branch_taken_0x30fce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30fce8) {
            ctx->pc = 0x30FD2Cu;
            return;
        }
    }
    ctx->pc = 0x30FCF0u;
    // 0x30fcf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fcf4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x30fcf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x30fcf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30fcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30fcfc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x30fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x30fd00: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30FD00u;
    {
        const bool branch_taken_0x30fd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30fd00) {
            ctx->pc = 0x30FD2Cu;
            return;
        }
    }
    ctx->pc = 0x30FD08u;
    // 0x30fd08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30fd0c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x30fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x30fd10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd14: 0xc05cd90  jal         func_173640
    ctx->pc = 0x30FD14u;
    SET_GPR_U32(ctx, 31, 0x30FD1Cu);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x30FD14u, 0x30FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD1Cu;
label_30fd1c:
    // 0x30fd1c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x30fd20: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30fd24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30FD24u;
    {
        const bool branch_taken_0x30fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd24) {
            ctx->pc = 0x30FD44u;
            return;
        }
    }
    ctx->pc = 0x30FD2Cu;
}
