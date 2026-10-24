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

// Function: entry_00164010
// Address: 0x164010 - 0x1640c8
void entry_00164010_0x164010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164010_0x164010");
#endif

    switch (ctx->pc) {
        case 0x164038u: goto label_164038;
        default: break;
    }

    ctx->pc = 0x164010u;

    // 0x164010: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16401c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164020: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x164020u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x164024: 0x0  nop
    ctx->pc = 0x164024u;
    // NOP
    // 0x164028: 0x0  nop
    ctx->pc = 0x164028u;
    // NOP
    // 0x16402c: 0x0  nop
    ctx->pc = 0x16402cu;
    // NOP
    // 0x164030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x164030u;
    SET_GPR_U32(ctx, 31, 0x164038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x164030u, 0x164038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164038u;
label_164038:
    // 0x164038: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x164038u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16403c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164044: 0x0  nop
    ctx->pc = 0x164044u;
    // NOP
    // 0x164048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16404c: 0x0  nop
    ctx->pc = 0x16404cu;
    // NOP
    // 0x164050: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x164050u;
    {
        const bool branch_taken_0x164050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164050) {
            ctx->pc = 0x1640C8u;
            return;
        }
    }
    ctx->pc = 0x164058u;
    // 0x164058: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x164058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16405c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164060: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164068: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x164068u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16406c: 0x0  nop
    ctx->pc = 0x16406cu;
    // NOP
    // 0x164070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x164070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x164074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x164074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164078: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x164078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16407c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x16407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x164080: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x164080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164084: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x164084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x164088: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164090: 0x0  nop
    ctx->pc = 0x164090u;
    // NOP
    // 0x164094: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164098: 0x0  nop
    ctx->pc = 0x164098u;
    // NOP
    // 0x16409c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x16412Cu;
            return;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1640a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1640a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1640ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1640b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
    // 0x1640b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1640b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1640bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1640bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1640c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1640C0u;
    {
        const bool branch_taken_0x1640c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640c0) {
            ctx->pc = 0x16412Cu;
            return;
        }
    }
    ctx->pc = 0x1640C8u;
}
