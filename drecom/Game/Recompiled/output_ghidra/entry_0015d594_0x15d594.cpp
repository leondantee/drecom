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

// Function: entry_0015d594
// Address: 0x15d594 - 0x15d610
void entry_0015d594_0x15d594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d594_0x15d594");
#endif

    switch (ctx->pc) {
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5c8u: goto label_15d5c8;
        default: break;
    }

    ctx->pc = 0x15d594u;

    // 0x15d594: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d598: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d59c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d5a0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D610u;
            return;
        }
    }
    ctx->pc = 0x15D5A8u;
    // 0x15d5a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d5ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d5b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x15d5b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15D5B4u;
    SET_GPR_U32(ctx, 31, 0x15D5BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15D5BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15D5BCu) { return; }
    ctx->pc = 0x15D5BCu;
label_15d5bc:
    // 0x15d5bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d5c0: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x15D5C0u;
    SET_GPR_U32(ctx, 31, 0x15D5C8u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x15D5C0u, 0x15D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15d5cc: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x15d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d5d0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d5d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d5dc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d5e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15d5e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15d5e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15d5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15d5e8: 0x0  nop
    ctx->pc = 0x15d5e8u;
    // NOP
    // 0x15d5ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15D5ECu;
    {
        const bool branch_taken_0x15d5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d5ec) {
            ctx->pc = 0x15D610u;
            return;
        }
    }
    ctx->pc = 0x15D5F4u;
    // 0x15d5f4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x15d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d5f8: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d5fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d604: 0x0  nop
    ctx->pc = 0x15d604u;
    // NOP
    // 0x15d608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15d608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15d60c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x15d610u;
}
