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

// Function: entry_002d5ce8
// Address: 0x2d5ce8 - 0x2d5d34
void entry_002d5ce8_0x2d5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5ce8_0x2d5ce8");
#endif

    ctx->pc = 0x2d5ce8u;

    // 0x2d5ce8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5cec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d5cf0: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2d5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2d5cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5cf8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d5cfc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x2d5cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2d5d00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5d04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5D04u;
    {
        const bool branch_taken_0x2d5d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d04) {
            ctx->pc = 0x2D5D34u;
            return;
        }
    }
    ctx->pc = 0x2D5D0Cu;
    // 0x2d5d0c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5d10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d5d14: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2d5d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5d1c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d5d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5d24: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5d28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d5d2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5D2Cu;
    {
        const bool branch_taken_0x2d5d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d2c) {
            ctx->pc = 0x2D5D50u;
            return;
        }
    }
    ctx->pc = 0x2D5D34u;
}
