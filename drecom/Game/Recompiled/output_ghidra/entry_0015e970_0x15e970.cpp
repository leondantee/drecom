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

// Function: entry_0015e970
// Address: 0x15e970 - 0x15e994
void entry_0015e970_0x15e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e970_0x15e970");
#endif

    ctx->pc = 0x15e970u;

    // 0x15e970: 0x920200af  lbu         $v0, 0xAF($s0)
    ctx->pc = 0x15e970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 175)));
    // 0x15e974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e978: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x15e97c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E97Cu;
    {
        const bool branch_taken_0x15e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e97c) {
            ctx->pc = 0x15E994u;
            return;
        }
    }
    ctx->pc = 0x15E984u;
    // 0x15e984: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e988: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15e98c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E98Cu;
    {
        const bool branch_taken_0x15e98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e98c) {
            ctx->pc = 0x15E998u;
            return;
        }
    }
    ctx->pc = 0x15E994u;
}
