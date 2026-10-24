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

// Function: entry_001c199c
// Address: 0x1c199c - 0x1c1a04
void entry_001c199c_0x1c199c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c199c_0x1c199c");
#endif

    ctx->pc = 0x1c199cu;

    // 0x1c199c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c19a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c19a4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c19a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c19a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c19ac: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C19ACu;
    {
        const bool branch_taken_0x1c19ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19ac) {
            ctx->pc = 0x1C1AF0u;
            return;
        }
    }
    ctx->pc = 0x1C19B4u;
    // 0x1c19b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c19b8: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c19b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c19bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c19bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c19c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c19c4: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C19C4u;
    {
        const bool branch_taken_0x1c19c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19c4) {
            ctx->pc = 0x1C1A84u;
            return;
        }
    }
    ctx->pc = 0x1C19CCu;
    // 0x1c19cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c19d0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C19D0u;
    {
        const bool branch_taken_0x1c19d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19d0) {
            ctx->pc = 0x1C1A68u;
            return;
        }
    }
    ctx->pc = 0x1C19D8u;
    // 0x1c19d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c19dc: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C19DCu;
    {
        const bool branch_taken_0x1c19dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19dc) {
            ctx->pc = 0x1C1A4Cu;
            return;
        }
    }
    ctx->pc = 0x1C19E4u;
    // 0x1c19e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c19e8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C19E8u;
    {
        const bool branch_taken_0x1c19e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19e8) {
            ctx->pc = 0x1C1A30u;
            return;
        }
    }
    ctx->pc = 0x1C19F0u;
    // 0x1c19f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c19f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C19F4u;
    {
        const bool branch_taken_0x1c19f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c19f4) {
            ctx->pc = 0x1C1A04u;
            return;
        }
    }
    ctx->pc = 0x1C19FCu;
    // 0x1c19fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C19FCu;
    {
        const bool branch_taken_0x1c19fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19fc) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A04u;
}
