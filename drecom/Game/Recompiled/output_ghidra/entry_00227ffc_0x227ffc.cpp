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

// Function: entry_00227ffc
// Address: 0x227ffc - 0x228098
void entry_00227ffc_0x227ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ffc_0x227ffc");
#endif

    ctx->pc = 0x227ffcu;

    // 0x227ffc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228000: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228004: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228008: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22800c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x22800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x228014: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x228014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x228018: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x228018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22801c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228020: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228024: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x228024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x228028: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x228028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x22802c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22802cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228030: 0x0  nop
    ctx->pc = 0x228030u;
    // NOP
    // 0x228034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228038: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x228038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22803c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22803cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228040: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x228040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x228044: 0x3c083fa6  lui         $t0, 0x3FA6
    ctx->pc = 0x228044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16294 << 16));
    // 0x228048: 0x35076666  ori         $a3, $t0, 0x6666
    ctx->pc = 0x228048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x22804c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x22804cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228050: 0xc4c00098  lwc1        $f0, 0x98($a2)
    ctx->pc = 0x228050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228058: 0xe4c00098  swc1        $f0, 0x98($a2)
    ctx->pc = 0x228058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
    // 0x22805c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228060: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228064: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x228064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228068: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x22806c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22806cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228070: 0x0  nop
    ctx->pc = 0x228070u;
    // NOP
    // 0x228074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228078: 0x0  nop
    ctx->pc = 0x228078u;
    // NOP
    // 0x22807c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22807Cu;
    {
        const bool branch_taken_0x22807c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22807c) {
            ctx->pc = 0x228098u;
            return;
        }
    }
    ctx->pc = 0x228084u;
    // 0x228084: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x228084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x228088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22808c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228090: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228094: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x228094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x228098u;
}
