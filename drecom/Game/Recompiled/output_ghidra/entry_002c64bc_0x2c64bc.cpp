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

// Function: entry_002c64bc
// Address: 0x2c64bc - 0x2c64fc
void entry_002c64bc_0x2c64bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c64bc_0x2c64bc");
#endif

    switch (ctx->pc) {
        case 0x2c64d8u: goto label_2c64d8;
        default: break;
    }

    ctx->pc = 0x2c64bcu;

    // 0x2c64bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c64c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c64c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c64cc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c64ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c64d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C64D0u;
    SET_GPR_U32(ctx, 31, 0x2C64D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C64D0u, 0x2C64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64D8u;
label_2c64d8:
    // 0x2c64d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c64d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c64dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c64dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c64e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C64E0u;
    {
        const bool branch_taken_0x2c64e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64e0) {
            ctx->pc = 0x2C64FCu;
            return;
        }
    }
    ctx->pc = 0x2C64E8u;
    // 0x2c64e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c64ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c64f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c64f8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x2c64fcu;
}
