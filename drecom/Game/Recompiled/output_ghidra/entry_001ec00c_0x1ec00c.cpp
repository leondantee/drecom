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

// Function: entry_001ec00c
// Address: 0x1ec00c - 0x1ec0c0
void entry_001ec00c_0x1ec00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec00c_0x1ec00c");
#endif

    ctx->pc = 0x1ec00cu;

    // 0x1ec00c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec010: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec014: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ec014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ec018: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ec01c: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC24Cu;
            return;
        }
    }
    ctx->pc = 0x1EC024u;
    // 0x1ec024: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec028: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec02c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec034: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec038: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ec038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec03c: 0x0  nop
    ctx->pc = 0x1ec03cu;
    // NOP
    // 0x1ec040: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC040u;
    {
        const bool branch_taken_0x1ec040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec040) {
            ctx->pc = 0x1EC138u;
            return;
        }
    }
    ctx->pc = 0x1EC048u;
    // 0x1ec048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec04c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec050: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec058: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec05c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec060: 0x0  nop
    ctx->pc = 0x1ec060u;
    // NOP
    // 0x1ec064: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC064u;
    {
        const bool branch_taken_0x1ec064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec064) {
            ctx->pc = 0x1EC0C0u;
            return;
        }
    }
    ctx->pc = 0x1EC06Cu;
    // 0x1ec06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec070: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec074: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec078: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec07c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec080: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec084: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1ec088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec08c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec090: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec094: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec098: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec09c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec09cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec0a0: 0x0  nop
    ctx->pc = 0x1ec0a0u;
    // NOP
    // 0x1ec0a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0C0u;
            return;
        }
    }
    ctx->pc = 0x1EC0ACu;
    // 0x1ec0ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec0b4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec0b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0bc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1ec0c0u;
}
