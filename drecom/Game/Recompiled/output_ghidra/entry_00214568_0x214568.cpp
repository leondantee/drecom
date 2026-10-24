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

// Function: entry_00214568
// Address: 0x214568 - 0x214588
void entry_00214568_0x214568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214568_0x214568");
#endif

    ctx->pc = 0x214568u;

    // 0x214568: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21456c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214570: 0x24840f50  addiu       $a0, $a0, 0xF50
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3920));
    // 0x214574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214578: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21457c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214580: 0x80852d4  j           func_214B50
    ctx->pc = 0x214580u;
    ctx->pc = 0x214584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214580u;
    // 0x214584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    kprintf_0x214b50(rdram, ctx, runtime); return;
    ctx->pc = 0x214588u;
}
