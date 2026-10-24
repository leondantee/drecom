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

// Function: entry_00136c60
// Address: 0x136c60 - 0x136cbc
void entry_00136c60_0x136c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c60_0x136c60");
#endif

    switch (ctx->pc) {
        case 0x136ca0u: goto label_136ca0;
        default: break;
    }

    ctx->pc = 0x136c60u;

    // 0x136c60: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x136c64: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x136c68: 0x2471004c  addiu       $s1, $v1, 0x4C
    ctx->pc = 0x136c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136c6c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x136c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136c70: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x136C70u;
    {
        const bool branch_taken_0x136c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c70) {
            ctx->pc = 0x137430u;
            return;
        }
    }
    ctx->pc = 0x136C78u;
    // 0x136c78: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136c7c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x136C7Cu;
    {
        const bool branch_taken_0x136c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136c7c) {
            ctx->pc = 0x136CE0u;
            return;
        }
    }
    ctx->pc = 0x136C84u;
    // 0x136c84: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x136c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x136c88: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x136c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x136c8c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x136c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x136c90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136C90u;
    {
        const bool branch_taken_0x136c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c90) {
            ctx->pc = 0x136CBCu;
            return;
        }
    }
    ctx->pc = 0x136C98u;
    // 0x136c98: 0xc067694  jal         func_19DA50
    ctx->pc = 0x136C98u;
    SET_GPR_U32(ctx, 31, 0x136CA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x136C98u, 0x136CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA0u;
label_136ca0:
    // 0x136ca0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x136ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136ca4: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x136ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x136ca8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cb0: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x136cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cb4: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x136CB4u;
    {
        const bool branch_taken_0x136cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136cb4) {
            ctx->pc = 0x137430u;
            return;
        }
    }
    ctx->pc = 0x136CBCu;
}
