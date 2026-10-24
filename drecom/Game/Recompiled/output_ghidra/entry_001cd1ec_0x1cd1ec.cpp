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

// Function: entry_001cd1ec
// Address: 0x1cd1ec - 0x1cd29c
void entry_001cd1ec_0x1cd1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd1ec_0x1cd1ec");
#endif

    switch (ctx->pc) {
        case 0x1cd268u: goto label_1cd268;
        default: break;
    }

    ctx->pc = 0x1cd1ecu;

    // 0x1cd1ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd1f0: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1cd1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1cd1f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cd1f8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cd1fc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1CD1FCu;
    {
        const bool branch_taken_0x1cd1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1fc) {
            ctx->pc = 0x1CD3ACu;
            return;
        }
    }
    ctx->pc = 0x1CD204u;
    // 0x1cd204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd208: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cd20c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1cd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd210: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cd210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cd214: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1CD214u;
    {
        const bool branch_taken_0x1cd214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd214) {
            ctx->pc = 0x1CD398u;
            return;
        }
    }
    ctx->pc = 0x1CD21Cu;
    // 0x1cd21c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cd220: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cd220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1cd224: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1CD224u;
    {
        const bool branch_taken_0x1cd224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd224) {
            ctx->pc = 0x1CD314u;
            return;
        }
    }
    ctx->pc = 0x1CD22Cu;
    // 0x1cd22c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd230: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd234: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1cd238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd23c: 0x0  nop
    ctx->pc = 0x1cd23cu;
    // NOP
    // 0x1cd240: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cd240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd244: 0x0  nop
    ctx->pc = 0x1cd244u;
    // NOP
    // 0x1cd248: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1CD248u;
    {
        const bool branch_taken_0x1cd248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd248) {
            ctx->pc = 0x1CD314u;
            return;
        }
    }
    ctx->pc = 0x1CD250u;
    // 0x1cd250: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd254: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd258: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1cd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd25c: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1cd25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd260: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CD260u;
    SET_GPR_U32(ctx, 31, 0x1CD268u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CD260u, 0x1CD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD268u;
label_1cd268:
    // 0x1cd268: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1cd26c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd274: 0x0  nop
    ctx->pc = 0x1cd274u;
    // NOP
    // 0x1cd278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd27c: 0x0  nop
    ctx->pc = 0x1cd27cu;
    // NOP
    // 0x1cd280: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD280u;
    {
        const bool branch_taken_0x1cd280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd280) {
            ctx->pc = 0x1CD29Cu;
            return;
        }
    }
    ctx->pc = 0x1CD288u;
    // 0x1cd288: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd28c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd28cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd290: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd298: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cd298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1cd29cu;
}
