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

// Function: caseD_4
// Address: 0x2099d8 - 0x209aac
void caseD_4_0x2099d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2099d8");
#endif

    switch (ctx->pc) {
        case 0x209a2cu: goto label_209a2c;
        case 0x209a3cu: goto label_209a3c;
        default: break;
    }

    ctx->pc = 0x2099d8u;

    // 0x2099d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2099dc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2099dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2099e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2099e4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2099e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2099e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2099ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2099ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2099f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2099f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2099f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2099f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2099f8: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2099f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2099fc: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x2099FCu;
    {
        const bool branch_taken_0x2099fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2099fc) {
            ctx->pc = 0x209B14u;
            return;
        }
    }
    ctx->pc = 0x209A04u;
    // 0x209a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209a08: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x209a0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x209a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x209a10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x209a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x209a14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x209a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x209a18: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x209a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x209a1c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x209a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x209a20: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x209a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x209a24: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x209A24u;
    SET_GPR_U32(ctx, 31, 0x209A2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x209A24u, 0x209A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A2Cu;
label_209a2c:
    // 0x209a2c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x209a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x209a30: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x209a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x209a34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x209A34u;
    SET_GPR_U32(ctx, 31, 0x209A3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x209A34u, 0x209A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A3Cu;
label_209a3c:
    // 0x209a3c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a44: 0x0  nop
    ctx->pc = 0x209a44u;
    // NOP
    // 0x209a48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x209a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209a4c: 0x0  nop
    ctx->pc = 0x209a4cu;
    // NOP
    // 0x209a50: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x209A50u;
    {
        const bool branch_taken_0x209a50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x209a50) {
            ctx->pc = 0x209AACu;
            return;
        }
    }
    ctx->pc = 0x209A58u;
    // 0x209a58: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x209a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209a5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x209a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a64: 0x0  nop
    ctx->pc = 0x209a64u;
    // NOP
    // 0x209a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209a6c: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x209a70: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x209a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209a74: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x209a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x209a78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x209a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a80: 0x0  nop
    ctx->pc = 0x209a80u;
    // NOP
    // 0x209a84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209a88: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x209a8c: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x209a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209a90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x209a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209a98: 0x0  nop
    ctx->pc = 0x209a98u;
    // NOP
    // 0x209a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x209a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x209aa0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x209aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x209aa4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x209AA4u;
    {
        const bool branch_taken_0x209aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209aa4) {
            ctx->pc = 0x209B14u;
            return;
        }
    }
    ctx->pc = 0x209AACu;
}
