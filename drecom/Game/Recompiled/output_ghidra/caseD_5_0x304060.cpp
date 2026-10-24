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

// Function: caseD_5
// Address: 0x304060 - 0x304114
void caseD_5_0x304060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x304060");
#endif

    switch (ctx->pc) {
        case 0x304070u: goto label_304070;
        case 0x304094u: goto label_304094;
        case 0x3040dcu: goto label_3040dc;
        case 0x30410cu: goto label_30410c;
        default: break;
    }

    ctx->pc = 0x304060u;

    // 0x304060: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304064: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304068: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304068u;
    SET_GPR_U32(ctx, 31, 0x304070u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304068u, 0x304070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304070u;
label_304070:
    // 0x304070: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304074: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x304074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x304078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30407c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x30407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x304080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304084: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x304084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x304088: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30408c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30408Cu;
    SET_GPR_U32(ctx, 31, 0x304094u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30408Cu, 0x304094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304094u;
label_304094:
    // 0x304094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304098: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30409c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3040a0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3040a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x304130u;
            return;
        }
    }
    ctx->pc = 0x3040ACu;
    // 0x3040ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040b0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x3040b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3040b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3040b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3040bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3040bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3040c0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3040c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3040c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3040c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040cc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3040ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3040d0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x3040d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x3040d4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x3040D4u;
    SET_GPR_U32(ctx, 31, 0x3040DCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x3040D4u, 0x3040DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040DCu;
label_3040dc:
    // 0x3040dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x3040e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3040e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3040e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3040e8: 0x0  nop
    ctx->pc = 0x3040e8u;
    // NOP
    // 0x3040ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3040ECu;
    {
        const bool branch_taken_0x3040ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3040ec) {
            ctx->pc = 0x304114u;
            return;
        }
    }
    ctx->pc = 0x3040F4u;
    // 0x3040f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3040f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3040fc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x304100: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x304104: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x304104u, 0x30410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304110: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x304110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x304114u;
}
