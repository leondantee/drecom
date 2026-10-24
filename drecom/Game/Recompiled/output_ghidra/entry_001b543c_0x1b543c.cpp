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

// Function: entry_001b543c
// Address: 0x1b543c - 0x1b54a4
void entry_001b543c_0x1b543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b543c_0x1b543c");
#endif

    ctx->pc = 0x1b543cu;

    // 0x1b543c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b5440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5444: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1b5448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b544c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1B544Cu;
    {
        const bool branch_taken_0x1b544c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b544c) {
            ctx->pc = 0x1B55E4u;
            return;
        }
    }
    ctx->pc = 0x1B5454u;
    // 0x1b5454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b5458: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1b545c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5460: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5464: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1B5464u;
    {
        const bool branch_taken_0x1b5464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5464) {
            ctx->pc = 0x1B5564u;
            return;
        }
    }
    ctx->pc = 0x1B546Cu;
    // 0x1b546c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5470: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B5470u;
    {
        const bool branch_taken_0x1b5470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5470) {
            ctx->pc = 0x1B5534u;
            return;
        }
    }
    ctx->pc = 0x1B5478u;
    // 0x1b5478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b547c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B547Cu;
    {
        const bool branch_taken_0x1b547c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b547c) {
            ctx->pc = 0x1B5504u;
            return;
        }
    }
    ctx->pc = 0x1B5484u;
    // 0x1b5484: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5488: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B5488u;
    {
        const bool branch_taken_0x1b5488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5488) {
            ctx->pc = 0x1B54D4u;
            return;
        }
    }
    ctx->pc = 0x1B5490u;
    // 0x1b5490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5494: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5494u;
    {
        const bool branch_taken_0x1b5494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5494) {
            ctx->pc = 0x1B54A4u;
            return;
        }
    }
    ctx->pc = 0x1B549Cu;
    // 0x1b549c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B549Cu;
    {
        const bool branch_taken_0x1b549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b549c) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B54A4u;
}
