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

// Function: entry_00216374
// Address: 0x216374 - 0x2163c0
void entry_00216374_0x216374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216374_0x216374");
#endif

    switch (ctx->pc) {
        case 0x21638cu: goto label_21638c;
        default: break;
    }

    ctx->pc = 0x216374u;

    // 0x216374: 0x2630ca50  addiu       $s0, $s1, -0x35B0
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953552));
    // 0x216378: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x216378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x21637c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216380: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x216380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x216384: 0xc085676  jal         func_2159D8
    ctx->pc = 0x216384u;
    SET_GPR_U32(ctx, 31, 0x21638Cu);
    ctx->pc = 0x216388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216384u;
    // 0x216388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x21638Cu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21638Cu) { return; }
    ctx->pc = 0x21638Cu;
label_21638c:
    // 0x21638c: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x21638Cu;
    {
        const bool branch_taken_0x21638c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21638Cu;
        // 0x216390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21638c) {
            ctx->pc = 0x216464u;
            return;
        }
    }
    ctx->pc = 0x216394u;
    // 0x216394: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x216398: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x216398u;
    {
        const bool branch_taken_0x216398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216398u;
        // 0x21639c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216398) {
            ctx->pc = 0x216350u;
            return;
        }
    }
    ctx->pc = 0x2163A0u;
    // 0x2163a0: 0x2443c950  addiu       $v1, $v0, -0x36B0
    ctx->pc = 0x2163a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
    // 0x2163a4: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2163a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2163a8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2163a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2163ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2163ACu;
    {
        const bool branch_taken_0x2163ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163ACu;
        // 0x2163b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163ac) {
            ctx->pc = 0x2163E4u;
            return;
        }
    }
    ctx->pc = 0x2163B4u;
    // 0x2163b4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2163b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2163b8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2163bc: 0x0  nop
    ctx->pc = 0x2163bcu;
    // NOP
    ctx->pc = 0x2163c0u;
}
