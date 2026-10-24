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

// Function: entry_0031823c
// Address: 0x31823c - 0x318314
void entry_0031823c_0x31823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031823c_0x31823c");
#endif

    ctx->pc = 0x31823cu;

    // 0x31823c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318240: 0xc4c101a8  lwc1        $f1, 0x1A8($a2)
    ctx->pc = 0x318240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318244: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x318248: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x318248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x31824c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31824cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318250: 0x0  nop
    ctx->pc = 0x318250u;
    // NOP
    // 0x318254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318258: 0xe4c001a8  swc1        $f0, 0x1A8($a2)
    ctx->pc = 0x318258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 424), bits); }
    // 0x31825c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x31825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318260: 0xc4a101a4  lwc1        $f1, 0x1A4($a1)
    ctx->pc = 0x318260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318264: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x318268: 0x34e4d70a  ori         $a0, $a3, 0xD70A
    ctx->pc = 0x318268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x31826c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31826cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318270: 0x0  nop
    ctx->pc = 0x318270u;
    // NOP
    // 0x318274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318278: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x318278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x31827c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318280: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318284: 0x3c0a3c23  lui         $t2, 0x3C23
    ctx->pc = 0x318284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15395 << 16));
    // 0x318288: 0x3546d70a  ori         $a2, $t2, 0xD70A
    ctx->pc = 0x318288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)55050);
    // 0x31828c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31828cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318290: 0x0  nop
    ctx->pc = 0x318290u;
    // NOP
    // 0x318294: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318298: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x31829c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3182a0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3182a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3182a4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x3182a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x3182a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3182a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3182ac: 0x0  nop
    ctx->pc = 0x3182acu;
    // NOP
    // 0x3182b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3182b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3182b4: 0x0  nop
    ctx->pc = 0x3182b4u;
    // NOP
    // 0x3182b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3182B8u;
    {
        const bool branch_taken_0x3182b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3182b8) {
            ctx->pc = 0x318314u;
            return;
        }
    }
    ctx->pc = 0x3182C0u;
    // 0x3182c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3182c4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x3182c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3182c8: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x3182c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
    // 0x3182cc: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x3182ccu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3182d0: 0x0  nop
    ctx->pc = 0x3182d0u;
    // NOP
    // 0x3182d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3182d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3182d8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x3182d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x3182dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3182dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3182e0: 0xc4a101a4  lwc1        $f1, 0x1A4($a1)
    ctx->pc = 0x3182e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3182e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3182e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3182e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3182e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3182ec: 0x0  nop
    ctx->pc = 0x3182ecu;
    // NOP
    // 0x3182f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3182f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3182f4: 0xe4a001a4  swc1        $f0, 0x1A4($a1)
    ctx->pc = 0x3182f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x3182f8: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3182fc: 0xc54101a0  lwc1        $f1, 0x1A0($t2)
    ctx->pc = 0x3182fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318300: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x318300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x318304: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x318304u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318308: 0x0  nop
    ctx->pc = 0x318308u;
    // NOP
    // 0x31830c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31830cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318310: 0xe54001a0  swc1        $f0, 0x1A0($t2)
    ctx->pc = 0x318310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 416), bits); }
    ctx->pc = 0x318314u;
}
