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

// Function: entry_0019eeec
// Address: 0x19eeec - 0x19ef40
void entry_0019eeec_0x19eeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eeec_0x19eeec");
#endif

    switch (ctx->pc) {
        case 0x19ef30u: goto label_19ef30;
        default: break;
    }

    ctx->pc = 0x19eeecu;

    // 0x19eeec: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x19eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19eef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19eef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19eef4: 0x0  nop
    ctx->pc = 0x19eef4u;
    // NOP
    // 0x19eef8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19eef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19eefc: 0x0  nop
    ctx->pc = 0x19eefcu;
    // NOP
    // 0x19ef00: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x19EF00u;
    {
        const bool branch_taken_0x19ef00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ef00) {
            ctx->pc = 0x19EF40u;
            return;
        }
    }
    ctx->pc = 0x19EF08u;
    // 0x19ef08: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x19ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x19ef0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ef10: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x19ef14: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x19ef14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x19ef18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ef18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ef1c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x19ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ef20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ef24: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x19ef24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x19ef28: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EF28u;
    SET_GPR_U32(ctx, 31, 0x19EF30u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EF28u, 0x19EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF30u;
label_19ef30:
    // 0x19ef30: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19ef30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ef34: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19ef34u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x19ef38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19EF38u;
    {
        const bool branch_taken_0x19ef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef38) {
            ctx->pc = 0x19EF70u;
            return;
        }
    }
    ctx->pc = 0x19EF40u;
}
