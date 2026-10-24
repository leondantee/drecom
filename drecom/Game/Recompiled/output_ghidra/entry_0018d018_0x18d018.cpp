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

// Function: entry_0018d018
// Address: 0x18d018 - 0x18d048
void entry_0018d018_0x18d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d018_0x18d018");
#endif

    ctx->pc = 0x18d018u;

    // 0x18d018: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d01c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d020: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18d024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D024u;
    {
        const bool branch_taken_0x18d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d024) {
            ctx->pc = 0x18D048u;
            return;
        }
    }
    ctx->pc = 0x18D02Cu;
    // 0x18d02c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18d030: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d034: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18d038: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d03c: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18d03cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
    // 0x18d040: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D040u;
    {
        const bool branch_taken_0x18d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d040) {
            ctx->pc = 0x18D05Cu;
            return;
        }
    }
    ctx->pc = 0x18D048u;
}
