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

// Function: entry_00249808
// Address: 0x249808 - 0x24989c
void entry_00249808_0x249808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249808_0x249808");
#endif

    switch (ctx->pc) {
        case 0x249874u: goto label_249874;
        default: break;
    }

    ctx->pc = 0x249808u;

    // 0x249808: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24980c: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x24980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x249810: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x249810u;
    {
        const bool branch_taken_0x249810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249810) {
            ctx->pc = 0x24989Cu;
            return;
        }
    }
    ctx->pc = 0x249818u;
    // 0x249818: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x249818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x24981c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24981cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249820: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x249824: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x249824u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249828: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24982c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x249830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249834: 0x0  nop
    ctx->pc = 0x249834u;
    // NOP
    // 0x249838: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x249838u;
    {
        const bool branch_taken_0x249838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249838) {
            ctx->pc = 0x2498B0u;
            return;
        }
    }
    ctx->pc = 0x249840u;
    // 0x249840: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249844: 0x8465002c  lh          $a1, 0x2C($v1)
    ctx->pc = 0x249844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x249848: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x249848u;
    {
        const bool branch_taken_0x249848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249848) {
            ctx->pc = 0x2498B0u;
            return;
        }
    }
    ctx->pc = 0x249850u;
    // 0x249850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x249850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249854: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249858: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x249858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x24985c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249860: 0x8485002c  lh          $a1, 0x2C($a0)
    ctx->pc = 0x249860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x249864: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x249864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x249868: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x249868u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x24986c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24986Cu;
    SET_GPR_U32(ctx, 31, 0x249874u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24986Cu, 0x249874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249874u;
label_249874:
    // 0x249874: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249874u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249878: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24987c: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x24987cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x249880: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x249880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x249884: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x249884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x249888: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x249888u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x24988c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249890: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x249890u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x249894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x249894u;
    {
        const bool branch_taken_0x249894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249894) {
            ctx->pc = 0x2498B0u;
            return;
        }
    }
    ctx->pc = 0x24989Cu;
}
