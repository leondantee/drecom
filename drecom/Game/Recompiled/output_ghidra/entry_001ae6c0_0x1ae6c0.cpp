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

// Function: entry_001ae6c0
// Address: 0x1ae6c0 - 0x1ae738
void entry_001ae6c0_0x1ae6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae6c0_0x1ae6c0");
#endif

    switch (ctx->pc) {
        case 0x1ae710u: goto label_1ae710;
        default: break;
    }

    ctx->pc = 0x1ae6c0u;

    // 0x1ae6c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6c4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6c8: 0xc421b510  lwc1        $f1, -0x4AF0($at)
    ctx->pc = 0x1ae6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae6cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6d4: 0xc420b508  lwc1        $f0, -0x4AF8($at)
    ctx->pc = 0x1ae6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae6d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ae6dc: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae6e0: 0xe420efe0  swc1        $f0, -0x1020($at)
    ctx->pc = 0x1ae6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE0u, _value); } while (0); }
    // 0x1ae6e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6e8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6ec: 0xc421b514  lwc1        $f1, -0x4AEC($at)
    ctx->pc = 0x1ae6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae6f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae6f4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae6f8: 0xc420b50c  lwc1        $f0, -0x4AF4($at)
    ctx->pc = 0x1ae6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae6fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ae700: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ae704: 0xe420efe8  swc1        $f0, -0x1018($at)
    ctx->pc = 0x1ae704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5EEFE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5EEFE8u, _value); } while (0); }
    // 0x1ae708: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1AE708u;
    SET_GPR_U32(ctx, 31, 0x1AE710u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1AE708u, 0x1AE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE710u;
label_1ae710:
    // 0x1ae710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae714: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1ae718: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ae71c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ae720: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ae724: 0xa422b502  sh          $v0, -0x4AFE($at)
    ctx->pc = 0x1ae724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948098), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae72c: 0xa2220d86  sb          $v0, 0xD86($s1)
    ctx->pc = 0x1ae72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3462), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae730: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AE730u;
    {
        const bool branch_taken_0x1ae730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae730) {
            ctx->pc = 0x1AE76Cu;
            return;
        }
    }
    ctx->pc = 0x1AE738u;
}
