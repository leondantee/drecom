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

// Function: entry_0012db08
// Address: 0x12db08 - 0x12db4c
void entry_0012db08_0x12db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012db08_0x12db08");
#endif

    switch (ctx->pc) {
        case 0x12db44u: goto label_12db44;
        default: break;
    }

    ctx->pc = 0x12db08u;

    // 0x12db08: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x12db08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db0c: 0x94e2000e  lhu         $v0, 0xE($a3)
    ctx->pc = 0x12db0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x12db10: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12db14: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x12db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x12db18: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12db18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12db1c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12DB1Cu;
    {
        const bool branch_taken_0x12db1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12db1c) {
            ctx->pc = 0x12DB4Cu;
            return;
        }
    }
    ctx->pc = 0x12DB24u;
    // 0x12db24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db28: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12db30: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
    // 0x12db34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12db38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12db38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12db3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DB3Cu;
    SET_GPR_U32(ctx, 31, 0x12DB44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DB3Cu, 0x12DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB44u;
label_12db44:
    // 0x12db44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12DB44u;
    {
        const bool branch_taken_0x12db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db44) {
            ctx->pc = 0x12DB74u;
            return;
        }
    }
    ctx->pc = 0x12DB4Cu;
}
