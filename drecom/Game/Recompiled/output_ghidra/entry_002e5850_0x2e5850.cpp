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

// Function: entry_002e5850
// Address: 0x2e5850 - 0x2e5940
void entry_002e5850_0x2e5850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5850_0x2e5850");
#endif

    switch (ctx->pc) {
        case 0x2e587cu: goto label_2e587c;
        case 0x2e5898u: goto label_2e5898;
        case 0x2e58b0u: goto label_2e58b0;
        case 0x2e58bcu: goto label_2e58bc;
        case 0x2e58ccu: goto label_2e58cc;
        case 0x2e58e4u: goto label_2e58e4;
        default: break;
    }

    ctx->pc = 0x2e5850u;

    // 0x2e5850: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5854: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2e5854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e585c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2e585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2e5860: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5868: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2e586c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2e586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5870: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2e5870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2e5874: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5874u;
    SET_GPR_U32(ctx, 31, 0x2E587Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5874u, 0x2E587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E587Cu;
label_2e587c:
    // 0x2e587c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e5880: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5884: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5888: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e5888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e588c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e588cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5890: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5890u;
    SET_GPR_U32(ctx, 31, 0x2E5898u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5890u, 0x2E5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5898u;
label_2e5898:
    // 0x2e5898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e589c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e589cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e58a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e58a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E58A8u;
    SET_GPR_U32(ctx, 31, 0x2E58B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E58A8u, 0x2E58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58B0u;
label_2e58b0:
    // 0x2e58b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E58B4u;
    SET_GPR_U32(ctx, 31, 0x2E58BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E58B4u, 0x2E58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58BCu;
label_2e58bc:
    // 0x2e58bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e58c4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E58C4u;
    SET_GPR_U32(ctx, 31, 0x2E58CCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E58C4u, 0x2E58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58CCu;
label_2e58cc:
    // 0x2e58cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58d4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e58d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e58dc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E58DCu;
    SET_GPR_U32(ctx, 31, 0x2E58E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E58DCu, 0x2E58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58E4u;
label_2e58e4:
    // 0x2e58e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e58e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e58e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58ec: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e58ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e58f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e58f4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e58f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e58f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e58f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e58fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e58fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e5900: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5904: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5908: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e590c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e590cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5910: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5914: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5918: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e591c: 0x0  nop
    ctx->pc = 0x2e591cu;
    // NOP
    // 0x2e5920: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5920u;
    {
        const bool branch_taken_0x2e5920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5920) {
            ctx->pc = 0x2E5940u;
            return;
        }
    }
    ctx->pc = 0x2E5928u;
    // 0x2e5928: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e592c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5930: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5934: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e593c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e593cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2e5940u;
}
