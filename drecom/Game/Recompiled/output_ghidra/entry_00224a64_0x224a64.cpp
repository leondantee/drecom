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

// Function: entry_00224a64
// Address: 0x224a64 - 0x224aa8
void entry_00224a64_0x224a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224a64_0x224a64");
#endif

    ctx->pc = 0x224a64u;

    // 0x224a64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224a68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224a6c: 0x944300aa  lhu         $v1, 0xAA($v0)
    ctx->pc = 0x224a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x224a70: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x224a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x224a74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x224a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x224a78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224A78u;
    {
        const bool branch_taken_0x224a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a78) {
            ctx->pc = 0x224AA8u;
            return;
        }
    }
    ctx->pc = 0x224A80u;
    // 0x224a80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224a84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224a88: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x224a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x224a8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224A8Cu;
    {
        const bool branch_taken_0x224a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a8c) {
            ctx->pc = 0x224AA8u;
            return;
        }
    }
    ctx->pc = 0x224A94u;
    // 0x224a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224a98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x224a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224a9c: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x224a9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x224aa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x224aa4: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x224aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x224aa8u;
}
