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

// Function: entry_002c64fc
// Address: 0x2c64fc - 0x2c6564
void entry_002c64fc_0x2c64fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c64fc_0x2c64fc");
#endif

    switch (ctx->pc) {
        case 0x2c6504u: goto label_2c6504;
        default: break;
    }

    ctx->pc = 0x2c64fcu;

    // 0x2c64fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C64FCu;
    SET_GPR_U32(ctx, 31, 0x2C6504u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C64FCu, 0x2C6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6504u;
label_2c6504:
    // 0x2c6504: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6508: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c650c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c650cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6510: 0x0  nop
    ctx->pc = 0x2c6510u;
    // NOP
    // 0x2c6514: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6518: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c651c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c651cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6520: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6524: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c652c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6534: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2c6534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6538: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c653c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6540: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c654c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6550: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c6554: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c6554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c655c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6560: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c6560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2c6564u;
}
