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

// Function: entry_00201998
// Address: 0x201998 - 0x201a24
void entry_00201998_0x201998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201998_0x201998");
#endif

    switch (ctx->pc) {
        case 0x2019c0u: goto label_2019c0;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019f8u: goto label_2019f8;
        case 0x201a04u: goto label_201a04;
        case 0x201a14u: goto label_201a14;
        default: break;
    }

    ctx->pc = 0x201998u;

    // 0x201998: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20199c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x20199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2019a0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2019a0u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x2019a4: 0x8e230a70  lw          $v1, 0xA70($s1)
    ctx->pc = 0x2019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x2019a8: 0x8e220a70  lw          $v0, 0xA70($s1)
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2672)));
    // 0x2019ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019b0: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x2019b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x2019b4: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x2019b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2019b8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2019B8u;
    SET_GPR_U32(ctx, 31, 0x2019C0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2019C0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2019C0u) { return; }
    ctx->pc = 0x2019C0u;
label_2019c0:
    // 0x2019c0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x2019c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2019c4: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x2019c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2019c8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2019C8u;
    SET_GPR_U32(ctx, 31, 0x2019D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2019C8u, 0x2019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019D0u;
label_2019d0:
    // 0x2019d0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2019d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2019d4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2019d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2019d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2019d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2019dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2019dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019e0: 0x0  nop
    ctx->pc = 0x2019e0u;
    // NOP
    // 0x2019e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2019e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2019e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2019e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2019ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2019f0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x2019F0u;
    SET_GPR_U32(ctx, 31, 0x2019F8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x2019F8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2019F8u) { return; }
    ctx->pc = 0x2019F8u;
label_2019f8:
    // 0x2019f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2019f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2019fc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2019FCu;
    SET_GPR_U32(ctx, 31, 0x201A04u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2019FCu, 0x201A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A04u;
label_201a04:
    // 0x201a04: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x201a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x201a08: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x201a08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x201a0c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x201A0Cu;
    SET_GPR_U32(ctx, 31, 0x201A14u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x201A0Cu, 0x201A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A14u;
label_201a14:
    // 0x201a14: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x201a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x201a18: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x201a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201a1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x201A1Cu;
    {
        const bool branch_taken_0x201a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a1c) {
            ctx->pc = 0x201A70u;
            return;
        }
    }
    ctx->pc = 0x201A24u;
}
