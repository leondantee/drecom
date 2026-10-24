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

// Function: entry_002c3ed4
// Address: 0x2c3ed4 - 0x2c3f60
void entry_002c3ed4_0x2c3ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c3ed4_0x2c3ed4");
#endif

    ctx->pc = 0x2c3ed4u;

    // 0x2c3ed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ed8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2c3edc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c3edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c3ee0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c3ee4: 0x460009a  bltz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2C3EE4u;
    {
        const bool branch_taken_0x2c3ee4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c3ee4) {
            ctx->pc = 0x2C4150u;
            return;
        }
    }
    ctx->pc = 0x2C3EECu;
    // 0x2c3eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ef0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2c3ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2c3ef4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2c3ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c3ef8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3efc: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2C3EFCu;
    {
        const bool branch_taken_0x2c3efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3efc) {
            ctx->pc = 0x2C4110u;
            return;
        }
    }
    ctx->pc = 0x2C3F04u;
    // 0x2c3f04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c3f08: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2C3F08u;
    {
        const bool branch_taken_0x2c3f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f08) {
            ctx->pc = 0x2C4110u;
            return;
        }
    }
    ctx->pc = 0x2C3F10u;
    // 0x2c3f10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c3f14: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2C3F14u;
    {
        const bool branch_taken_0x2c3f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f14) {
            ctx->pc = 0x2C4110u;
            return;
        }
    }
    ctx->pc = 0x2C3F1Cu;
    // 0x2c3f1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3f20: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C3F20u;
    {
        const bool branch_taken_0x2c3f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f20) {
            ctx->pc = 0x2C4110u;
            return;
        }
    }
    ctx->pc = 0x2C3F28u;
    // 0x2c3f28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3f2c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C3F2Cu;
    {
        const bool branch_taken_0x2c3f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f2c) {
            ctx->pc = 0x2C4084u;
            return;
        }
    }
    ctx->pc = 0x2C3F34u;
    // 0x2c3f34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3f38: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C3F38u;
    {
        const bool branch_taken_0x2c3f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f38) {
            ctx->pc = 0x2C4084u;
            return;
        }
    }
    ctx->pc = 0x2C3F40u;
    // 0x2c3f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3f44: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C3F44u;
    {
        const bool branch_taken_0x2c3f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f44) {
            ctx->pc = 0x2C4084u;
            return;
        }
    }
    ctx->pc = 0x2C3F4Cu;
    // 0x2c3f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f50: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3F50u;
    {
        const bool branch_taken_0x2c3f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3f50) {
            ctx->pc = 0x2C3F60u;
            return;
        }
    }
    ctx->pc = 0x2C3F58u;
    // 0x2c3f58: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3F58u;
    {
        const bool branch_taken_0x2c3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f58) {
            ctx->pc = 0x2C3F60u;
            return;
        }
    }
    ctx->pc = 0x2C3F60u;
}
