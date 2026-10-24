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

// Function: entry_0030425c
// Address: 0x30425c - 0x3042c0
void entry_0030425c_0x30425c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030425c_0x30425c");
#endif

    switch (ctx->pc) {
        case 0x3042a4u: goto label_3042a4;
        case 0x3042b8u: goto label_3042b8;
        default: break;
    }

    ctx->pc = 0x30425cu;

    // 0x30425c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304260: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x304264: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x304264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x304268: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x304268u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30426c: 0x28410023  slti        $at, $v0, 0x23
    ctx->pc = 0x30426cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x304270: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x304270u;
    {
        const bool branch_taken_0x304270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304270) {
            ctx->pc = 0x3042C0u;
            return;
        }
    }
    ctx->pc = 0x304278u;
    // 0x304278: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x304278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x30427c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x30427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x304280: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x304280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x304284: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304288: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30428c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304290: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x304290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x304294: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x304294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304298: 0xc44d1264  lwc1        $f13, 0x1264($v0)
    ctx->pc = 0x304298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30429c: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x30429Cu;
    SET_GPR_U32(ctx, 31, 0x3042A4u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x30429Cu, 0x3042A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042A4u;
label_3042a4:
    // 0x3042a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042a8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3042a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3042ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3042acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3042b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3042B0u;
    SET_GPR_U32(ctx, 31, 0x3042B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3042B0u, 0x3042B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042B8u;
label_3042b8:
    // 0x3042b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3042b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3042bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3042bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x3042c0u;
}
