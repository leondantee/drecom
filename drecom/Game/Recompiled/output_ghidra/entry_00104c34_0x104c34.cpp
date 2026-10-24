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

// Function: entry_00104c34
// Address: 0x104c34 - 0x104c6c
void entry_00104c34_0x104c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c34_0x104c34");
#endif

    ctx->pc = 0x104c34u;

    // 0x104c34: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x104C34u;
    {
        const bool branch_taken_0x104c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c34) {
            ctx->pc = 0x104C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C34u;
            // 0x104c38: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C6Cu;
            return;
        }
    }
    ctx->pc = 0x104C3Cu;
    // 0x104c3c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x104c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x104c40: 0x8c440128  lw          $a0, 0x128($v0)
    ctx->pc = 0x104c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x104c44: 0x8c653bf0  lw          $a1, 0x3BF0($v1)
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383BF0u));
    // 0x104c48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104c4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x104c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104c50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x104c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104c54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x104c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104c58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x104c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104c5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104c64: 0x8041686  j           func_105A18
    ctx->pc = 0x104C64u;
    ctx->pc = 0x104C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C64u;
    // 0x104c68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A18u;
    _copyRefImage_0x105a18(rdram, ctx, runtime); return;
    ctx->pc = 0x104C6Cu;
}
