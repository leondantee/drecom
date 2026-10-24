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

// Function: entry_00114ae4
// Address: 0x114ae4 - 0x114b20
void entry_00114ae4_0x114ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ae4_0x114ae4");
#endif

    ctx->pc = 0x114ae4u;

    // 0x114ae4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x114AE4u;
    {
        const bool branch_taken_0x114ae4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x114AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AE4u;
        // 0x114ae8: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ae4) {
            ctx->pc = 0x114B20u;
            return;
        }
    }
    ctx->pc = 0x114AECu;
    // 0x114aec: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x114aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x114af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114af4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x114af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114af8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x114af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x114afc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x114b00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x114b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x114b04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x114b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x114b08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x114b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114b10: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x114b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x114b14: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x114B14u;
    {
        const bool branch_taken_0x114b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B14u;
        // 0x114b18: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b14) {
            ctx->pc = 0x114BB0u;
            return;
        }
    }
    ctx->pc = 0x114B1Cu;
    // 0x114b1c: 0x0  nop
    ctx->pc = 0x114b1cu;
    // NOP
    ctx->pc = 0x114b20u;
}
