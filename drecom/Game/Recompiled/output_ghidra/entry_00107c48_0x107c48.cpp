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

// Function: entry_00107c48
// Address: 0x107c48 - 0x107c8c
void entry_00107c48_0x107c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c48_0x107c48");
#endif

    ctx->pc = 0x107c48u;

    // 0x107c48: 0x8c433d48  lw          $v1, 0x3D48($v0)
    ctx->pc = 0x107c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15688)));
    // 0x107c4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107c50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107c54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107c58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107c5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107c60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x107C60u;
    {
        const bool branch_taken_0x107c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C60u;
        // 0x107c64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c60) {
            ctx->pc = 0x107C8Cu;
            return;
        }
    }
    ctx->pc = 0x107C68u;
    // 0x107c68: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107c6c: 0x8c433dc0  lw          $v1, 0x3DC0($v0)
    ctx->pc = 0x107c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DC0u));
    // 0x107c70: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x107C70u;
    {
        const bool branch_taken_0x107c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C70u;
        // 0x107c74: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c70) {
            ctx->pc = 0x107CA0u;
            return;
        }
    }
    ctx->pc = 0x107C78u;
    // 0x107c78: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107c7c: 0x8c443db0  lw          $a0, 0x3DB0($v0)
    ctx->pc = 0x107c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
    // 0x107c80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x64900b  movn        $s2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107CB4u;
            return;
        }
    }
    ctx->pc = 0x107C8Cu;
}
