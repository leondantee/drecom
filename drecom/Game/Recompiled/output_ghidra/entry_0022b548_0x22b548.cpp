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

// Function: entry_0022b548
// Address: 0x22b548 - 0x22b5c4
void entry_0022b548_0x22b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b548_0x22b548");
#endif

    switch (ctx->pc) {
        case 0x22b558u: goto label_22b558;
        case 0x22b564u: goto label_22b564;
        default: break;
    }

    ctx->pc = 0x22b548u;

    // 0x22b548: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b54c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22b550: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22B550u;
    SET_GPR_U32(ctx, 31, 0x22B558u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22B550u, 0x22B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B558u;
label_22b558:
    // 0x22b558: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b55c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22B55Cu;
    SET_GPR_U32(ctx, 31, 0x22B564u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22B55Cu, 0x22B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B564u;
label_22b564:
    // 0x22b564: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b568: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22b56c: 0x24503520  addiu       $s0, $v0, 0x3520
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x22b570: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b574: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x22b574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x22b578: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x22b578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x22b57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b580: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x22b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b584: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22b584u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22b588: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x22b58c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x22b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b590: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x22b590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x22b594: 0x34a2cccd  ori         $v0, $a1, 0xCCCD
    ctx->pc = 0x22b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x22b598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b59c: 0x0  nop
    ctx->pc = 0x22b59cu;
    // NOP
    // 0x22b5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b5a4: 0x0  nop
    ctx->pc = 0x22b5a4u;
    // NOP
    // 0x22b5a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22B5A8u;
    {
        const bool branch_taken_0x22b5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b5a8) {
            ctx->pc = 0x22B5C4u;
            return;
        }
    }
    ctx->pc = 0x22B5B0u;
    // 0x22b5b0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22b5b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22b5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5bc: 0x0  nop
    ctx->pc = 0x22b5bcu;
    // NOP
    // 0x22b5c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x22b5c4u;
}
