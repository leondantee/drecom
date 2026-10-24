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

// Function: entry_0018b38c
// Address: 0x18b38c - 0x18b3c4
void entry_0018b38c_0x18b38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b38c_0x18b38c");
#endif

    switch (ctx->pc) {
        case 0x18b3b8u: goto label_18b3b8;
        default: break;
    }

    ctx->pc = 0x18b38cu;

    // 0x18b38c: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B394u;
    {
        const bool branch_taken_0x18b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b394) {
            ctx->pc = 0x18B3C4u;
            return;
        }
    }
    ctx->pc = 0x18B39Cu;
    // 0x18b39c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18b39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b3a4: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x18b3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b3a8: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b3ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b3b0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B3B0u;
    SET_GPR_U32(ctx, 31, 0x18B3B8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B3B0u, 0x18B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3B8u;
label_18b3b8:
    // 0x18b3b8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x18b3bc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18B3BCu;
    {
        const bool branch_taken_0x18b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b3bc) {
            ctx->pc = 0x18B498u;
            return;
        }
    }
    ctx->pc = 0x18B3C4u;
}
