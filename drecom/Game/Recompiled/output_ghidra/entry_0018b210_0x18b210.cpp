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

// Function: entry_0018b210
// Address: 0x18b210 - 0x18b248
void entry_0018b210_0x18b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b210_0x18b210");
#endif

    switch (ctx->pc) {
        case 0x18b23cu: goto label_18b23c;
        default: break;
    }

    ctx->pc = 0x18b210u;

    // 0x18b210: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b218: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B218u;
    {
        const bool branch_taken_0x18b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b218) {
            ctx->pc = 0x18B248u;
            return;
        }
    }
    ctx->pc = 0x18B220u;
    // 0x18b220: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x18b220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18b224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b228: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18b228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b22c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b230: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b234: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B234u;
    SET_GPR_U32(ctx, 31, 0x18B23Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B234u, 0x18B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B23Cu;
label_18b23c:
    // 0x18b23c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18b240: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18B240u;
    {
        const bool branch_taken_0x18b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b240) {
            ctx->pc = 0x18B498u;
            return;
        }
    }
    ctx->pc = 0x18B248u;
}
