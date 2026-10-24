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

// Function: entry_00217210
// Address: 0x217210 - 0x217234
void entry_00217210_0x217210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217210_0x217210");
#endif

    switch (ctx->pc) {
        case 0x217224u: goto label_217224;
        default: break;
    }

    ctx->pc = 0x217210u;

    // 0x217210: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x217214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217218: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x217218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x21721c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x21721Cu;
    SET_GPR_U32(ctx, 31, 0x217224u);
    ctx->pc = 0x217220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21721Cu;
    // 0x217220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x217224u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217224u) { return; }
    ctx->pc = 0x217224u;
label_217224:
    // 0x217224: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217224u;
    {
        const bool branch_taken_0x217224 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217224) {
            ctx->pc = 0x217228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217224u;
            // 0x217228: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217234u;
            return;
        }
    }
    ctx->pc = 0x21722Cu;
    // 0x21722c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21722Cu;
    {
        const bool branch_taken_0x21722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21722Cu;
        // 0x217230: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21722c) {
            ctx->pc = 0x2172D0u;
            return;
        }
    }
    ctx->pc = 0x217234u;
}
