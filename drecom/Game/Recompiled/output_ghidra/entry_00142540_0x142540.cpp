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

// Function: entry_00142540
// Address: 0x142540 - 0x142588
void entry_00142540_0x142540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142540_0x142540");
#endif

    ctx->pc = 0x142540u;

    // 0x142540: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142544: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142548: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14254c: 0x1062009e  beq         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x14254Cu;
    {
        const bool branch_taken_0x14254c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14254c) {
            ctx->pc = 0x1427C8u;
            return;
        }
    }
    ctx->pc = 0x142554u;
    // 0x142554: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142558: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x142558u;
    {
        const bool branch_taken_0x142558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142558) {
            ctx->pc = 0x142720u;
            return;
        }
    }
    ctx->pc = 0x142560u;
    // 0x142560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142564: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x142564u;
    {
        const bool branch_taken_0x142564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142564) {
            ctx->pc = 0x142694u;
            return;
        }
    }
    ctx->pc = 0x14256Cu;
    // 0x14256c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142570: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x142570u;
    {
        const bool branch_taken_0x142570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142570) {
            ctx->pc = 0x1425E8u;
            return;
        }
    }
    ctx->pc = 0x142578u;
    // 0x142578: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142578u;
    {
        const bool branch_taken_0x142578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142578) {
            ctx->pc = 0x142588u;
            return;
        }
    }
    ctx->pc = 0x142580u;
    // 0x142580: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x142580u;
    {
        const bool branch_taken_0x142580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142580) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x142588u;
}
