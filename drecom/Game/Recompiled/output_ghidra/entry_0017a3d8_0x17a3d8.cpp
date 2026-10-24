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

// Function: entry_0017a3d8
// Address: 0x17a3d8 - 0x17a400
void entry_0017a3d8_0x17a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3d8_0x17a3d8");
#endif

    ctx->pc = 0x17a3d8u;

    // 0x17a3d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a3dc: 0x93a400af  lbu         $a0, 0xAF($sp)
    ctx->pc = 0x17a3dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x17a3e0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17a3e4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a3e8: 0x2402ff1f  addiu       $v0, $zero, -0xE1
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x17a3ec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a3f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a3f4: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x17a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a3f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17A3F8u;
    {
        const bool branch_taken_0x17a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3f8) {
            ctx->pc = 0x17A420u;
            return;
        }
    }
    ctx->pc = 0x17A400u;
}
