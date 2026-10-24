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

// Function: entry_0029c094
// Address: 0x29c094 - 0x29c144
void entry_0029c094_0x29c094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c094_0x29c094");
#endif

    switch (ctx->pc) {
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c100u: goto label_29c100;
        default: break;
    }

    ctx->pc = 0x29c094u;

    // 0x29c094: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c098: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c09c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c09cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c0a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x29c0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c0a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c0a8: 0x0  nop
    ctx->pc = 0x29c0a8u;
    // NOP
    // 0x29c0ac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29C0ACu;
    {
        const bool branch_taken_0x29c0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c0ac) {
            ctx->pc = 0x29C144u;
            return;
        }
    }
    ctx->pc = 0x29C0B4u;
    // 0x29c0b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c0b8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x29c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c0bc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c0c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c0c4: 0x0  nop
    ctx->pc = 0x29c0c4u;
    // NOP
    // 0x29c0c8: 0x0  nop
    ctx->pc = 0x29c0c8u;
    // NOP
    // 0x29c0cc: 0x0  nop
    ctx->pc = 0x29c0ccu;
    // NOP
    // 0x29c0d0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C0D0u;
    SET_GPR_U32(ctx, 31, 0x29C0D8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C0D0u, 0x29C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0D8u;
label_29c0d8:
    // 0x29c0d8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x29c0d8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29c0dc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x29c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c0e0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x29c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c0e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x29c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c0e8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x29c0e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29c0ec: 0x0  nop
    ctx->pc = 0x29c0ecu;
    // NOP
    // 0x29c0f0: 0x0  nop
    ctx->pc = 0x29c0f0u;
    // NOP
    // 0x29c0f4: 0x0  nop
    ctx->pc = 0x29c0f4u;
    // NOP
    // 0x29c0f8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29C0F8u;
    SET_GPR_U32(ctx, 31, 0x29C100u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29C0F8u, 0x29C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x29c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x29c104: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x29c104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x29c108: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29c10c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29c110: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c114: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x29c114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c118: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x29c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x29c11c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x29c11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29c120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29c124: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x29c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29c128: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x29c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c12c: 0x3c034144  lui         $v1, 0x4144
    ctx->pc = 0x29c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16708 << 16));
    // 0x29c130: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29c130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29c134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c138: 0x0  nop
    ctx->pc = 0x29c138u;
    // NOP
    // 0x29c13c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29c13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29c140: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29c140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->pc = 0x29c144u;
}
