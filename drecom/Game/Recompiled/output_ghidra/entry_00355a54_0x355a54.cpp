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

// Function: entry_00355a54
// Address: 0x355a54 - 0x355a98
void entry_00355a54_0x355a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355a54_0x355a54");
#endif

    ctx->pc = 0x355a54u;

    // 0x355a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a5c: 0x846300bc  lh          $v1, 0xBC($v1)
    ctx->pc = 0x355a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x355a60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x355a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x355a64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x355a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355a68: 0x28630200  slti        $v1, $v1, 0x200
    ctx->pc = 0x355a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x355a6c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x355A6Cu;
    {
        const bool branch_taken_0x355a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355a6c) {
            ctx->pc = 0x355A98u;
            return;
        }
    }
    ctx->pc = 0x355A74u;
    // 0x355a74: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x355a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x355a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a80: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x355a80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x355a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x355a90: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x355a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x355a94: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x355a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x355a98u;
}
