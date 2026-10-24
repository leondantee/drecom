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

// Function: entry_00259d38
// Address: 0x259d38 - 0x259d60
void entry_00259d38_0x259d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259d38_0x259d38");
#endif

    ctx->pc = 0x259d38u;

    // 0x259d38: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x259d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d3c: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x259d3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259d40: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x259D40u;
    {
        const bool branch_taken_0x259d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d40) {
            ctx->pc = 0x259D60u;
            return;
        }
    }
    ctx->pc = 0x259D48u;
    // 0x259d48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d4c: 0x8c5209fc  lw          $s2, 0x9FC($v0)
    ctx->pc = 0x259d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2556)));
    // 0x259d50: 0x292a021  addu        $s4, $s4, $s2
    ctx->pc = 0x259d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x259d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259d58: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259d5c: 0xa04309e7  sb          $v1, 0x9E7($v0)
    ctx->pc = 0x259d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2535), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x259d60u;
}
