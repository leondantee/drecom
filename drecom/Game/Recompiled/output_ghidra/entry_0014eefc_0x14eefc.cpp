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

// Function: entry_0014eefc
// Address: 0x14eefc - 0x14ef50
void entry_0014eefc_0x14eefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eefc_0x14eefc");
#endif

    ctx->pc = 0x14eefcu;

    // 0x14eefc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ef00: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14ef04: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x14ef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x14ef08: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14EF08u;
    {
        const bool branch_taken_0x14ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef08) {
            ctx->pc = 0x14EF98u;
            return;
        }
    }
    ctx->pc = 0x14EF10u;
    // 0x14ef10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ef14: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x14ef14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x14ef18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ef1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ef20: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14EF20u;
    {
        const bool branch_taken_0x14ef20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef20) {
            ctx->pc = 0x14EF8Cu;
            return;
        }
    }
    ctx->pc = 0x14EF28u;
    // 0x14ef28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ef2c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14EF2Cu;
    {
        const bool branch_taken_0x14ef2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef2c) {
            ctx->pc = 0x14EF78u;
            return;
        }
    }
    ctx->pc = 0x14EF34u;
    // 0x14ef34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ef38: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EF38u;
    {
        const bool branch_taken_0x14ef38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ef38) {
            ctx->pc = 0x14EF64u;
            return;
        }
    }
    ctx->pc = 0x14EF40u;
    // 0x14ef40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EF40u;
    {
        const bool branch_taken_0x14ef40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef40) {
            ctx->pc = 0x14EF50u;
            return;
        }
    }
    ctx->pc = 0x14EF48u;
    // 0x14ef48: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14EF48u;
    {
        const bool branch_taken_0x14ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef48) {
            ctx->pc = 0x14EF50u;
            return;
        }
    }
    ctx->pc = 0x14EF50u;
}
