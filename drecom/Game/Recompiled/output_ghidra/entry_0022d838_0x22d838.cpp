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

// Function: entry_0022d838
// Address: 0x22d838 - 0x22d978
void entry_0022d838_0x22d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d838_0x22d838");
#endif

    switch (ctx->pc) {
        case 0x22d864u: goto label_22d864;
        case 0x22d880u: goto label_22d880;
        case 0x22d8e4u: goto label_22d8e4;
        default: break;
    }

    ctx->pc = 0x22d838u;

    // 0x22d838: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22d83c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22d840: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22d840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22d844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d84c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22d850: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d854: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22d858: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22d85c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22D85Cu;
    SET_GPR_U32(ctx, 31, 0x22D864u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22D85Cu, 0x22D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D864u;
label_22d864:
    // 0x22d864: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22d868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d86c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d870: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d874: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22d874u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d878: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22D878u;
    SET_GPR_U32(ctx, 31, 0x22D880u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22D878u, 0x22D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D880u;
label_22d880:
    // 0x22d880: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d884: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22d888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d88c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d890: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d894: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22d894u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d89c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22d8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d8a4: 0x0  nop
    ctx->pc = 0x22d8a4u;
    // NOP
    // 0x22d8a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22d8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22d8ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d8b0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d8b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d8b8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22d8b8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d8bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d8c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22d8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22d8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d8cc: 0x0  nop
    ctx->pc = 0x22d8ccu;
    // NOP
    // 0x22d8d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22d8d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d8d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d8dc: 0xc040c24  jal         func_103090
    ctx->pc = 0x22D8DCu;
    SET_GPR_U32(ctx, 31, 0x22D8E4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22D8E4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22D8E4u) { return; }
    ctx->pc = 0x22D8E4u;
label_22d8e4:
    // 0x22d8e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d8e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d8ec: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8f0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d8f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d8f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d8fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d900: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d904: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22d904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22d908: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d90c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d910: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d914: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d914u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d918: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x22d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d920: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d924: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d928: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22d92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d930: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x22d934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d938: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x22d938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d940: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x22d940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x22d944: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22d948: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22d94c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x22d94cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x22d950: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D950u;
    {
        const bool branch_taken_0x22d950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d950) {
            ctx->pc = 0x22D978u;
            return;
        }
    }
    ctx->pc = 0x22D958u;
    // 0x22d958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d95c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d960: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d964: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x22d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x22d968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d96c: 0x0  nop
    ctx->pc = 0x22d96cu;
    // NOP
    // 0x22d970: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d974: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x22d978u;
}
