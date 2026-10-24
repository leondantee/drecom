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

// Function: entry_0018c324
// Address: 0x18c324 - 0x18c364
void entry_0018c324_0x18c324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c324_0x18c324");
#endif

    ctx->pc = 0x18c324u;

    // 0x18c324: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x18c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x18c328: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18c32c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18c330: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18c334: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18c334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18c338: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18c33c: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18c340: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c344: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18c344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18c348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c34c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C34Cu;
    {
        const bool branch_taken_0x18c34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c34c) {
            ctx->pc = 0x18C364u;
            return;
        }
    }
    ctx->pc = 0x18C354u;
    // 0x18c354: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c358: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c35c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x18C35Cu;
    {
        const bool branch_taken_0x18c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c35c) {
            ctx->pc = 0x18C78Cu;
            return;
        }
    }
    ctx->pc = 0x18C364u;
}
