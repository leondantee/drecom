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

// Function: Pl_sky_attack4
// Address: 0x26e580 - 0x26e6b4
void Pl_sky_attack4_0x26e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_attack4_0x26e580");
#endif

    switch (ctx->pc) {
        case 0x26e5d8u: goto label_26e5d8;
        case 0x26e5e8u: goto label_26e5e8;
        case 0x26e5f4u: goto label_26e5f4;
        case 0x26e620u: goto label_26e620;
        case 0x26e658u: goto label_26e658;
        case 0x26e680u: goto label_26e680;
        case 0x26e694u: goto label_26e694;
        default: break;
    }

    ctx->pc = 0x26e580u;

    // 0x26e580: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26e584: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x26e584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x26e588: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e58c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e598: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x26e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x26e59c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x26e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x26e5a0: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x26e5a4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26e5a8: 0x460003a  bltz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x26E5A8u;
    {
        const bool branch_taken_0x26e5a8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26e5a8) {
            ctx->pc = 0x26E694u;
            goto label_26e694;
        }
    }
    ctx->pc = 0x26E5B0u;
    // 0x26e5b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26e5b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26e5b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x26e5bc: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x26e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x26e5c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e5c4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x26e5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e5c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e5cc: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x26e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x26e5d0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E5D0u;
    SET_GPR_U32(ctx, 31, 0x26E5D8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E5D8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E5D8u) { return; }
    ctx->pc = 0x26E5D8u;
label_26e5d8:
    // 0x26e5d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e5dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e5e0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E5E0u;
    SET_GPR_U32(ctx, 31, 0x26E5E8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E5E8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E5E8u) { return; }
    ctx->pc = 0x26E5E8u;
label_26e5e8:
    // 0x26e5e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26e5ec: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E5ECu;
    SET_GPR_U32(ctx, 31, 0x26E5F4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E5ECu, 0x26E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5F4u;
label_26e5f4:
    // 0x26e5f4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e5f8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x26e5fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26e600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e604: 0x0  nop
    ctx->pc = 0x26e604u;
    // NOP
    // 0x26e608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26e608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26e60c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26e610: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e614: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26e618: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26E618u;
    SET_GPR_U32(ctx, 31, 0x26E620u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26E618u, 0x26E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E620u;
label_26e620:
    // 0x26e620: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x26e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x26e624: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x26e624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e628: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26e628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26e62c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26e630: 0x24508bc8  addiu       $s0, $v0, -0x7438
    ctx->pc = 0x26e630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937544));
    // 0x26e634: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x26e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e638: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26e638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388BC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388BC8u, _value); } while (0);
    // 0x26e63c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x26e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e640: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26e640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388BCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388BCCu, _value); } while (0);
    // 0x26e644: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x26e644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x26e648: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x26e648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e64c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x26e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e650: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x26E650u;
    SET_GPR_U32(ctx, 31, 0x26E658u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x26E650u, 0x26E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E658u;
label_26e658:
    // 0x26e658: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26e658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e65c: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E65Cu;
    {
        const bool branch_taken_0x26e65c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26e65c) {
            ctx->pc = 0x26E694u;
            goto label_26e694;
        }
    }
    ctx->pc = 0x26E664u;
    // 0x26e664: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x26e664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x26e668: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26E668u;
    {
        const bool branch_taken_0x26e668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e668) {
            ctx->pc = 0x26E694u;
            goto label_26e694;
        }
    }
    ctx->pc = 0x26E670u;
    // 0x26e670: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26e670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26e674: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26e674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x26e678: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E678u;
    SET_GPR_U32(ctx, 31, 0x26E680u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E678u, 0x26E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E680u;
label_26e680:
    // 0x26e680: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x26e684: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x26e684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x26e688: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x26e688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x26e68c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E68Cu;
    SET_GPR_U32(ctx, 31, 0x26E694u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E68Cu, 0x26E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E694u;
label_26e694:
    // 0x26e694: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x26e694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26e698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e69c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e6a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x26e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E6B4u;
}
