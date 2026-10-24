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

// Function: entry_00296578
// Address: 0x296578 - 0x2965b0
void entry_00296578_0x296578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296578_0x296578");
#endif

    ctx->pc = 0x296578u;

    // 0x296578: 0x1680ffed  bnez        $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x296578u;
    {
        const bool branch_taken_0x296578 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x296578) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296580u;
    // 0x296580: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x296580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x296584: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296588: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x29658c: 0x906369cd  lbu         $v1, 0x69CD($v1)
    ctx->pc = 0x29658cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27085)));
    // 0x296590: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296594: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x296594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296598: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x296598u;
    {
        const bool branch_taken_0x296598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296598) {
            ctx->pc = 0x2965B0u;
            return;
        }
    }
    ctx->pc = 0x2965A0u;
    // 0x2965a0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2965a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2965a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2965a8: 0xa06469cd  sb          $a0, 0x69CD($v1)
    ctx->pc = 0x2965a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27085), (uint8_t)GPR_U32(ctx, 4));
    // 0x2965ac: 0x0  nop
    ctx->pc = 0x2965acu;
    // NOP
    ctx->pc = 0x2965b0u;
}
