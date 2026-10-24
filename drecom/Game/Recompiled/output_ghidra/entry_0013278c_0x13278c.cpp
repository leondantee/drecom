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

// Function: entry_0013278c
// Address: 0x13278c - 0x13282c
void entry_0013278c_0x13278c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013278c_0x13278c");
#endif

    switch (ctx->pc) {
        case 0x1327a4u: goto label_1327a4;
        case 0x132824u: goto label_132824;
        default: break;
    }

    ctx->pc = 0x13278cu;

    // 0x13278c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132794: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x132794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x132798: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x132798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x13279c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x13279Cu;
    SET_GPR_U32(ctx, 31, 0x1327A4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x13279Cu, 0x1327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1327A4u;
label_1327a4:
    // 0x1327a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1327a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327ac: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1327acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1327b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1327b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1327b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1327b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1327bc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1327bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1327c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327c4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1327c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1327c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327cc: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1327ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1327d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1327d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1327d4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1327d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1327d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327dc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1327dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1327e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1327e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1327e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1327e8: 0x0  nop
    ctx->pc = 0x1327e8u;
    // NOP
    // 0x1327ec: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1327ECu;
    {
        const bool branch_taken_0x1327ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1327ec) {
            ctx->pc = 0x13282Cu;
            return;
        }
    }
    ctx->pc = 0x1327F4u;
    // 0x1327f4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1327f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1327f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1327fc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1327fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132804: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132808: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x132808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x13280c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13280cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132814: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x132818: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13281c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13281Cu;
    SET_GPR_U32(ctx, 31, 0x132824u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13281Cu, 0x132824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132824u;
label_132824:
    // 0x132824: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x132824u;
    {
        const bool branch_taken_0x132824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132824) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x13282Cu;
}
