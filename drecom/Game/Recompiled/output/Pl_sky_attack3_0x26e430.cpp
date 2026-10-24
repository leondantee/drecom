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

// Function: Pl_sky_attack3
// Address: 0x26e430 - 0x26e580
void Pl_sky_attack3_0x26e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_attack3_0x26e430");
#endif

    switch (ctx->pc) {
        case 0x26e454u: goto label_26e454;
        case 0x26e4acu: goto label_26e4ac;
        case 0x26e4d8u: goto label_26e4d8;
        case 0x26e500u: goto label_26e500;
        case 0x26e514u: goto label_26e514;
        case 0x26e520u: goto label_26e520;
        case 0x26e568u: goto label_26e568;
        default: break;
    }

    ctx->pc = 0x26e430u;

    // 0x26e430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26e434: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x26e434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x26e438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e43c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e440: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x26e440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x26e444: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e448: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e44c: 0xc09b78c  jal         func_26DE30
    ctx->pc = 0x26E44Cu;
    SET_GPR_U32(ctx, 31, 0x26E454u);
    ctx->pc = 0x26DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE30u, 0x26E44Cu, 0x26E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E454u;
label_26e454:
    // 0x26e454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e458: 0x0  nop
    ctx->pc = 0x26e458u;
    // NOP
    // 0x26e45c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26e45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26e460: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x26e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x26e464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e468: 0x0  nop
    ctx->pc = 0x26e468u;
    // NOP
    // 0x26e46c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26e46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26e470: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26e474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e478: 0x0  nop
    ctx->pc = 0x26e478u;
    // NOP
    // 0x26e47c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26e47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26e480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26e484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e488: 0x0  nop
    ctx->pc = 0x26e488u;
    // NOP
    // 0x26e48c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x26e48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x26e490: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e494: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e498: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e49c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x26e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x26e4a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e4a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x26E4A4u;
    SET_GPR_U32(ctx, 31, 0x26E4ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26E4ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E4ACu) { return; }
    ctx->pc = 0x26E4ACu;
label_26e4ac:
    // 0x26e4ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26e4b0: 0x24508bb0  addiu       $s0, $v0, -0x7450
    ctx->pc = 0x26e4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x26e4b4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x26e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26e4b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26e4b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388BB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388BB0u, _value); } while (0);
    // 0x26e4bc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x26e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e4c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26e4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388BB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388BB4u, _value); } while (0);
    // 0x26e4c4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x26e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e4c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x26e4c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e4cc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x26e4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26e4d0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x26E4D0u;
    SET_GPR_U32(ctx, 31, 0x26E4D8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x26E4D0u, 0x26E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4D8u;
label_26e4d8:
    // 0x26e4d8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26e4d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e4dc: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x26E4DCu;
    {
        const bool branch_taken_0x26e4dc = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x26e4dc) {
            ctx->pc = 0x26E514u;
            goto label_26e514;
        }
    }
    ctx->pc = 0x26E4E4u;
    // 0x26e4e4: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x26e4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x26e4e8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26E4E8u;
    {
        const bool branch_taken_0x26e4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4e8) {
            ctx->pc = 0x26E514u;
            goto label_26e514;
        }
    }
    ctx->pc = 0x26E4F0u;
    // 0x26e4f0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x26e4f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x26e4f8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E4F8u;
    SET_GPR_U32(ctx, 31, 0x26E500u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E4F8u, 0x26E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E500u;
label_26e500:
    // 0x26e500: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x26e504: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x26e504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x26e508: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x26e508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x26e50c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x26E50Cu;
    SET_GPR_U32(ctx, 31, 0x26E514u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x26E50Cu, 0x26E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E514u;
label_26e514:
    // 0x26e514: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e518: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26E518u;
    SET_GPR_U32(ctx, 31, 0x26E520u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26E518u, 0x26E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E520u;
label_26e520:
    // 0x26e520: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e524: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e528: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x26e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26e52c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e530: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x26e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x26e534: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e53c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26e540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26e544: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e548: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26e54c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x26e54cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e550: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26e550u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e554: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x26e554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26e558: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26e55c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x26e55cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26e560: 0xc0bcaa0  jal         func_2F2A80
    ctx->pc = 0x26E560u;
    SET_GPR_U32(ctx, 31, 0x26E568u);
    ctx->pc = 0x2F2A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2A80u, 0x26E560u, 0x26E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E568u;
label_26e568:
    // 0x26e568: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26e568u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e56c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e570: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e574: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x26e574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26e578: 0x3e00008  jr          $ra
    ctx->pc = 0x26E578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E580u;
}
