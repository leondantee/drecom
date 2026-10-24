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

// Function: entry_001619b4
// Address: 0x1619b4 - 0x161a0c
void entry_001619b4_0x1619b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001619b4_0x1619b4");
#endif

    switch (ctx->pc) {
        case 0x1619f8u: goto label_1619f8;
        default: break;
    }

    ctx->pc = 0x1619b4u;

    // 0x1619b4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1619b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619b8: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1619bc: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1619bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1619c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1619c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619c4: 0x0  nop
    ctx->pc = 0x1619c4u;
    // NOP
    // 0x1619c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1619c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1619cc: 0x0  nop
    ctx->pc = 0x1619ccu;
    // NOP
    // 0x1619d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1619D0u;
    {
        const bool branch_taken_0x1619d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1619d0) {
            ctx->pc = 0x161A0Cu;
            return;
        }
    }
    ctx->pc = 0x1619D8u;
    // 0x1619d8: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1619d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1619e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1619e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1619e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1619e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619e8: 0x0  nop
    ctx->pc = 0x1619e8u;
    // NOP
    // 0x1619ec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1619ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1619f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1619F0u;
    SET_GPR_U32(ctx, 31, 0x1619F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1619F0u, 0x1619F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619F8u;
label_1619f8:
    // 0x1619f8: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x1619f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x1619fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1619fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x161a00: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a04: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161AA0u;
            return;
        }
    }
    ctx->pc = 0x161A0Cu;
}
