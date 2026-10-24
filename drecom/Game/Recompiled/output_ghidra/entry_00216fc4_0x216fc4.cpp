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

// Function: entry_00216fc4
// Address: 0x216fc4 - 0x216fec
void entry_00216fc4_0x216fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216fc4_0x216fc4");
#endif

    switch (ctx->pc) {
        case 0x216fdcu: goto label_216fdc;
        default: break;
    }

    ctx->pc = 0x216fc4u;

    // 0x216fc4: 0x2630cac0  addiu       $s0, $s1, -0x3540
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953664));
    // 0x216fc8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x216fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x216fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fd0: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x216fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x216fd4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x216FD4u;
    SET_GPR_U32(ctx, 31, 0x216FDCu);
    ctx->pc = 0x216FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FD4u;
    // 0x216fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x216FDCu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216FDCu) { return; }
    ctx->pc = 0x216FDCu;
label_216fdc:
    // 0x216fdc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216FDCu;
    {
        const bool branch_taken_0x216fdc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216fdc) {
            ctx->pc = 0x216FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FDCu;
            // 0x216fe0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FECu;
            return;
        }
    }
    ctx->pc = 0x216FE4u;
    // 0x216fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216FE4u;
    {
        const bool branch_taken_0x216fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE4u;
        // 0x216fe8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe4) {
            ctx->pc = 0x216FFCu;
            return;
        }
    }
    ctx->pc = 0x216FECu;
}
