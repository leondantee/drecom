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

// Function: entry_002d8238
// Address: 0x2d8238 - 0x2d82c8
void entry_002d8238_0x2d8238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8238_0x2d8238");
#endif

    switch (ctx->pc) {
        case 0x2d8270u: goto label_2d8270;
        case 0x2d8294u: goto label_2d8294;
        default: break;
    }

    ctx->pc = 0x2d8238u;

    // 0x2d8238: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d823c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x2d823cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8244: 0x8c721210  lw          $s2, 0x1210($v1)
    ctx->pc = 0x2d8244u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2d8248: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d824c: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x2d824cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x2d8250: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x2d8250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8254: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d8254u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d8258: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d825c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8260: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x2d8260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2d8264: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2d8264u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2d8268: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2D8268u;
    SET_GPR_U32(ctx, 31, 0x2D8270u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2D8268u, 0x2D8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8270u;
label_2d8270:
    // 0x2d8270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8278: 0xa20400d8  sb          $a0, 0xD8($s0)
    ctx->pc = 0x2d8278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d827c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8280: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8284: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2d8284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d8288: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x2d8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d828c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2D828Cu;
    SET_GPR_U32(ctx, 31, 0x2D8294u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2D828Cu, 0x2D8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8294u;
label_2d8294:
    // 0x2d8294: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d8294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d8298: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2d8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d829c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d829cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d82a0: 0x0  nop
    ctx->pc = 0x2d82a0u;
    // NOP
    // 0x2d82a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d82a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d82a8: 0x0  nop
    ctx->pc = 0x2d82a8u;
    // NOP
    // 0x2d82ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D82ACu;
    {
        const bool branch_taken_0x2d82ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d82ac) {
            ctx->pc = 0x2D82C8u;
            return;
        }
    }
    ctx->pc = 0x2D82B4u;
    // 0x2d82b4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2d82b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d82b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d82bc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d82c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d82c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x2d82c8u;
}
