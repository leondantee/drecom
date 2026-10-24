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

// Function: entry_002e31f8
// Address: 0x2e31f8 - 0x2e3308
void entry_002e31f8_0x2e31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e31f8_0x2e31f8");
#endif

    switch (ctx->pc) {
        case 0x2e3234u: goto label_2e3234;
        case 0x2e3250u: goto label_2e3250;
        case 0x2e326cu: goto label_2e326c;
        case 0x2e32acu: goto label_2e32ac;
        case 0x2e32c4u: goto label_2e32c4;
        case 0x2e3300u: goto label_2e3300;
        default: break;
    }

    ctx->pc = 0x2e31f8u;

    // 0x2e31f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e31f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e31fc: 0x0  nop
    ctx->pc = 0x2e31fcu;
    // NOP
    // 0x2e3200: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e3200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e3204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3208: 0x0  nop
    ctx->pc = 0x2e3208u;
    // NOP
    // 0x2e320c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e320cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3214: 0x0  nop
    ctx->pc = 0x2e3214u;
    // NOP
    // 0x2e3218: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e3218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e321c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3224: 0x0  nop
    ctx->pc = 0x2e3224u;
    // NOP
    // 0x2e3228: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e3228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e322c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E322Cu;
    SET_GPR_U32(ctx, 31, 0x2E3234u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E322Cu, 0x2E3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3234u;
label_2e3234:
    // 0x2e3234: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e323c: 0x0  nop
    ctx->pc = 0x2e323cu;
    // NOP
    // 0x2e3240: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3244: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e3244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3248: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3248u;
    SET_GPR_U32(ctx, 31, 0x2E3250u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3248u, 0x2E3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3250u;
label_2e3250:
    // 0x2e3250: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e3250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3258: 0x0  nop
    ctx->pc = 0x2e3258u;
    // NOP
    // 0x2e325c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e325cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e3260: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e3260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e3264: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E3264u;
    SET_GPR_U32(ctx, 31, 0x2E326Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E3264u, 0x2E326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E326Cu;
label_2e326c:
    // 0x2e326c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e3270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e3270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3274: 0x0  nop
    ctx->pc = 0x2e3274u;
    // NOP
    // 0x2e3278: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e327c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3280: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e3280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e3284: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e3288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e328c: 0x0  nop
    ctx->pc = 0x2e328cu;
    // NOP
    // 0x2e3290: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e3290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e3294: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e3294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e3298: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e3298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e329c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e329cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e32a0: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e32a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e32a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E32A4u;
    SET_GPR_U32(ctx, 31, 0x2E32ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E32A4u, 0x2E32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32ACu;
label_2e32ac:
    // 0x2e32ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e32b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32b4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2e32b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32b8: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x2e32b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x2e32bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E32BCu;
    SET_GPR_U32(ctx, 31, 0x2E32C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E32BCu, 0x2E32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E32C4u;
label_2e32c4:
    // 0x2e32c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2e32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2e32c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e32c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e32cc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e32d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e32d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e32d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e32d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e32d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e32dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2e32e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e32e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e32e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e32e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e32e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e32e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e32ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e32ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e32f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e32f4: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e32f8: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x2E32F8u;
    SET_GPR_U32(ctx, 31, 0x2E3300u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x2E32F8u, 0x2E3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3300u;
label_2e3300:
    // 0x2e3300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3304: 0x0  nop
    ctx->pc = 0x2e3304u;
    // NOP
    ctx->pc = 0x2e3308u;
}
