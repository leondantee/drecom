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

// Function: entry_00230634
// Address: 0x230634 - 0x2306c0
void entry_00230634_0x230634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230634_0x230634");
#endif

    ctx->pc = 0x230634u;

    // 0x230634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230638: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x230638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23063c: 0x3c123bdf  lui         $s2, 0x3BDF
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15327 << 16));
    // 0x230640: 0x3643ca6a  ori         $v1, $s2, 0xCA6A
    ctx->pc = 0x230640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)51818);
    // 0x230644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230648: 0x0  nop
    ctx->pc = 0x230648u;
    // NOP
    // 0x23064c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23064cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230650: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x230650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x230654: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230658: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x230658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23065c: 0x3c143c8e  lui         $s4, 0x3C8E
    ctx->pc = 0x23065cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)15502 << 16));
    // 0x230660: 0x3683fa35  ori         $v1, $s4, 0xFA35
    ctx->pc = 0x230660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64053);
    // 0x230664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230668: 0x0  nop
    ctx->pc = 0x230668u;
    // NOP
    // 0x23066c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23066cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230670: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x230670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x230674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230678: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23067c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230680: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x230680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x230684: 0x3c05c1a4  lui         $a1, 0xC1A4
    ctx->pc = 0x230684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49572 << 16));
    // 0x230688: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x230688u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23068c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230690: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x230690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230694: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x230694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x230698: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23069c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23069cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2306a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2306a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2306a8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2306a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2306ac: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x2306b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2306b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2306b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2306b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2306b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2306bc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2306bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x2306c0u;
}
