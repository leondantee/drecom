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

// Function: entry_002c4658
// Address: 0x2c4658 - 0x2c4728
void entry_002c4658_0x2c4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4658_0x2c4658");
#endif

    ctx->pc = 0x2c4658u;

    // 0x2c4658: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c465c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4660: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2c4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c4664: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2c4664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2c4668: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C4668u;
    {
        const bool branch_taken_0x2c4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4668) {
            ctx->pc = 0x2C4788u;
            return;
        }
    }
    ctx->pc = 0x2C4670u;
    // 0x2c4670: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4678: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c467c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4680: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4684: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4688: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c4688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c468c: 0x0  nop
    ctx->pc = 0x2c468cu;
    // NOP
    // 0x2c4690: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x2C4690u;
    {
        const bool branch_taken_0x2c4690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4690) {
            ctx->pc = 0x2C4788u;
            return;
        }
    }
    ctx->pc = 0x2C4698u;
    // 0x2c4698: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c469c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46a0: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c46a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c46a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46ac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c46acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c46b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c46b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c46b4: 0x0  nop
    ctx->pc = 0x2c46b4u;
    // NOP
    // 0x2c46b8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2C46B8u;
    {
        const bool branch_taken_0x2c46b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c46b8) {
            ctx->pc = 0x2C4728u;
            return;
        }
    }
    ctx->pc = 0x2C46C0u;
    // 0x2c46c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c46c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46c8: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2c46c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c46cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c46d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46d4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c46d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c46d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c46d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c46dc: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c46dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c46e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c46e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46e8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2c46e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c46ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c46f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c46f4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c46f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c46f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c46f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c46fc: 0x0  nop
    ctx->pc = 0x2c46fcu;
    // NOP
    // 0x2c4700: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4700u;
    {
        const bool branch_taken_0x2c4700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4700) {
            ctx->pc = 0x2C4788u;
            return;
        }
    }
    ctx->pc = 0x2C4708u;
    // 0x2c4708: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c470c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4710: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2c4710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4714: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4718: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c471c: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c4720: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C4720u;
    {
        const bool branch_taken_0x2c4720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4720) {
            ctx->pc = 0x2C4788u;
            return;
        }
    }
    ctx->pc = 0x2C4728u;
}
