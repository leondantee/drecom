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

// Function: entry_00191cc8
// Address: 0x191cc8 - 0x191d88
void entry_00191cc8_0x191cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191cc8_0x191cc8");
#endif

    switch (ctx->pc) {
        case 0x191ce8u: goto label_191ce8;
        case 0x191d00u: goto label_191d00;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d30u: goto label_191d30;
        case 0x191d4cu: goto label_191d4c;
        default: break;
    }

    ctx->pc = 0x191cc8u;

    // 0x191cc8: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x191cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x191ccc: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x191cccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191cd0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x191cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191cd4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x191cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x191cd8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x191cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x191cdc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x191cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x191ce0: 0xc0d889c  jal         func_362270
    ctx->pc = 0x191CE0u;
    SET_GPR_U32(ctx, 31, 0x191CE8u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x191CE0u, 0x191CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191CE8u;
label_191ce8:
    // 0x191ce8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x191ce8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191cec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x191cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191cf0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x191cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191cf4: 0x26c60480  addiu       $a2, $s6, 0x480
    ctx->pc = 0x191cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1152));
    // 0x191cf8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191CF8u;
    SET_GPR_U32(ctx, 31, 0x191D00u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x191D00u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D00u) { return; }
    ctx->pc = 0x191D00u;
label_191d00:
    // 0x191d00: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x191d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d04: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x191d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x191d08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x191d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191d0c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x191d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191d10: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x191d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191d14: 0xc040c60  jal         func_103180
    ctx->pc = 0x191D14u;
    SET_GPR_U32(ctx, 31, 0x191D1Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191D1Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D1Cu) { return; }
    ctx->pc = 0x191D1Cu;
label_191d1c:
    // 0x191d1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d20: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191d24: 0x26c60490  addiu       $a2, $s6, 0x490
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1168));
    // 0x191d28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191D28u;
    SET_GPR_U32(ctx, 31, 0x191D30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x191D30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D30u) { return; }
    ctx->pc = 0x191D30u;
label_191d30:
    // 0x191d30: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x191d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d34: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x191d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x191d38: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d3c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191d40: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x191d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191d44: 0xc040c60  jal         func_103180
    ctx->pc = 0x191D44u;
    SET_GPR_U32(ctx, 31, 0x191D4Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191D4Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191D4Cu) { return; }
    ctx->pc = 0x191D4Cu;
label_191d4c:
    // 0x191d4c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x191d4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191d50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191d58: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191d60: 0x0  nop
    ctx->pc = 0x191d60u;
    // NOP
    // 0x191d64: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x191D64u;
    {
        const bool branch_taken_0x191d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191d64) {
            ctx->pc = 0x191D88u;
            return;
        }
    }
    ctx->pc = 0x191D6Cu;
    // 0x191d6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x191d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x191d70: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x191d70u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191d74: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x191d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191d7c: 0x0  nop
    ctx->pc = 0x191d7cu;
    // NOP
    // 0x191d80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x191D80u;
    {
        const bool branch_taken_0x191d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191d80) {
            ctx->pc = 0x191D90u;
            return;
        }
    }
    ctx->pc = 0x191D88u;
}
