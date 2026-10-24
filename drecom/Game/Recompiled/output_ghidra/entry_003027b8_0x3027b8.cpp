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

// Function: entry_003027b8
// Address: 0x3027b8 - 0x302884
void entry_003027b8_0x3027b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003027b8_0x3027b8");
#endif

    switch (ctx->pc) {
        case 0x30284cu: goto label_30284c;
        default: break;
    }

    ctx->pc = 0x3027b8u;

    // 0x3027b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027bc: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x3027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3027c0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3027c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3027c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3027C4u;
    {
        const bool branch_taken_0x3027c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027c4) {
            ctx->pc = 0x302884u;
            return;
        }
    }
    ctx->pc = 0x3027CCu;
    // 0x3027cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3027d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3027d4: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x3027d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x3027d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3027d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3027dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3027dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3027e0: 0x0  nop
    ctx->pc = 0x3027e0u;
    // NOP
    // 0x3027e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3027e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3027e8: 0x0  nop
    ctx->pc = 0x3027e8u;
    // NOP
    // 0x3027ec: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x3027ECu;
    {
        const bool branch_taken_0x3027ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3027ec) {
            ctx->pc = 0x302884u;
            return;
        }
    }
    ctx->pc = 0x3027F4u;
    // 0x3027f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3027f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3027f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3027fc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x3027fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x302800: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x302800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x302804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302808: 0x0  nop
    ctx->pc = 0x302808u;
    // NOP
    // 0x30280c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30280cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302810: 0x0  nop
    ctx->pc = 0x302810u;
    // NOP
    // 0x302814: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x302814u;
    {
        const bool branch_taken_0x302814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302814) {
            ctx->pc = 0x302884u;
            return;
        }
    }
    ctx->pc = 0x30281Cu;
    // 0x30281c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302824: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30282c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302830: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302834: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x302834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x302838: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x302838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30283c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302840: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302844: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302844u;
    SET_GPR_U32(ctx, 31, 0x30284Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302844u, 0x30284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30284Cu;
label_30284c:
    // 0x30284c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30284Cu;
    {
        const bool branch_taken_0x30284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30284c) {
            ctx->pc = 0x302884u;
            return;
        }
    }
    ctx->pc = 0x302854u;
    // 0x302854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30285c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30285cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302860: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x302860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x302864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302868: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30286c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302870: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302878: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302878u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30287c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302880: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302884u;
}
