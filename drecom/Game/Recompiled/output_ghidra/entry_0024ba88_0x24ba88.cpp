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

// Function: entry_0024ba88
// Address: 0x24ba88 - 0x24bad8
void entry_0024ba88_0x24ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ba88_0x24ba88");
#endif

    ctx->pc = 0x24ba88u;

    // 0x24ba88: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x24ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x24ba8c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24ba90: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x24ba90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24ba94: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x24ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24ba98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24ba98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ba9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24baa0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24baa4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24baa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24baac: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24baacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24bab0: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24bab4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24bab8: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24babc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24bac0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24bac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24bac4: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BAC4u;
    {
        const bool branch_taken_0x24bac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x24bac4) {
            ctx->pc = 0x24BAD8u;
            return;
        }
    }
    ctx->pc = 0x24BACCu;
    // 0x24bacc: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24bad0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24bad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24bad4: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x24bad8u;
}
