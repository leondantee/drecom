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
// Address: 0x1bb1fc - 0x1bb2c4
void caseD_5_0x1bb1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1bb1fc");
#endif

    switch (ctx->pc) {
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb26cu: goto label_1bb26c;
        default: break;
    }

    ctx->pc = 0x1bb1fcu;

    // 0x1bb1fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb200: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1bb200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bb204: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1bb204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1bb208: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb20c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1bb20cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bb210: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb214: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb218: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bb218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bb21c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bb21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bb220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bb220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1bb224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb22c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BB22Cu;
    SET_GPR_U32(ctx, 31, 0x1BB234u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB22Cu, 0x1BB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB234u;
label_1bb234:
    // 0x1bb234: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb238: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb23c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb240: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BB240u;
    SET_GPR_U32(ctx, 31, 0x1BB248u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BB240u, 0x1BB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB248u;
label_1bb248:
    // 0x1bb248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb24c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb254: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BB254u;
    SET_GPR_U32(ctx, 31, 0x1BB25Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB254u, 0x1BB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB25Cu;
label_1bb25c:
    // 0x1bb25c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb260: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1bb264: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1BB264u;
    SET_GPR_U32(ctx, 31, 0x1BB26Cu);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BB264u, 0x1BB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB26Cu;
label_1bb26c:
    // 0x1bb26c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1bb270: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1bb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1bb274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb278: 0x0  nop
    ctx->pc = 0x1bb278u;
    // NOP
    // 0x1bb27c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb280: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1bb284: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb288: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bb288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb28c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb290: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1bb290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb298: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1bb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1bb29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb2a0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb2a4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb2a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bb2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb2ac: 0x0  nop
    ctx->pc = 0x1bb2acu;
    // NOP
    // 0x1bb2b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB2B0u;
    {
        const bool branch_taken_0x1bb2b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb2b0) {
            ctx->pc = 0x1BB2C4u;
            return;
        }
    }
    ctx->pc = 0x1BB2B8u;
    // 0x1bb2b8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb2bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb2c0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1bb2c4u;
}
