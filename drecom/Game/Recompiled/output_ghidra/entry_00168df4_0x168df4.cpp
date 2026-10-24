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

// Function: entry_00168df4
// Address: 0x168df4 - 0x168fb4
void entry_00168df4_0x168df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168df4_0x168df4");
#endif

    switch (ctx->pc) {
        case 0x168e68u: goto label_168e68;
        case 0x168e78u: goto label_168e78;
        case 0x168edcu: goto label_168edc;
        case 0x168f04u: goto label_168f04;
        case 0x168f14u: goto label_168f14;
        case 0x168f28u: goto label_168f28;
        case 0x168f40u: goto label_168f40;
        case 0x168f54u: goto label_168f54;
        case 0x168f6cu: goto label_168f6c;
        default: break;
    }

    ctx->pc = 0x168df4u;

    // 0x168df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168df8: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x168df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x168dfc: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x168dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x168e00: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168FC4u;
            return;
        }
    }
    ctx->pc = 0x168E08u;
    // 0x168e08: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x168e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x168e0c: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x168e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168e14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e18: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x168e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x168e1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168e24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168e28: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x168e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168e2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168e2cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x168e30: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168e34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168e38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168e3c: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x168e40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168e40u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x168e44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168e48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x168e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168e4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e50: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x168e50u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x168e58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e5c: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x168e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x168e60: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x168E60u;
    SET_GPR_U32(ctx, 31, 0x168E68u);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x168E60u, 0x168E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E68u;
label_168e68:
    // 0x168e68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168e6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x168e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168e70: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x168E70u;
    SET_GPR_U32(ctx, 31, 0x168E78u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x168E70u, 0x168E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E78u;
label_168e78:
    // 0x168e78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168e7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e80: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x168e80u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168e84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x168e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168e88: 0x0  nop
    ctx->pc = 0x168e88u;
    // NOP
    // 0x168e8c: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x168E8Cu;
    {
        const bool branch_taken_0x168e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168e8c) {
            ctx->pc = 0x168FC4u;
            return;
        }
    }
    ctx->pc = 0x168E94u;
    // 0x168e94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e98: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x168e98u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168e9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ea0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168ea0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ea8: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168ea8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168eac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168eb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x168eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168eb4: 0x0  nop
    ctx->pc = 0x168eb4u;
    // NOP
    // 0x168eb8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x168EB8u;
    {
        const bool branch_taken_0x168eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168eb8) {
            ctx->pc = 0x168FC4u;
            return;
        }
    }
    ctx->pc = 0x168EC0u;
    // 0x168ec0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168ec4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ec8: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168ecc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ed0: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168ed4: 0xc040c80  jal         func_103200
    ctx->pc = 0x168ED4u;
    SET_GPR_U32(ctx, 31, 0x168EDCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168EDCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168EDCu) { return; }
    ctx->pc = 0x168EDCu;
label_168edc:
    // 0x168edc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ee0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168ee0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168eec: 0x0  nop
    ctx->pc = 0x168eecu;
    // NOP
    // 0x168ef0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x168ef0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168ef4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168ef8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168efc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x168EFCu;
    SET_GPR_U32(ctx, 31, 0x168F04u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x168F04u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F04u) { return; }
    ctx->pc = 0x168F04u;
label_168f04:
    // 0x168f04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168f08: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x168f08u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168f0c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x168F0Cu;
    SET_GPR_U32(ctx, 31, 0x168F14u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x168F0Cu, 0x168F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F14u;
label_168f14:
    // 0x168f14: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f18: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f1c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x168f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x168f20: 0xc040c60  jal         func_103180
    ctx->pc = 0x168F20u;
    SET_GPR_U32(ctx, 31, 0x168F28u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x168F28u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F28u) { return; }
    ctx->pc = 0x168F28u;
label_168f28:
    // 0x168f28: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168f30: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168f34: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f38: 0xc040c80  jal         func_103200
    ctx->pc = 0x168F38u;
    SET_GPR_U32(ctx, 31, 0x168F40u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168F40u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F40u) { return; }
    ctx->pc = 0x168F40u;
label_168f40:
    // 0x168f40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168f44: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168f48: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f4c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x168F4Cu;
    SET_GPR_U32(ctx, 31, 0x168F54u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x168F4Cu, 0x168F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F54u;
label_168f54:
    // 0x168f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168f58: 0x0  nop
    ctx->pc = 0x168f58u;
    // NOP
    // 0x168f5c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x168f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x168f60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168f64: 0xc067588  jal         func_19D620
    ctx->pc = 0x168F64u;
    SET_GPR_U32(ctx, 31, 0x168F6Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x168F64u, 0x168F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F6Cu;
label_168f6c:
    // 0x168f6c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x168f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x168f70: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x168f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168f74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168f78: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168f78u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168f7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168f80: 0x0  nop
    ctx->pc = 0x168f80u;
    // NOP
    // 0x168f84: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x168F84u;
    {
        const bool branch_taken_0x168f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168f84) {
            ctx->pc = 0x168FB4u;
            return;
        }
    }
    ctx->pc = 0x168F8Cu;
    // 0x168f8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x168f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168f94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168f98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x168f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x168f9c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x168fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168fa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168fa8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x168fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168FACu;
    {
        const bool branch_taken_0x168fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fac) {
            ctx->pc = 0x168FC4u;
            return;
        }
    }
    ctx->pc = 0x168FB4u;
}
