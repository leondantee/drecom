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

// Function: entry_00117600
// Address: 0x117600 - 0x117618
void entry_00117600_0x117600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117600_0x117600");
#endif

    ctx->pc = 0x117600u;

    // 0x117600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117604: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117608: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11760c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11760cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117610: 0x8046346  j           func_118D18
    ctx->pc = 0x117610u;
    ctx->pc = 0x117614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117610u;
    // 0x117614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D18u;
    ps2___malloc_unlock_0x118d18(rdram, ctx, runtime); return;
    ctx->pc = 0x117618u;
}
