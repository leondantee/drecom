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

// Function: entry_0015bed0
// Address: 0x15bed0 - 0x15bf08
void entry_0015bed0_0x15bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bed0_0x15bed0");
#endif

    ctx->pc = 0x15bed0u;

    // 0x15bed0: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x15bed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x15bed4: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x15BED4u;
    {
        const bool branch_taken_0x15bed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bed4) {
            ctx->pc = 0x15BD60u;
            return;
        }
    }
    ctx->pc = 0x15BEDCu;
    // 0x15bedc: 0x6a1000e  bgez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x15BEDCu;
    {
        const bool branch_taken_0x15bedc = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x15bedc) {
            ctx->pc = 0x15BF18u;
            return;
        }
    }
    ctx->pc = 0x15BEE4u;
    // 0x15bee4: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x15bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bee8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x15beec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15bef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bef4: 0x0  nop
    ctx->pc = 0x15bef4u;
    // NOP
    // 0x15bef8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15bef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15befc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x15befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x15bf00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x15bf04: 0x0  nop
    ctx->pc = 0x15bf04u;
    // NOP
    ctx->pc = 0x15bf08u;
}
