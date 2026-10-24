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

// Function: entry_00307ef8
// Address: 0x307ef8 - 0x307f60
void entry_00307ef8_0x307ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307ef8_0x307ef8");
#endif

    ctx->pc = 0x307ef8u;

    // 0x307ef8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307efc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x307efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307f00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x307f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x307f04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x307f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f08: 0x10640067  beq         $v1, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x307F08u;
    {
        const bool branch_taken_0x307f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x307f08) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307F10u;
    // 0x307f10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307f14: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307f14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307f18: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x307f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307f1c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x307f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307f20: 0x10a4004f  beq         $a1, $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x307F20u;
    {
        const bool branch_taken_0x307f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x307f20) {
            ctx->pc = 0x308060u;
            return;
        }
    }
    ctx->pc = 0x307F28u;
    // 0x307f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307f2c: 0x10a3004c  beq         $a1, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x307F2Cu;
    {
        const bool branch_taken_0x307f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f2c) {
            ctx->pc = 0x308060u;
            return;
        }
    }
    ctx->pc = 0x307F34u;
    // 0x307f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x307f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307f38: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x307F38u;
    {
        const bool branch_taken_0x307f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f38) {
            ctx->pc = 0x308028u;
            return;
        }
    }
    ctx->pc = 0x307F40u;
    // 0x307f40: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307f44: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x307F44u;
    {
        const bool branch_taken_0x307f44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f44) {
            ctx->pc = 0x307F60u;
            return;
        }
    }
    ctx->pc = 0x307F4Cu;
    // 0x307f4c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307f50: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x307F50u;
    {
        const bool branch_taken_0x307f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x307f50) {
            ctx->pc = 0x307F60u;
            return;
        }
    }
    ctx->pc = 0x307F58u;
    // 0x307f58: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x307F58u;
    {
        const bool branch_taken_0x307f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307f58) {
            ctx->pc = 0x308060u;
            return;
        }
    }
    ctx->pc = 0x307F60u;
}
