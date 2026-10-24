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

// Function: entry_00158060
// Address: 0x158060 - 0x1580e0
void entry_00158060_0x158060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158060_0x158060");
#endif

    switch (ctx->pc) {
        case 0x158068u: goto label_158068;
        default: break;
    }

    ctx->pc = 0x158060u;

    // 0x158060: 0xc06765c  jal         func_19D970
    ctx->pc = 0x158060u;
    SET_GPR_U32(ctx, 31, 0x158068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x158060u, 0x158068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158068u;
label_158068:
    // 0x158068: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x15806c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x158070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158074: 0x0  nop
    ctx->pc = 0x158074u;
    // NOP
    // 0x158078: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x158078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15807c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15807cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158080: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x158084: 0x2622f760  addiu       $v0, $s1, -0x8A0
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965088));
    // 0x158088: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x158088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15808c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x158090: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x158090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158094: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x158094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158098: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x158098u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x15809c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x15809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1580a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1580a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1580a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1580a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1580a8: 0x0  nop
    ctx->pc = 0x1580a8u;
    // NOP
    // 0x1580ac: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1580acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1580b0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1580b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1580b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1580b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1580b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580bc: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x1580bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1580c0: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x1580c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1580c4: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1580c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1580c8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1580c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1580cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1580ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1580d0: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1580d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1580d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1580d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1580d8: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1580d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1580dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1580e0u;
}
