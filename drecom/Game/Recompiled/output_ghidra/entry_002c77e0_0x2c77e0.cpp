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

// Function: entry_002c77e0
// Address: 0x2c77e0 - 0x2c7818
void entry_002c77e0_0x2c77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c77e0_0x2c77e0");
#endif

    switch (ctx->pc) {
        case 0x2c77f8u: goto label_2c77f8;
        default: break;
    }

    ctx->pc = 0x2c77e0u;

    // 0x2c77e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c77e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c77e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c77e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77ec: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c77ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c77f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C77F0u;
    SET_GPR_U32(ctx, 31, 0x2C77F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C77F0u, 0x2C77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77F8u;
label_2c77f8:
    // 0x2c77f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c77fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c77fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c7800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7800u;
    {
        const bool branch_taken_0x2c7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7800) {
            ctx->pc = 0x2C7818u;
            return;
        }
    }
    ctx->pc = 0x2C7808u;
    // 0x2c7808: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c7808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c780c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c780cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7810: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7814: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c7814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x2c7818u;
}
