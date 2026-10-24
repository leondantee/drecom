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

// Function: entry_001bb0a0
// Address: 0x1bb0a0 - 0x1bb16c
void entry_001bb0a0_0x1bb0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0a0_0x1bb0a0");
#endif

    switch (ctx->pc) {
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb114u: goto label_1bb114;
        default: break;
    }

    ctx->pc = 0x1bb0a0u;

    // 0x1bb0a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb0a4: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bb0a8: 0x34660100  ori         $a2, $v1, 0x100
    ctx->pc = 0x1bb0a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bb0ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bb0b0: 0xac261a64  sw          $a2, 0x1A64($at)
    ctx->pc = 0x1bb0b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bb0b4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb0b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bb0bc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bb0c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bb0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bb0c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bb0c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb0cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bb0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb0d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BB0D0u;
    SET_GPR_U32(ctx, 31, 0x1BB0D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BB0D0u, 0x1BB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D8u;
label_1bb0d8:
    // 0x1bb0d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bb0d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb0dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb0e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BB0E0u;
    SET_GPR_U32(ctx, 31, 0x1BB0E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BB0E0u, 0x1BB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0E8u;
label_1bb0e8:
    // 0x1bb0e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bb0e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb0ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bb0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb0f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb0f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bb0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb0f8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BB0F8u;
    SET_GPR_U32(ctx, 31, 0x1BB100u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BB0F8u, 0x1BB100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB100u;
label_1bb100:
    // 0x1bb100: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb104: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x1bb104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1bb108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bb108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb10c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1BB10Cu;
    SET_GPR_U32(ctx, 31, 0x1BB114u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1BB10Cu, 0x1BB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB114u;
label_1bb114:
    // 0x1bb114: 0x3c064467  lui         $a2, 0x4467
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17511 << 16));
    // 0x1bb118: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1bb118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1bb11c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1bb11cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb120: 0x0  nop
    ctx->pc = 0x1bb120u;
    // NOP
    // 0x1bb124: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb128: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1bb12c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb130: 0xc4e11284  lwc1        $f1, 0x1284($a3)
    ctx->pc = 0x1bb130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb134: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1bb134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb138: 0xc5000124  lwc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb13c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bb13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bb140: 0xe5000124  swc1        $f0, 0x124($t0)
    ctx->pc = 0x1bb140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 292), bits); }
    // 0x1bb144: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb148: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bb148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb14c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bb150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb154: 0x0  nop
    ctx->pc = 0x1bb154u;
    // NOP
    // 0x1bb158: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB158u;
    {
        const bool branch_taken_0x1bb158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb158) {
            ctx->pc = 0x1BB16Cu;
            return;
        }
    }
    ctx->pc = 0x1BB160u;
    // 0x1bb160: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1bb160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb164: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb168: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1bb168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1bb16cu;
}
