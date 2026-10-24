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

// Function: entry_002cdf38
// Address: 0x2cdf38 - 0x2cdf94
void entry_002cdf38_0x2cdf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdf38_0x2cdf38");
#endif

    switch (ctx->pc) {
        case 0x2cdf74u: goto label_2cdf74;
        default: break;
    }

    ctx->pc = 0x2cdf38u;

    // 0x2cdf38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf3c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2cdf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cdf40: 0x90a40038  lbu         $a0, 0x38($a1)
    ctx->pc = 0x2cdf40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2cdf44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cdf48: 0xa0a30038  sb          $v1, 0x38($a1)
    ctx->pc = 0x2cdf48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cdf4c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CDF4Cu;
    {
        const bool branch_taken_0x2cdf4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf4c) {
            ctx->pc = 0x2CDFA4u;
            return;
        }
    }
    ctx->pc = 0x2CDF54u;
    // 0x2cdf54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdf5c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2cdf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdf60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf64: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cdf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdf68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdf68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdf6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDF6Cu, 0x2CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF74u;
label_2cdf74:
    // 0x2cdf74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf78: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cdf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cdf7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cdf84: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2cdf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdf88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdf8c: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdf90: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdf90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x2cdf94u;
}
