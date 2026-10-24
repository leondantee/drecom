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

// Function: entry_0011d5e0
// Address: 0x11d5e0 - 0x11d630
void entry_0011d5e0_0x11d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d5e0_0x11d5e0");
#endif

    ctx->pc = 0x11d5e0u;

    // 0x11d5e0: 0x8603c  dsll32      $t4, $t0, 0
    ctx->pc = 0x11d5e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11d5e4: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11d5e4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11d5e8: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x11d5e8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d5ec: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11d5ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11d5f0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x11d5f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x11d5f4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x11d5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11d5f8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x11d5f8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11d5fc: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x11D5FCu;
    {
        const bool branch_taken_0x11d5fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5FCu;
        // 0x11d600: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5fc) {
            ctx->pc = 0x11D8CCu;
            return;
        }
    }
    ctx->pc = 0x11D604u;
    // 0x11d604: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x11d604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d608: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11D608u;
    {
        const bool branch_taken_0x11d608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D608u;
        // 0x11d60c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d608) {
            ctx->pc = 0x11D698u;
            return;
        }
    }
    ctx->pc = 0x11D610u;
    // 0x11d610: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11d610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d614: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D614u;
    {
        const bool branch_taken_0x11d614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D614u;
        // 0x11d618: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d614) {
            ctx->pc = 0x11D630u;
            return;
        }
    }
    ctx->pc = 0x11D61Cu;
    // 0x11d61c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x11d61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d620: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D624u;
    {
        const bool branch_taken_0x11d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D624u;
        // 0x11d628: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d624) {
            ctx->pc = 0x11D648u;
            return;
        }
    }
    ctx->pc = 0x11D62Cu;
    // 0x11d62c: 0x0  nop
    ctx->pc = 0x11d62cu;
    // NOP
    ctx->pc = 0x11d630u;
}
