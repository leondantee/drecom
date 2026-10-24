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

// Function: entry_00363088
// Address: 0x363088 - 0x3630c8
void entry_00363088_0x363088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363088_0x363088");
#endif

    ctx->pc = 0x363088u;

    // 0x363088: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x363088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36308c: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x36308cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x363090: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x363090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x363094: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363098: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x363098u;
    {
        const bool branch_taken_0x363098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x363098) {
            ctx->pc = 0x3630ECu;
            return;
        }
    }
    ctx->pc = 0x3630A0u;
    // 0x3630a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3630a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3630a4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3630A4u;
    {
        const bool branch_taken_0x3630a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3630a4) {
            ctx->pc = 0x3630E0u;
            return;
        }
    }
    ctx->pc = 0x3630ACu;
    // 0x3630ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3630acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3630b0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3630B0u;
    {
        const bool branch_taken_0x3630b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3630b0) {
            ctx->pc = 0x3630D4u;
            return;
        }
    }
    ctx->pc = 0x3630B8u;
    // 0x3630b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3630B8u;
    {
        const bool branch_taken_0x3630b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630b8) {
            ctx->pc = 0x3630C8u;
            return;
        }
    }
    ctx->pc = 0x3630C0u;
    // 0x3630c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3630C0u;
    {
        const bool branch_taken_0x3630c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3630c0) {
            ctx->pc = 0x3630F0u;
            return;
        }
    }
    ctx->pc = 0x3630C8u;
}
