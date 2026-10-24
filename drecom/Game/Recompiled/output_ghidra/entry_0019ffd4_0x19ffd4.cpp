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

// Function: entry_0019ffd4
// Address: 0x19ffd4 - 0x1a00b8
void entry_0019ffd4_0x19ffd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ffd4_0x19ffd4");
#endif

    switch (ctx->pc) {
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0074u: goto label_1a0074;
        case 0x1a0084u: goto label_1a0084;
        default: break;
    }

    ctx->pc = 0x19ffd4u;

    // 0x19ffd4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19ffd8: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x19FFD8u;
    {
        const bool branch_taken_0x19ffd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffd8) {
            ctx->pc = 0x1A0350u;
            return;
        }
    }
    ctx->pc = 0x19FFE0u;
    // 0x19ffe0: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x19ffe4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19ffe8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x19ffe8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x19ffec: 0x0  nop
    ctx->pc = 0x19ffecu;
    // NOP
    // 0x19fff0: 0x0  nop
    ctx->pc = 0x19fff0u;
    // NOP
    // 0x19fff4: 0x1810  mfhi        $v1
    ctx->pc = 0x19fff4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19fff8: 0x146000d1  bnez        $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x19FFF8u;
    {
        const bool branch_taken_0x19fff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fff8) {
            ctx->pc = 0x1A0340u;
            return;
        }
    }
    ctx->pc = 0x1A0000u;
    // 0x1a0000: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x1a0000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0004: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1a0008: 0x96a20028  lhu         $v0, 0x28($s5)
    ctx->pc = 0x1a0008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1a000c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a0010: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a0014: 0xac36c560  sw          $s6, -0x3AA0($at)
    ctx->pc = 0x1a0014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1a0018: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a0018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a001c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a0020: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1a0020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1a0024: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a0024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0028: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1a002c: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1a002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1a0030: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0034: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1A0034u;
    SET_GPR_U32(ctx, 31, 0x1A003Cu);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1A0034u, 0x1A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A003Cu;
label_1a003c:
    // 0x1a003c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1a003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a0040: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a0044: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1a0048: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a004c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a004cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a0050: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x1a0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1a0054: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0058: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a0058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a005c: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0060: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x1a0060u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x1a0064: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a0064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a0068: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a006c: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1A006Cu;
    SET_GPR_U32(ctx, 31, 0x1A0074u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1A006Cu, 0x1A0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0074u;
label_1a0074:
    // 0x1a0074: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1a0074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a0078: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a007c: 0xc056a38  jal         func_15A8E0
    ctx->pc = 0x1A007Cu;
    SET_GPR_U32(ctx, 31, 0x1A0084u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1A007Cu, 0x1A0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0084u;
label_1a0084:
    // 0x1a0084: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a0088: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a008c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a008cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0090: 0x0  nop
    ctx->pc = 0x1a0090u;
    // NOP
    // 0x1a0094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0098: 0x0  nop
    ctx->pc = 0x1a0098u;
    // NOP
    // 0x1a009c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A009Cu;
    {
        const bool branch_taken_0x1a009c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a009c) {
            ctx->pc = 0x1A00B8u;
            return;
        }
    }
    ctx->pc = 0x1A00A4u;
    // 0x1a00a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a00a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a00a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a00a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a00ac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a00acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1a00b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00B0u;
    {
        const bool branch_taken_0x1a00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00b0) {
            ctx->pc = 0x1A00C0u;
            return;
        }
    }
    ctx->pc = 0x1A00B8u;
}
