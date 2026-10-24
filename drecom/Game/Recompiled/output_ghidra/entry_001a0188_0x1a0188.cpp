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

// Function: entry_001a0188
// Address: 0x1a0188 - 0x1a01dc
void entry_001a0188_0x1a0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0188_0x1a0188");
#endif

    switch (ctx->pc) {
        case 0x1a01ccu: goto label_1a01cc;
        default: break;
    }

    ctx->pc = 0x1a0188u;

    // 0x1a0188: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a018c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a018cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0190: 0x0  nop
    ctx->pc = 0x1a0190u;
    // NOP
    // 0x1a0194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0198: 0x0  nop
    ctx->pc = 0x1a0198u;
    // NOP
    // 0x1a019c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1A019Cu;
    {
        const bool branch_taken_0x1a019c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a019c) {
            ctx->pc = 0x1A01DCu;
            return;
        }
    }
    ctx->pc = 0x1A01A4u;
    // 0x1a01a4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1a01a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a01a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a01ac: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x1a01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x1a01b0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1a01b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1a01b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a01b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a01b8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a01bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a01c0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1a01c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a01c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A01C4u;
    SET_GPR_U32(ctx, 31, 0x1A01CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A01C4u, 0x1A01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01CCu;
label_1a01cc:
    // 0x1a01cc: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x1a01ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a01d0: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x1a01d0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x1a01d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A01D4u;
    {
        const bool branch_taken_0x1a01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a01d4) {
            ctx->pc = 0x1A0210u;
            return;
        }
    }
    ctx->pc = 0x1A01DCu;
}
