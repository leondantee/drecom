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

// Function: entry_001ce584
// Address: 0x1ce584 - 0x1ce630
void entry_001ce584_0x1ce584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce584_0x1ce584");
#endif

    switch (ctx->pc) {
        case 0x1ce5fcu: goto label_1ce5fc;
        default: break;
    }

    ctx->pc = 0x1ce584u;

    // 0x1ce584: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1ce584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce588: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1ce588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1ce58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ce58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ce590: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ce590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ce594: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CE594u;
    {
        const bool branch_taken_0x1ce594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce594) {
            ctx->pc = 0x1CE660u;
            return;
        }
    }
    ctx->pc = 0x1CE59Cu;
    // 0x1ce59c: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1ce59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ce5a0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ce5a4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CE5A4u;
    {
        const bool branch_taken_0x1ce5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5a4) {
            ctx->pc = 0x1CE660u;
            return;
        }
    }
    ctx->pc = 0x1CE5ACu;
    // 0x1ce5ac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ce5b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce5b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ce5bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ce5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1ce5c0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ce5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5c4: 0xc4a11388  lwc1        $f1, 0x1388($a1)
    ctx->pc = 0x1ce5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce5c8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1ce5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce5d0: 0x0  nop
    ctx->pc = 0x1ce5d0u;
    // NOP
    // 0x1ce5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce5d8: 0x0  nop
    ctx->pc = 0x1ce5d8u;
    // NOP
    // 0x1ce5dc: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1CE5DCu;
    {
        const bool branch_taken_0x1ce5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce5dc) {
            ctx->pc = 0x1CE660u;
            return;
        }
    }
    ctx->pc = 0x1CE5E4u;
    // 0x1ce5e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce5ec: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1ce5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce5f0: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1ce5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce5f4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CE5F4u;
    SET_GPR_U32(ctx, 31, 0x1CE5FCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CE5F4u, 0x1CE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5FCu;
label_1ce5fc:
    // 0x1ce5fc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ce600: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ce600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce608: 0x0  nop
    ctx->pc = 0x1ce608u;
    // NOP
    // 0x1ce60c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce610: 0x0  nop
    ctx->pc = 0x1ce610u;
    // NOP
    // 0x1ce614: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE614u;
    {
        const bool branch_taken_0x1ce614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce614) {
            ctx->pc = 0x1CE630u;
            return;
        }
    }
    ctx->pc = 0x1CE61Cu;
    // 0x1ce61c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1ce61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1ce620: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce624: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce628: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce62c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1ce630u;
}
