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

// Function: entry_00113d70
// Address: 0x113d70 - 0x113db0
void entry_00113d70_0x113d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d70_0x113d70");
#endif

    ctx->pc = 0x113d70u;

    // 0x113d70: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x113d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x113d74: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x113d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x113d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d7c: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x113d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x113d80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x113d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x113d84: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113d88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x113d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x113d90: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x113d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x113d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d98: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x113d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113d9c: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x113D9Cu;
    {
        const bool branch_taken_0x113d9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x113DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D9Cu;
        // 0x113da0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d9c) {
            ctx->pc = 0x113DECu;
            return;
        }
    }
    ctx->pc = 0x113DA4u;
    // 0x113da4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113da8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x113da8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113dac: 0x0  nop
    ctx->pc = 0x113dacu;
    // NOP
    ctx->pc = 0x113db0u;
}
