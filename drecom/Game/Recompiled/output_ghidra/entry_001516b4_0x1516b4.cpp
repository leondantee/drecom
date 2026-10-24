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

// Function: entry_001516b4
// Address: 0x1516b4 - 0x1516e0
void entry_001516b4_0x1516b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516b4_0x1516b4");
#endif

    ctx->pc = 0x1516b4u;

    // 0x1516b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1516b8: 0x906213f8  lbu         $v0, 0x13F8($v1)
    ctx->pc = 0x1516b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5112)));
    // 0x1516bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1516bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1516c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1516c4: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1516C4u;
    {
        const bool branch_taken_0x1516c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1516c4) {
            ctx->pc = 0x1516F0u;
            return;
        }
    }
    ctx->pc = 0x1516CCu;
    // 0x1516cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1516d0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1516D0u;
    {
        const bool branch_taken_0x1516d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1516d0) {
            ctx->pc = 0x1516E0u;
            return;
        }
    }
    ctx->pc = 0x1516D8u;
    // 0x1516d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1516D8u;
    {
        const bool branch_taken_0x1516d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516d8) {
            ctx->pc = 0x1516F8u;
            return;
        }
    }
    ctx->pc = 0x1516E0u;
}
