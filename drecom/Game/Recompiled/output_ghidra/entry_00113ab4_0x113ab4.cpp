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

// Function: entry_00113ab4
// Address: 0x113ab4 - 0x113ae8
void entry_00113ab4_0x113ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ab4_0x113ab4");
#endif

    ctx->pc = 0x113ab4u;

    // 0x113ab4: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x113ab4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113abc: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x113abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x113ac0: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x113AC0u;
    {
        const bool branch_taken_0x113ac0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x113AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AC0u;
        // 0x113ac4: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ac0) {
            ctx->pc = 0x113B24u;
            return;
        }
    }
    ctx->pc = 0x113AC8u;
    // 0x113ac8: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x113ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x113acc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113ad0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x113ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113ad4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x113ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x113ad8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x113ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113adc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x113adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113ae0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x113ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ae4: 0x0  nop
    ctx->pc = 0x113ae4u;
    // NOP
    ctx->pc = 0x113ae8u;
}
