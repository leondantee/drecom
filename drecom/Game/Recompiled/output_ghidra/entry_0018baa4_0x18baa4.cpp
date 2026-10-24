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

// Function: entry_0018baa4
// Address: 0x18baa4 - 0x18bad0
void entry_0018baa4_0x18baa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018baa4_0x18baa4");
#endif

    ctx->pc = 0x18baa4u;

    // 0x18baa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18baa8: 0x9023a661  lbu         $v1, -0x599F($at)
    ctx->pc = 0x18baa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x53A661u));
    // 0x18baac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18baacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18bab0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18bab4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BAB4u;
    {
        const bool branch_taken_0x18bab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18bab4) {
            ctx->pc = 0x18BAD0u;
            return;
        }
    }
    ctx->pc = 0x18BABCu;
    // 0x18babc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18bac0: 0x9022a661  lbu         $v0, -0x599F($at)
    ctx->pc = 0x18bac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x53A661u));
    // 0x18bac4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bac8: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18BAC8u;
    SET_GPR_U32(ctx, 31, 0x18BAD0u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18BAC8u, 0x18BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAD0u;
}
