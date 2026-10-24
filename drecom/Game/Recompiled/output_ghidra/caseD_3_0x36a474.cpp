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

// Function: caseD_3
// Address: 0x36a474 - 0x36a544
void caseD_3_0x36a474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x36a474");
#endif

    switch (ctx->pc) {
        case 0x36a484u: goto label_36a484;
        case 0x36a490u: goto label_36a490;
        case 0x36a4a4u: goto label_36a4a4;
        case 0x36a4b0u: goto label_36a4b0;
        case 0x36a4e4u: goto label_36a4e4;
        case 0x36a508u: goto label_36a508;
        default: break;
    }

    ctx->pc = 0x36a474u;

    // 0x36a474: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36a478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a47c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36A47Cu;
    SET_GPR_U32(ctx, 31, 0x36A484u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36A47Cu, 0x36A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A484u;
label_36a484:
    // 0x36a484: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a488: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36A488u;
    SET_GPR_U32(ctx, 31, 0x36A490u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36A488u, 0x36A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A490u;
label_36a490:
    // 0x36a490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36a490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36a494: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36a494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a498: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a49c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36A49Cu;
    SET_GPR_U32(ctx, 31, 0x36A4A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36A49Cu, 0x36A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4A4u;
label_36a4a4:
    // 0x36a4a4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36a4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36a4a8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36A4A8u;
    SET_GPR_U32(ctx, 31, 0x36A4B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36A4A8u, 0x36A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4B0u;
label_36a4b0:
    // 0x36a4b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a4b4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x36a4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x36a4b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36a4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36a4bc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x36a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x36a4c0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x36A4C0u;
    {
        const bool branch_taken_0x36a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4c0) {
            ctx->pc = 0x36A544u;
            return;
        }
    }
    ctx->pc = 0x36A4C8u;
    // 0x36a4c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a4cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a4d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36a4d4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x36a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x36a4d8: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x36a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x36a4dc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36A4DCu;
    SET_GPR_U32(ctx, 31, 0x36A4E4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36A4DCu, 0x36A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4E4u;
label_36a4e4:
    // 0x36a4e4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x36a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a4e8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a4ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x36a4ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36a4f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x36a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a4f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a4f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36a4f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36a4fc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x36a4fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36a500: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x36A500u;
    SET_GPR_U32(ctx, 31, 0x36A508u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x36A500u, 0x36A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A508u;
label_36a508:
    // 0x36a508: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36a50c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x36a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a510: 0x3c034185  lui         $v1, 0x4185
    ctx->pc = 0x36a510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16773 << 16));
    // 0x36a514: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x36a514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x36a518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36a518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36a51c: 0x0  nop
    ctx->pc = 0x36a51cu;
    // NOP
    // 0x36a520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36a520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36a524: 0x0  nop
    ctx->pc = 0x36a524u;
    // NOP
    // 0x36a528: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x36A528u;
    {
        const bool branch_taken_0x36a528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36a528) {
            ctx->pc = 0x36A544u;
            return;
        }
    }
    ctx->pc = 0x36A530u;
    // 0x36a530: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36a530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36a534: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a538: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x36a538u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a53c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x36A53Cu;
    {
        const bool branch_taken_0x36a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a53c) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A544u;
}
