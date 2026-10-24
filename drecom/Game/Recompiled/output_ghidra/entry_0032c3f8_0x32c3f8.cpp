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

// Function: entry_0032c3f8
// Address: 0x32c3f8 - 0x32c4c0
void entry_0032c3f8_0x32c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c3f8_0x32c3f8");
#endif

    switch (ctx->pc) {
        case 0x32c454u: goto label_32c454;
        default: break;
    }

    ctx->pc = 0x32c3f8u;

    // 0x32c3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32c3fc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x32c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32c400: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x32c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x32c404: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x32C404u;
    {
        const bool branch_taken_0x32c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c404) {
            ctx->pc = 0x32C4C0u;
            return;
        }
    }
    ctx->pc = 0x32C40Cu;
    // 0x32c40c: 0x86c313ac  lh          $v1, 0x13AC($s6)
    ctx->pc = 0x32c40cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5036)));
    // 0x32c410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32c410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c414: 0x0  nop
    ctx->pc = 0x32c414u;
    // NOP
    // 0x32c418: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c41c: 0x86c213ae  lh          $v0, 0x13AE($s6)
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5038)));
    // 0x32c420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c424: 0x0  nop
    ctx->pc = 0x32c424u;
    // NOP
    // 0x32c428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c42c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32c42cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32c430: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c438: 0x0  nop
    ctx->pc = 0x32c438u;
    // NOP
    // 0x32c43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32c440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32c444: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c448: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c44c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C44Cu;
    SET_GPR_U32(ctx, 31, 0x32C454u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C44Cu, 0x32C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C454u;
label_32c454:
    // 0x32c454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c458: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c458u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c45c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c460: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x32c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x32c464: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x32c464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32c468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c46c: 0x0  nop
    ctx->pc = 0x32c46cu;
    // NOP
    // 0x32c470: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c474: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c478: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32c478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32c47c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c480: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c484: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c488: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c48c: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x32c48cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c490: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x32C490u;
    {
        const bool branch_taken_0x32c490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c490) {
            ctx->pc = 0x32C65Cu;
            return;
        }
    }
    ctx->pc = 0x32C498u;
    // 0x32c498: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c49c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32c49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c4a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32c4a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32c4a4: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x32c4a4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c4a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32c4ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32c4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4b0: 0x0  nop
    ctx->pc = 0x32c4b0u;
    // NOP
    // 0x32c4b4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c4b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x32C4B8u;
    {
        const bool branch_taken_0x32c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c4b8) {
            ctx->pc = 0x32C65Cu;
            return;
        }
    }
    ctx->pc = 0x32C4C0u;
}
