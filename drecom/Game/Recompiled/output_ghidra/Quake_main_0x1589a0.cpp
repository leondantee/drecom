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

// Function: Quake_main
// Address: 0x1589a0 - 0x158b00
void Quake_main_0x1589a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_main_0x1589a0");
#endif

    switch (ctx->pc) {
        case 0x1589b8u: goto label_1589b8;
        case 0x158a70u: goto label_158a70;
        case 0x158aacu: goto label_158aac;
        case 0x158ac0u: goto label_158ac0;
        case 0x158accu: goto label_158acc;
        default: break;
    }

    ctx->pc = 0x1589a0u;

    // 0x1589a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1589a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1589a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1589a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1589a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1589ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1589b0: 0xc056aec  jal         func_15ABB0
    ctx->pc = 0x1589B0u;
    SET_GPR_U32(ctx, 31, 0x1589B8u);
    ctx->pc = 0x15ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABB0u, 0x1589B0u, 0x1589B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589B8u;
label_1589b8:
    // 0x1589b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1589b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1589bc: 0x8c22f838  lw          $v0, -0x7C8($at)
    ctx->pc = 0x1589bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF838u));
    // 0x1589c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1589c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1589c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1589c8: 0xac22f838  sw          $v0, -0x7C8($at)
    ctx->pc = 0x1589c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF838u, _value); } while (0);
    // 0x1589cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1589d0: 0x8c22f838  lw          $v0, -0x7C8($at)
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF838u));
    // 0x1589d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1589d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1589d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1589d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1589dc: 0xac22f838  sw          $v0, -0x7C8($at)
    ctx->pc = 0x1589dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF838u, _value); } while (0);
    // 0x1589e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1589e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589e4: 0x0  nop
    ctx->pc = 0x1589e4u;
    // NOP
    // 0x1589e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1589e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1589ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1589ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1589f0: 0x8c23f838  lw          $v1, -0x7C8($at)
    ctx->pc = 0x1589f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF838u));
    // 0x1589f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1589f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1589f8: 0x24425530  addiu       $v0, $v0, 0x5530
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21808));
    // 0x1589fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158a00: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a08: 0x0  nop
    ctx->pc = 0x158a08u;
    // NOP
    // 0x158a0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x158a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158a10: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x158a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x158a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a18: 0x0  nop
    ctx->pc = 0x158a18u;
    // NOP
    // 0x158a1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x158a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a28: 0x0  nop
    ctx->pc = 0x158a28u;
    // NOP
    // 0x158a2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158a34: 0xc420f850  lwc1        $f0, -0x7B0($at)
    ctx->pc = 0x158a34u;
    { uint32_t bits = FAST_READ32(0x3EF850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158a38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158a3c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x158a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x158a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a44: 0x0  nop
    ctx->pc = 0x158a44u;
    // NOP
    // 0x158a48: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x158a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x158a4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a54: 0x0  nop
    ctx->pc = 0x158a54u;
    // NOP
    // 0x158a58: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x158a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x158a5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x158a60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158a64: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x158a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x158a68: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x158A68u;
    SET_GPR_U32(ctx, 31, 0x158A70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x158A70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x158A70u) { return; }
    ctx->pc = 0x158A70u;
label_158a70:
    // 0x158a70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x158a74: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x158a74u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x158a78: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x158a7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x158a7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158a80: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x158a84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x158a84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x158a88: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x158a8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x158a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158a90: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x158a94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x158a94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x158a98: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x158a9c: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x158a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x158aa0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x158aa4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x158AA4u;
    SET_GPR_U32(ctx, 31, 0x158AACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x158AA4u, 0x158AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AACu;
label_158aac:
    // 0x158aac: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x158ab0: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x158ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x158ab4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x158ab8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x158AB8u;
    SET_GPR_U32(ctx, 31, 0x158AC0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x158AB8u, 0x158AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AC0u;
label_158ac0:
    // 0x158ac0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x158ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x158ac4: 0xc056488  jal         func_159220
    ctx->pc = 0x158AC4u;
    SET_GPR_U32(ctx, 31, 0x158ACCu);
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x158AC4u, 0x158ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158ACCu;
label_158acc:
    // 0x158acc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x158accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x158ad0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x158ad0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158ad4: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x158ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x158ad8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x158ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x158adc: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x158adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x158ae0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x158ae0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158ae4: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x158ae8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x158ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x158aec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x158aecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158af4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x158af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x158af8: 0x3e00008  jr          $ra
    ctx->pc = 0x158AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158B00u;
}
