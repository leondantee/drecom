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

// Function: entry_002c42d0
// Address: 0x2c42d0 - 0x2c4390
void entry_002c42d0_0x2c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c42d0_0x2c42d0");
#endif

    switch (ctx->pc) {
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4344u: goto label_2c4344;
        default: break;
    }

    ctx->pc = 0x2c42d0u;

    // 0x2c42d0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x2c42d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c42d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c42d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c42d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c42d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c42dc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C42DCu;
    {
        const bool branch_taken_0x2c42dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c42dc) {
            ctx->pc = 0x2C43ECu;
            return;
        }
    }
    ctx->pc = 0x2C42E4u;
    // 0x2c42e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c42ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c42f0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2c42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c42f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2C42F4u;
    SET_GPR_U32(ctx, 31, 0x2C42FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2C42FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C42FCu) { return; }
    ctx->pc = 0x2C42FCu;
label_2c42fc:
    // 0x2c42fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4300: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c4304: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c4304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c4308: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c430c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2C430Cu;
    SET_GPR_U32(ctx, 31, 0x2C4314u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2C4314u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C4314u) { return; }
    ctx->pc = 0x2C4314u;
label_2c4314:
    // 0x2c4314: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2c4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4318: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2c431c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c431cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4320: 0x0  nop
    ctx->pc = 0x2c4320u;
    // NOP
    // 0x2c4324: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4328: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c4328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c432c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c4330: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c4330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4334: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c4334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c4338: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2c4338u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c433c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2C433Cu;
    SET_GPR_U32(ctx, 31, 0x2C4344u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2C433Cu, 0x2C4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4344u;
label_2c4344:
    // 0x2c4344: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2c4344u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4348: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c434c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4350: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c4350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c4354: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x2c4354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x2c4358: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x2c4358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x2c435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4360: 0x0  nop
    ctx->pc = 0x2c4360u;
    // NOP
    // 0x2c4364: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c4364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c4368: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4368u;
    {
        const bool branch_taken_0x2c4368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4368) {
            ctx->pc = 0x2C4390u;
            return;
        }
    }
    ctx->pc = 0x2C4370u;
    // 0x2c4370: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4374: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c4374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c4378: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c437c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4384: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2c4384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2c4388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4388u;
    {
        const bool branch_taken_0x2c4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4388) {
            ctx->pc = 0x2C43A4u;
            return;
        }
    }
    ctx->pc = 0x2C4390u;
}
