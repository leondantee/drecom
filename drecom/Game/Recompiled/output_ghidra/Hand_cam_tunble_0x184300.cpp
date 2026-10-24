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

// Function: Hand_cam_tunble
// Address: 0x184300 - 0x184a9c
void Hand_cam_tunble_0x184300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hand_cam_tunble_0x184300");
#endif

    switch (ctx->pc) {
        case 0x18435cu: goto label_18435c;
        case 0x1843b4u: goto label_1843b4;
        case 0x18449cu: goto label_18449c;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844ecu: goto label_1844ec;
        case 0x18453cu: goto label_18453c;
        case 0x184554u: goto label_184554;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845e8u: goto label_1845e8;
        case 0x18465cu: goto label_18465c;
        case 0x184684u: goto label_184684;
        case 0x184960u: goto label_184960;
        case 0x18499cu: goto label_18499c;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849ecu: goto label_1849ec;
        case 0x184a00u: goto label_184a00;
        default: break;
    }

    ctx->pc = 0x184300u;

    // 0x184300: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x184300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x184304: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x184304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x184308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18430c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x18430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x184310: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x184310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184314: 0x2450f260  addiu       $s0, $v0, -0xDA0
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x184318: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18431c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x184320: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x184320u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184324: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x184324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184328: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18432c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184330: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x184330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x184334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184338: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184338u;
    {
        const bool branch_taken_0x184338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184338) {
            ctx->pc = 0x18435Cu;
            goto label_18435c;
        }
    }
    ctx->pc = 0x184340u;
    // 0x184340: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184344: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x184344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x184348: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18434c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x18434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x184350: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184354: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x184354u;
    SET_GPR_U32(ctx, 31, 0x18435Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x184354u, 0x18435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18435Cu;
label_18435c:
    // 0x18435c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184360: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x184364: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x184364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x184368: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x184368u;
    {
        const bool branch_taken_0x184368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184368) {
            ctx->pc = 0x184444u;
            goto label_184444;
        }
    }
    ctx->pc = 0x184370u;
    // 0x184370: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184374: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x184374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x184378: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x184378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18437c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x18437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184380: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184380u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x184384: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184388: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x184388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x18438c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184390u;
    {
        const bool branch_taken_0x184390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184390) {
            ctx->pc = 0x1843B4u;
            goto label_1843b4;
        }
    }
    ctx->pc = 0x184398u;
    // 0x184398: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18439c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1843a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1843a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1843a4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1843a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1843a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1843ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1843ACu;
    SET_GPR_U32(ctx, 31, 0x1843B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1843ACu, 0x1843B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843B4u;
label_1843b4:
    // 0x1843b4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1843b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1843b8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1843b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1843bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1843c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843c4: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1843c4u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1843c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1843cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843d0: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x1843d0u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1843d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1843d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1843d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1843dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1843e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1843e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1843e4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1843e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1843e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1843e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1843ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1843f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843f4: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1843f4u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1843f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1843fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184400: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184400u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184404: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184404u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184408: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x184408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18440c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18440cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184410: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x184410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x184414: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x184414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184418: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18441c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18441cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184420: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184424: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184424u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184428: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18442c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184430: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184430u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184434: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184434u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184438: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18443c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18443cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184440: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x184440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_184444:
    // 0x184444: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184448: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18444c: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x18444cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x184450: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x184454: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x184454u;
    {
        const bool branch_taken_0x184454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x184454) {
            ctx->pc = 0x184574u;
            goto label_184574;
        }
    }
    ctx->pc = 0x18445Cu;
    // 0x18445c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x184460: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x184460u;
    {
        const bool branch_taken_0x184460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x184460) {
            ctx->pc = 0x184524u;
            goto label_184524;
        }
    }
    ctx->pc = 0x184468u;
    // 0x184468: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x184468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18446c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18446Cu;
    {
        const bool branch_taken_0x18446c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18446c) {
            ctx->pc = 0x1844BCu;
            goto label_1844bc;
        }
    }
    ctx->pc = 0x184474u;
    // 0x184474: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184474u;
    {
        const bool branch_taken_0x184474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184474) {
            ctx->pc = 0x184484u;
            goto label_184484;
        }
    }
    ctx->pc = 0x18447Cu;
    // 0x18447c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18447Cu;
    {
        const bool branch_taken_0x18447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18447c) {
            ctx->pc = 0x18459Cu;
            goto label_18459c;
        }
    }
    ctx->pc = 0x184484u;
label_184484:
    // 0x184484: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18448c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x184490: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184494: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184494u;
    SET_GPR_U32(ctx, 31, 0x18449Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184494u, 0x18449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18449Cu;
label_18449c:
    // 0x18449c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1844a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1844a4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1844a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1844a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844ac: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844ACu;
    SET_GPR_U32(ctx, 31, 0x1844B4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844ACu, 0x1844B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1844B4u;
    {
        const bool branch_taken_0x1844b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844b4) {
            ctx->pc = 0x18459Cu;
            goto label_18459c;
        }
    }
    ctx->pc = 0x1844BCu;
label_1844bc:
    // 0x1844bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1844c4: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1844c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844CCu;
    SET_GPR_U32(ctx, 31, 0x1844D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844CCu, 0x1844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844D4u;
label_1844d4:
    // 0x1844d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1844dc: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1844dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1844e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844E4u;
    SET_GPR_U32(ctx, 31, 0x1844ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844E4u, 0x1844ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844ECu;
label_1844ec:
    // 0x1844ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844f0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1844f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1844f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1844f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1844f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1844f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844fc: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1844fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184500: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x184500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x184504: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184508: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x184508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18450c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x184510: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184514: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x184514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x184518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x18451c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18451Cu;
    {
        const bool branch_taken_0x18451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18451c) {
            ctx->pc = 0x18459Cu;
            goto label_18459c;
        }
    }
    ctx->pc = 0x184524u;
label_184524:
    // 0x184524: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184528: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18452c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x184530: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184534: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184534u;
    SET_GPR_U32(ctx, 31, 0x18453Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184534u, 0x18453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184540: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184544: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x184548: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18454c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x18454Cu;
    SET_GPR_U32(ctx, 31, 0x184554u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x18454Cu, 0x184554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184554u;
label_184554:
    // 0x184554: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184558: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x184558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18455c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x184560: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184564: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x184564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184568: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x184568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18456c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18456Cu;
    {
        const bool branch_taken_0x18456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18456c) {
            ctx->pc = 0x18459Cu;
            goto label_18459c;
        }
    }
    ctx->pc = 0x184574u;
label_184574:
    // 0x184574: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184578: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x184578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18457c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18457cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184580: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x184580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184584: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x184588: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18458c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x18458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x184590: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x184590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184594: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184598: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_18459c:
    // 0x18459c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x18459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1845a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1845a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845a8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1845a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1845acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1845b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1845b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1845b8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1845B8u;
    SET_GPR_U32(ctx, 31, 0x1845C0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1845B8u, 0x1845C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845C0u;
label_1845c0:
    // 0x1845c0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1845c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1845c4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1845c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845c8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1845c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845cc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1845ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845d0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1845d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1845d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1845d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1845dc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1845dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1845e0: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1845E0u;
    SET_GPR_U32(ctx, 31, 0x1845E8u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1845E0u, 0x1845E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845E8u;
label_1845e8:
    // 0x1845e8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1845e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1845ec: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1845ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845f0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1845f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1845f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1845f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1845fc: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1845fcu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184600: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184604: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184608: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184608u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18460c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18460cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184610: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x184610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184618: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x184618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18461c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x18461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184620: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x184620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184624: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184628: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18462c: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x18462cu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184630: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184634: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184638: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184638u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18463c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18463cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184640: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x184640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184644: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184648: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x184648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x18464c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x18464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x184650: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x184650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x184654: 0xc0455e6  jal         func_115798
    ctx->pc = 0x184654u;
    SET_GPR_U32(ctx, 31, 0x18465Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x184654u, 0x18465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18465Cu;
label_18465c:
    // 0x18465c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x184660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184668: 0x0  nop
    ctx->pc = 0x184668u;
    // NOP
    // 0x18466c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18466cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x184670: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x184670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x184674: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x184674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x184678: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x184678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18467c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x18467Cu;
    SET_GPR_U32(ctx, 31, 0x184684u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x18467Cu, 0x184684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184684u;
label_184684:
    // 0x184684: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x184688: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18468c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18468cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184690: 0x0  nop
    ctx->pc = 0x184690u;
    // NOP
    // 0x184694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x184694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x184698: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x18469c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1846a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1846a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1846a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1846ac: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1846ACu;
    {
        const bool branch_taken_0x1846ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1846ac) {
            ctx->pc = 0x18487Cu;
            goto label_18487c;
        }
    }
    ctx->pc = 0x1846B4u;
    // 0x1846b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1846b8: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1846B8u;
    {
        const bool branch_taken_0x1846b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1846b8) {
            ctx->pc = 0x1847D8u;
            goto label_1847d8;
        }
    }
    ctx->pc = 0x1846C0u;
    // 0x1846c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1846C0u;
    {
        const bool branch_taken_0x1846c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846c0) {
            ctx->pc = 0x1846D0u;
            goto label_1846d0;
        }
    }
    ctx->pc = 0x1846C8u;
    // 0x1846c8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x1846D0u;
label_1846d0:
    // 0x1846d0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1846d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1846d4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1846d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1846d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1846d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1846dc: 0x0  nop
    ctx->pc = 0x1846dcu;
    // NOP
    // 0x1846e0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x1846E0u;
    {
        const bool branch_taken_0x1846e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1846e0) {
            ctx->pc = 0x184760u;
            goto label_184760;
        }
    }
    ctx->pc = 0x1846E8u;
    // 0x1846e8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1846ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1846f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1846f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1846f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1846f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1846f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1846fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x184700: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184700u;
    {
        const bool branch_taken_0x184700 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184700) {
            ctx->pc = 0x18471Cu;
            goto label_18471c;
        }
    }
    ctx->pc = 0x184708u;
    // 0x184708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18470c: 0x0  nop
    ctx->pc = 0x18470cu;
    // NOP
    // 0x184710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184714u;
    {
        const bool branch_taken_0x184714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184714) {
            ctx->pc = 0x184738u;
            goto label_184738;
        }
    }
    ctx->pc = 0x18471Cu;
label_18471c:
    // 0x18471c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x184720: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x184724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x184728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18472c: 0x0  nop
    ctx->pc = 0x18472cu;
    // NOP
    // 0x184730: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184734: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184738:
    // 0x184738: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18473c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184744: 0x0  nop
    ctx->pc = 0x184744u;
    // NOP
    // 0x184748: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18474c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x18474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184754: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x184758: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184758) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184764: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x184764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x184768: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x184768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18476c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18476cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x184770: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184774: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x184774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x184778: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184778u;
    {
        const bool branch_taken_0x184778 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184778) {
            ctx->pc = 0x184794u;
            goto label_184794;
        }
    }
    ctx->pc = 0x184780u;
    // 0x184780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184784: 0x0  nop
    ctx->pc = 0x184784u;
    // NOP
    // 0x184788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18478c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18478Cu;
    {
        const bool branch_taken_0x18478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18478c) {
            ctx->pc = 0x1847B0u;
            goto label_1847b0;
        }
    }
    ctx->pc = 0x184794u;
label_184794:
    // 0x184794: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x184794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x184798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18479c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18479cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1847a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1847a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1847a4: 0x0  nop
    ctx->pc = 0x1847a4u;
    // NOP
    // 0x1847a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1847a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1847ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1847acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1847b0:
    // 0x1847b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1847b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1847b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1847b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1847b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1847b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1847bc: 0x0  nop
    ctx->pc = 0x1847bcu;
    // NOP
    // 0x1847c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1847c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1847c4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1847c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1847c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1847cc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1847d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1847D0u;
    {
        const bool branch_taken_0x1847d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847d0) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x1847D8u;
label_1847d8:
    // 0x1847d8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1847d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1847dc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1847dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1847e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1847e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1847e4: 0x0  nop
    ctx->pc = 0x1847e4u;
    // NOP
    // 0x1847e8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1847E8u;
    {
        const bool branch_taken_0x1847e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1847e8) {
            ctx->pc = 0x184814u;
            goto label_184814;
        }
    }
    ctx->pc = 0x1847F0u;
    // 0x1847f0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1847f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1847f8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1847fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1847FCu;
    {
        const bool branch_taken_0x1847fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1847fc) {
            ctx->pc = 0x184814u;
            goto label_184814;
        }
    }
    ctx->pc = 0x184804u;
    // 0x184804: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184808: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x184808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x18480c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184810: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x184810u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_184814:
    // 0x184814: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184818: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x184818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x18481c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18481Cu;
    {
        const bool branch_taken_0x18481c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18481c) {
            ctx->pc = 0x184838u;
            goto label_184838;
        }
    }
    ctx->pc = 0x184824u;
    // 0x184824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184828: 0x0  nop
    ctx->pc = 0x184828u;
    // NOP
    // 0x18482c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18482cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184830: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184830u;
    {
        const bool branch_taken_0x184830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184830) {
            ctx->pc = 0x184854u;
            goto label_184854;
        }
    }
    ctx->pc = 0x184838u;
label_184838:
    // 0x184838: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x184838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18483c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x184840: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x184844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184848: 0x0  nop
    ctx->pc = 0x184848u;
    // NOP
    // 0x18484c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18484cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184850: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184854:
    // 0x184854: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x184858: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18485c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18485cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184860: 0x0  nop
    ctx->pc = 0x184860u;
    // NOP
    // 0x184864: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184868: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x184868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18486c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18486cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184870: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x184874: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x184874u;
    {
        const bool branch_taken_0x184874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184874) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x18487Cu;
label_18487c:
    // 0x18487c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x18487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184880: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x184880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x184884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184888: 0x0  nop
    ctx->pc = 0x184888u;
    // NOP
    // 0x18488c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18488Cu;
    {
        const bool branch_taken_0x18488c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18488c) {
            ctx->pc = 0x1848B8u;
            goto label_1848b8;
        }
    }
    ctx->pc = 0x184894u;
    // 0x184894: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184898: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18489c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1848a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1848A0u;
    {
        const bool branch_taken_0x1848a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1848a0) {
            ctx->pc = 0x1848B8u;
            goto label_1848b8;
        }
    }
    ctx->pc = 0x1848A8u;
    // 0x1848a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1848a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1848ac: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x1848acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1848b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1848b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1848b4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x1848b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_1848b8:
    // 0x1848b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1848bc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1848bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1848c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1848C0u;
    {
        const bool branch_taken_0x1848c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1848c0) {
            ctx->pc = 0x1848DCu;
            goto label_1848dc;
        }
    }
    ctx->pc = 0x1848C8u;
    // 0x1848c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1848c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1848cc: 0x0  nop
    ctx->pc = 0x1848ccu;
    // NOP
    // 0x1848d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1848d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1848d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1848D4u;
    {
        const bool branch_taken_0x1848d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1848d4) {
            ctx->pc = 0x1848F8u;
            goto label_1848f8;
        }
    }
    ctx->pc = 0x1848DCu;
label_1848dc:
    // 0x1848dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1848dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1848e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1848e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1848e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1848e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1848e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1848e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1848ec: 0x0  nop
    ctx->pc = 0x1848ecu;
    // NOP
    // 0x1848f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1848f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1848f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1848f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1848f8:
    // 0x1848f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1848fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1848fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184904: 0x0  nop
    ctx->pc = 0x184904u;
    // NOP
    // 0x184908: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18490c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x18490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x184910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x184914: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_184918:
    // 0x184918: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18491c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x184920: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x184924: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x184924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x184928: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x184928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18492c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x18492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184930: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184934: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184938: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184938u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18493c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18493cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184940: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184944: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184944u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184948: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18494c: 0x0  nop
    ctx->pc = 0x18494cu;
    // NOP
    // 0x184950: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x184950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184954: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x184954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184958: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x184958u;
    SET_GPR_U32(ctx, 31, 0x184960u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x184958u, 0x184960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184960u;
label_184960:
    // 0x184960: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x184960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x184964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184968: 0x0  nop
    ctx->pc = 0x184968u;
    // NOP
    // 0x18496c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x18496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x184970: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x184970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184974: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x184974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x184978: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x184978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18497c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x18497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x184980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184988: 0x0  nop
    ctx->pc = 0x184988u;
    // NOP
    // 0x18498c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x18498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x184990: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x184990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x184994: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x184994u;
    SET_GPR_U32(ctx, 31, 0x18499Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x18499Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18499Cu) { return; }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1849a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849a4: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1849a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1849a8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1849A8u;
    SET_GPR_U32(ctx, 31, 0x1849B0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1849B0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1849B0u) { return; }
    ctx->pc = 0x1849B0u;
label_1849b0:
    // 0x1849b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1849b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1849b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1849BCu;
    SET_GPR_U32(ctx, 31, 0x1849C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1849C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1849C4u) { return; }
    ctx->pc = 0x1849C4u;
label_1849c4:
    // 0x1849c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1849cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849d0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849D0u;
    SET_GPR_U32(ctx, 31, 0x1849D8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849D0u, 0x1849D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849D8u;
label_1849d8:
    // 0x1849d8: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1849d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1849dc: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1849e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1849e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849E4u;
    SET_GPR_U32(ctx, 31, 0x1849ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849E4u, 0x1849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1849ECu;
label_1849ec:
    // 0x1849ec: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x1849ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1849f0: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1849f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1849f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1849F8u;
    SET_GPR_U32(ctx, 31, 0x184A00u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1849F8u, 0x184A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A00u;
label_184a00:
    // 0x184a00: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a04: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x184a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184a08: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a0c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x184a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184a14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a18: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184a18u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184a20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a24: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184a24u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184a28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184a2c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a30: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x184a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x184a34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a38: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x184a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a40: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x184a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x184a44: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a48: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x184a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184a4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a50: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x184a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x184a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a5c: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184a5cu;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a60: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x184a64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184a68: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184a68u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184a6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184a70: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184a74: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x184a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a78: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x184a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a7c: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x184a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x184a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184a84: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x184a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x184a88: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x184a88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a90: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x184a94: 0x3e00008  jr          $ra
    ctx->pc = 0x184A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A9Cu;
}
