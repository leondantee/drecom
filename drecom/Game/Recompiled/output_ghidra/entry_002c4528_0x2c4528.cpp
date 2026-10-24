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

// Function: entry_002c4528
// Address: 0x2c4528 - 0x2c45f8
void entry_002c4528_0x2c4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4528_0x2c4528");
#endif

    ctx->pc = 0x2c4528u;

    // 0x2c4528: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c452c: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x2c452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4530: 0x8cc7001c  lw          $a3, 0x1C($a2)
    ctx->pc = 0x2c4530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c4534: 0x30e80004  andi        $t0, $a3, 0x4
    ctx->pc = 0x2c4534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2c4538: 0x15000047  bnez        $t0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2C4538u;
    {
        const bool branch_taken_0x2c4538 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4538) {
            ctx->pc = 0x2C4658u;
            return;
        }
    }
    ctx->pc = 0x2C4540u;
    // 0x2c4540: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4544: 0x25221330  addiu       $v0, $t1, 0x1330
    ctx->pc = 0x2c4544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
    // 0x2c4548: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c454c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2c454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4550: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4554: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c4554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4558: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c4558u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c455c: 0x0  nop
    ctx->pc = 0x2c455cu;
    // NOP
    // 0x2c4560: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x2C4560u;
    {
        const bool branch_taken_0x2c4560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4560) {
            ctx->pc = 0x2C4658u;
            return;
        }
    }
    ctx->pc = 0x2C4568u;
    // 0x2c4568: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c456c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4570: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2c4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4574: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c457c: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c4580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4584: 0x0  nop
    ctx->pc = 0x2c4584u;
    // NOP
    // 0x2c4588: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4588u;
    {
        const bool branch_taken_0x2c4588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4588) {
            ctx->pc = 0x2C45F8u;
            return;
        }
    }
    ctx->pc = 0x2C4590u;
    // 0x2c4590: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4598: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2c4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c459c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c45a4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c45a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c45ac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c45b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c45b8: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c45bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c45c4: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c45c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c45cc: 0x0  nop
    ctx->pc = 0x2c45ccu;
    // NOP
    // 0x2c45d0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2C45D0u;
    {
        const bool branch_taken_0x2c45d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c45d0) {
            ctx->pc = 0x2C4658u;
            return;
        }
    }
    ctx->pc = 0x2C45D8u;
    // 0x2c45d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c45e0: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2c45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c45e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c45e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c45ec: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c45ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c45f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C45F0u;
    {
        const bool branch_taken_0x2c45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c45f0) {
            ctx->pc = 0x2C4658u;
            return;
        }
    }
    ctx->pc = 0x2C45F8u;
}
