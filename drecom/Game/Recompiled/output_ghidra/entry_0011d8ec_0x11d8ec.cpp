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

// Function: entry_0011d8ec
// Address: 0x11d8ec - 0x11d910
void entry_0011d8ec_0x11d8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d8ec_0x11d8ec");
#endif

    ctx->pc = 0x11d8ecu;

    // 0x11d8ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11d8f0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11d8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11d8f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D8F4u;
    {
        const bool branch_taken_0x11d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8F4u;
        // 0x11d8f8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f4) {
            ctx->pc = 0x11D910u;
            return;
        }
    }
    ctx->pc = 0x11D8FCu;
    // 0x11d8fc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x11d8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x11d900: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11d904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D904u;
    {
        const bool branch_taken_0x11d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D904u;
        // 0x11d908: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d904) {
            ctx->pc = 0x11D928u;
            return;
        }
    }
    ctx->pc = 0x11D90Cu;
    // 0x11d90c: 0x0  nop
    ctx->pc = 0x11d90cu;
    // NOP
    ctx->pc = 0x11d910u;
}
