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

// Function: entry_00200de4
// Address: 0x200de4 - 0x200e38
void entry_00200de4_0x200de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200de4_0x200de4");
#endif

    ctx->pc = 0x200de4u;

    // 0x200de4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200de8: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200dec: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x200decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x200df0: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200df4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200df8: 0x906200d0  lbu         $v0, 0xD0($v1)
    ctx->pc = 0x200df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x200dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x200e00: 0xa06200d0  sb          $v0, 0xD0($v1)
    ctx->pc = 0x200e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 2));
    // 0x200e04: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x200e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x200e08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x200e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x200e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200e10: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x200E10u;
    {
        const bool branch_taken_0x200e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e10) {
            ctx->pc = 0x200FC8u;
            return;
        }
    }
    ctx->pc = 0x200E18u;
    // 0x200e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200e1c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200E1Cu;
    {
        const bool branch_taken_0x200e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e1c) {
            ctx->pc = 0x200E80u;
            return;
        }
    }
    ctx->pc = 0x200E24u;
    // 0x200e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200e28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200E28u;
    {
        const bool branch_taken_0x200e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x200e28) {
            ctx->pc = 0x200E38u;
            return;
        }
    }
    ctx->pc = 0x200E30u;
    // 0x200e30: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x200E30u;
    {
        const bool branch_taken_0x200e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200e30) {
            ctx->pc = 0x200FC8u;
            return;
        }
    }
    ctx->pc = 0x200E38u;
}
