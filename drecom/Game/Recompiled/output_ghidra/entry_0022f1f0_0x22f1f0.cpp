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

// Function: entry_0022f1f0
// Address: 0x22f1f0 - 0x22f31c
void entry_0022f1f0_0x22f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f1f0_0x22f1f0");
#endif

    switch (ctx->pc) {
        case 0x22f21cu: goto label_22f21c;
        case 0x22f228u: goto label_22f228;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f314u: goto label_22f314;
        default: break;
    }

    ctx->pc = 0x22f1f0u;

    // 0x22f1f0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1f4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f1f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22f1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f200: 0x0  nop
    ctx->pc = 0x22f200u;
    // NOP
    // 0x22f204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f208: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22f208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x22f20c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f210: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22f214: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22F214u;
    SET_GPR_U32(ctx, 31, 0x22F21Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22F214u, 0x22F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F21Cu;
label_22f21c:
    // 0x22f21c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f220: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22F220u;
    SET_GPR_U32(ctx, 31, 0x22F228u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22F220u, 0x22F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F228u;
label_22f228:
    // 0x22f228: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f22c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f230: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f234: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f238: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f23c: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f244: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22f244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x22f248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f24c: 0x0  nop
    ctx->pc = 0x22f24cu;
    // NOP
    // 0x22f250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f254: 0x0  nop
    ctx->pc = 0x22f254u;
    // NOP
    // 0x22f258: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x22F258u;
    {
        const bool branch_taken_0x22f258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f258) {
            ctx->pc = 0x22F3E0u;
            return;
        }
    }
    ctx->pc = 0x22F260u;
    // 0x22f260: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f264: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f268: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f26c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f270: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f274: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f27c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x22f280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f284: 0x0  nop
    ctx->pc = 0x22f284u;
    // NOP
    // 0x22f288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f28c: 0x0  nop
    ctx->pc = 0x22f28cu;
    // NOP
    // 0x22f290: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x22F290u;
    {
        const bool branch_taken_0x22f290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f290) {
            ctx->pc = 0x22F3E0u;
            return;
        }
    }
    ctx->pc = 0x22F298u;
    // 0x22f298: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f29c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22f2a0: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F3E0u;
            return;
        }
    }
    ctx->pc = 0x22F2A8u;
    // 0x22f2a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f2ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2b0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x22f2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f2b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2b8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f2bc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x22f2c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22f2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f2c8: 0x0  nop
    ctx->pc = 0x22f2c8u;
    // NOP
    // 0x22f2cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f2d0: 0x0  nop
    ctx->pc = 0x22f2d0u;
    // NOP
    // 0x22f2d4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x22F2D4u;
    {
        const bool branch_taken_0x22f2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f2d4) {
            ctx->pc = 0x22F344u;
            return;
        }
    }
    ctx->pc = 0x22F2DCu;
    // 0x22f2dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F2DCu;
    SET_GPR_U32(ctx, 31, 0x22F2E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F2DCu, 0x22F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2E4u;
label_22f2e4:
    // 0x22f2e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f2e8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22f2ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F2ECu;
    {
        const bool branch_taken_0x22f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2ec) {
            ctx->pc = 0x22F31Cu;
            return;
        }
    }
    ctx->pc = 0x22F2F4u;
    // 0x22f2f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f300: 0x24063c1b  addiu       $a2, $zero, 0x3C1B
    ctx->pc = 0x22f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15387));
    // 0x22f304: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f308: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f30c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F30Cu;
    SET_GPR_U32(ctx, 31, 0x22F314u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F30Cu, 0x22F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F314u;
label_22f314:
    // 0x22f314: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x22F314u;
    {
        const bool branch_taken_0x22f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f314) {
            ctx->pc = 0x22F3E0u;
            return;
        }
    }
    ctx->pc = 0x22F31Cu;
}
