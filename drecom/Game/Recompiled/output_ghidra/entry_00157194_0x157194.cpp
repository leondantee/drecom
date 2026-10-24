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

// Function: entry_00157194
// Address: 0x157194 - 0x1571f8
void entry_00157194_0x157194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157194_0x157194");
#endif

    switch (ctx->pc) {
        case 0x15719cu: goto label_15719c;
        case 0x1571c8u: goto label_1571c8;
        default: break;
    }

    ctx->pc = 0x157194u;

    // 0x157194: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x157194u;
    SET_GPR_U32(ctx, 31, 0x15719Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x157194u, 0x15719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15719Cu;
label_15719c:
    // 0x15719c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1571a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1571a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1571a4: 0x0  nop
    ctx->pc = 0x1571a4u;
    // NOP
    // 0x1571a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1571a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1571ac: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1571b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1571b4: 0x2462f760  addiu       $v0, $v1, -0x8A0
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965088));
    // 0x1571b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1571b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1571bc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1571bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1571c0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x1571C0u;
    SET_GPR_U32(ctx, 31, 0x1571C8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x1571C0u, 0x1571C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571C8u;
label_1571c8:
    // 0x1571c8: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x1571c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x1571cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1571ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1571d0: 0x0  nop
    ctx->pc = 0x1571d0u;
    // NOP
    // 0x1571d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1571d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1571d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1571d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1571dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1571e0: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x1571e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1571e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1571e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1571e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1571ec: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1571f0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1571f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1571f4: 0x0  nop
    ctx->pc = 0x1571f4u;
    // NOP
    ctx->pc = 0x1571f8u;
}
