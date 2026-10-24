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

// Function: entry_00329328
// Address: 0x329328 - 0x3293b8
void entry_00329328_0x329328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329328_0x329328");
#endif

    switch (ctx->pc) {
        case 0x329348u: goto label_329348;
        case 0x32936cu: goto label_32936c;
        case 0x329390u: goto label_329390;
        case 0x3293b4u: goto label_3293b4;
        default: break;
    }

    ctx->pc = 0x329328u;

    // 0x329328: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x329328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32932c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32932cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329330: 0x0  nop
    ctx->pc = 0x329330u;
    // NOP
    // 0x329334: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329338: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x329338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32933c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32933cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329340: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329340u;
    SET_GPR_U32(ctx, 31, 0x329348u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329340u, 0x329348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329348u;
label_329348:
    // 0x329348: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x329348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32934c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x329350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329354: 0x0  nop
    ctx->pc = 0x329354u;
    // NOP
    // 0x329358: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32935c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329360: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x329360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329364: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329364u;
    SET_GPR_U32(ctx, 31, 0x32936Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329364u, 0x32936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32936Cu;
label_32936c:
    // 0x32936c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x329370: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x329370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x329374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329378: 0x0  nop
    ctx->pc = 0x329378u;
    // NOP
    // 0x32937c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32937cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329380: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x329380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329384: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x329384u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329388: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329388u;
    SET_GPR_U32(ctx, 31, 0x329390u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329388u, 0x329390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329390u;
label_329390:
    // 0x329390: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x329390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x329394: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x329394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x329398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32939c: 0x0  nop
    ctx->pc = 0x32939cu;
    // NOP
    // 0x3293a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3293a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3293a4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x3293a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3293a8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3293a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3293ac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3293ACu;
    SET_GPR_U32(ctx, 31, 0x3293B4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3293ACu, 0x3293B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293B4u;
label_3293b4:
    // 0x3293b4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3293b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x3293b8u;
}
