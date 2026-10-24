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

// Function: entry_001623f0
// Address: 0x1623f0 - 0x162440
void entry_001623f0_0x1623f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001623f0_0x1623f0");
#endif

    ctx->pc = 0x1623f0u;

    // 0x1623f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1623f4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1623f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1623f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1623fc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1623FCu;
    {
        const bool branch_taken_0x1623fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623fc) {
            ctx->pc = 0x162508u;
            return;
        }
    }
    ctx->pc = 0x162404u;
    // 0x162404: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x162404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x162408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x162408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16240c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162410: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162410) {
            ctx->pc = 0x1624D0u;
            return;
        }
    }
    ctx->pc = 0x162418u;
    // 0x162418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16241c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16241Cu;
    {
        const bool branch_taken_0x16241c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16241c) {
            ctx->pc = 0x1624D0u;
            return;
        }
    }
    ctx->pc = 0x162424u;
    // 0x162424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162428: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162428u;
    {
        const bool branch_taken_0x162428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162428) {
            ctx->pc = 0x162440u;
            return;
        }
    }
    ctx->pc = 0x162430u;
    // 0x162430: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162430u;
    {
        const bool branch_taken_0x162430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162430) {
            ctx->pc = 0x162440u;
            return;
        }
    }
    ctx->pc = 0x162438u;
    // 0x162438: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x162438u;
    {
        const bool branch_taken_0x162438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162438) {
            ctx->pc = 0x162508u;
            return;
        }
    }
    ctx->pc = 0x162440u;
}
