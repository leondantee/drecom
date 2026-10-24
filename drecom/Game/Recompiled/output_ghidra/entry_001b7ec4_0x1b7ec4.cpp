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

// Function: entry_001b7ec4
// Address: 0x1b7ec4 - 0x1b7f50
void entry_001b7ec4_0x1b7ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ec4_0x1b7ec4");
#endif

    switch (ctx->pc) {
        case 0x1b7ed4u: goto label_1b7ed4;
        default: break;
    }

    ctx->pc = 0x1b7ec4u;

    // 0x1b7ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7ec8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1b7ec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b7ecc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B7ECCu;
    SET_GPR_U32(ctx, 31, 0x1B7ED4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B7ECCu, 0x1B7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7ED4u;
label_1b7ed4:
    // 0x1b7ed4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b7ed4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7ed8: 0x10a00117  beqz        $a1, . + 4 + (0x117 << 2)
    ctx->pc = 0x1B7ED8u;
    {
        const bool branch_taken_0x1b7ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ed8) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7EE0u;
    // 0x1b7ee0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7ee4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b7ee8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b7eec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b7ef0: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x1B7EF0u;
    {
        const bool branch_taken_0x1b7ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ef0) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7EF8u;
    // 0x1b7ef8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7efc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1b7efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7f00: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b7f04: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b7f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b7f08: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x1b7f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1b7f0c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1b7f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1b7f10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7f14: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b7f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b7f18: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b7f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b7f1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7f20: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B7F50u;
            return;
        }
    }
    ctx->pc = 0x1B7F28u;
    // 0x1b7f28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7f2c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7F2Cu;
    {
        const bool branch_taken_0x1b7f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7f2c) {
            ctx->pc = 0x1B7F50u;
            return;
        }
    }
    ctx->pc = 0x1B7F34u;
    // 0x1b7f34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7f38: 0x10a300ff  beq         $a1, $v1, . + 4 + (0xFF << 2)
    ctx->pc = 0x1B7F38u;
    {
        const bool branch_taken_0x1b7f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7f38) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7F40u;
    // 0x1b7f40: 0x10a000fd  beqz        $a1, . + 4 + (0xFD << 2)
    ctx->pc = 0x1B7F40u;
    {
        const bool branch_taken_0x1b7f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f40) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7F48u;
    // 0x1b7f48: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1B7F48u;
    {
        const bool branch_taken_0x1b7f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f48) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7F50u;
}
