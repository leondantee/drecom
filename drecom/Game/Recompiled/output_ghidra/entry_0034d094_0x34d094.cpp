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

// Function: entry_0034d094
// Address: 0x34d094 - 0x34d208
void entry_0034d094_0x34d094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d094_0x34d094");
#endif

    switch (ctx->pc) {
        case 0x34d0b4u: goto label_34d0b4;
        case 0x34d0d0u: goto label_34d0d0;
        case 0x34d0ecu: goto label_34d0ec;
        case 0x34d174u: goto label_34d174;
        case 0x34d180u: goto label_34d180;
        case 0x34d19cu: goto label_34d19c;
        case 0x34d1b8u: goto label_34d1b8;
        case 0x34d204u: goto label_34d204;
        default: break;
    }

    ctx->pc = 0x34d094u;

    // 0x34d094: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d098: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x34d098u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34d09c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x34d09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34d0a0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x34d0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d0a4: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x34D0A4u;
    {
        const bool branch_taken_0x34d0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0a4) {
            ctx->pc = 0x34D208u;
            return;
        }
    }
    ctx->pc = 0x34D0ACu;
    // 0x34d0ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0ACu;
    SET_GPR_U32(ctx, 31, 0x34D0B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0ACu, 0x34D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0B4u;
label_34d0b4:
    // 0x34d0b4: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d0b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0bc: 0x0  nop
    ctx->pc = 0x34d0bcu;
    // NOP
    // 0x34d0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34d0c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0C8u;
    SET_GPR_U32(ctx, 31, 0x34D0D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0C8u, 0x34D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0D0u;
label_34d0d0:
    // 0x34d0d0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34d0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0d8: 0x0  nop
    ctx->pc = 0x34d0d8u;
    // NOP
    // 0x34d0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0e0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34d0e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D0E4u;
    SET_GPR_U32(ctx, 31, 0x34D0ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D0E4u, 0x34D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0ECu;
label_34d0ec:
    // 0x34d0ec: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d0f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d0f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d0f4: 0x0  nop
    ctx->pc = 0x34d0f4u;
    // NOP
    // 0x34d0f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d0f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d0fc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x34d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34d100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34d104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d108: 0x0  nop
    ctx->pc = 0x34d108u;
    // NOP
    // 0x34d10c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x34d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34d110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d114: 0x0  nop
    ctx->pc = 0x34d114u;
    // NOP
    // 0x34d118: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x34d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x34d11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d120: 0x0  nop
    ctx->pc = 0x34d120u;
    // NOP
    // 0x34d124: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x34d124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x34d128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d12c: 0x0  nop
    ctx->pc = 0x34d12cu;
    // NOP
    // 0x34d130: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x34d130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x34d134: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x34d134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x34d138: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x34d138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d13c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34d13cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d140: 0x0  nop
    ctx->pc = 0x34d140u;
    // NOP
    // 0x34d144: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x34d144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34d148: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x34d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x34d14c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34d14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d150: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d154: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34d154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d158: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x34d158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d15c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34d15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34d160: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d164: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x34d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34d168: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x34d168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34d16c: 0xc0867e0  jal         func_219F80
    ctx->pc = 0x34D16Cu;
    SET_GPR_U32(ctx, 31, 0x34D174u);
    ctx->pc = 0x219F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F80u, 0x34D16Cu, 0x34D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D174u;
label_34d174:
    // 0x34d174: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34d174u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34d178: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D178u;
    SET_GPR_U32(ctx, 31, 0x34D180u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D178u, 0x34D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D180u;
label_34d180:
    // 0x34d180: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x34d180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
    // 0x34d184: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34d184u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d188: 0x0  nop
    ctx->pc = 0x34d188u;
    // NOP
    // 0x34d18c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d18cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d190: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x34d194: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D194u;
    SET_GPR_U32(ctx, 31, 0x34D19Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D194u, 0x34D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D19Cu;
label_34d19c:
    // 0x34d19c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x34d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x34d1a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34d1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d1a4: 0x0  nop
    ctx->pc = 0x34d1a4u;
    // NOP
    // 0x34d1a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d1ac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34d1b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x34D1B0u;
    SET_GPR_U32(ctx, 31, 0x34D1B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x34D1B0u, 0x34D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D1B8u;
label_34d1b8:
    // 0x34d1b8: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x34d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x34d1bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34d1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d1c0: 0x0  nop
    ctx->pc = 0x34d1c0u;
    // NOP
    // 0x34d1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34d1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d1c8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x34d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34d1cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34d1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d1d4: 0x0  nop
    ctx->pc = 0x34d1d4u;
    // NOP
    // 0x34d1d8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x34d1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34d1dc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d1e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34d1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d1e4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34d1e8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34d1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d1ec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d1f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d1f4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x34d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34d1f8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x34d1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x34d1fc: 0xc0867e0  jal         func_219F80
    ctx->pc = 0x34D1FCu;
    SET_GPR_U32(ctx, 31, 0x34D204u);
    ctx->pc = 0x219F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F80u, 0x34D1FCu, 0x34D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D204u;
label_34d204:
    // 0x34d204: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34d204u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x34d208u;
}
