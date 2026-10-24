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

// Function: entry_0032d4e0
// Address: 0x32d4e0 - 0x32d578
void entry_0032d4e0_0x32d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d4e0_0x32d4e0");
#endif

    switch (ctx->pc) {
        case 0x32d500u: goto label_32d500;
        case 0x32d524u: goto label_32d524;
        case 0x32d54cu: goto label_32d54c;
        case 0x32d570u: goto label_32d570;
        default: break;
    }

    ctx->pc = 0x32d4e0u;

    // 0x32d4e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d4e8: 0x0  nop
    ctx->pc = 0x32d4e8u;
    // NOP
    // 0x32d4ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d4f0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d4f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d4f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d4f8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D4F8u;
    SET_GPR_U32(ctx, 31, 0x32D500u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D4F8u, 0x32D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D500u;
label_32d500:
    // 0x32d500: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d504: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d50c: 0x0  nop
    ctx->pc = 0x32d50cu;
    // NOP
    // 0x32d510: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d514: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d518: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d518u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d51c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D51Cu;
    SET_GPR_U32(ctx, 31, 0x32D524u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D51Cu, 0x32D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D524u;
label_32d524:
    // 0x32d524: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32d524u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d528: 0xafbe00a4  sw          $fp, 0xA4($sp)
    ctx->pc = 0x32d528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 30));
    // 0x32d52c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d534: 0x0  nop
    ctx->pc = 0x32d534u;
    // NOP
    // 0x32d538: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d53c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d540: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d540u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d544: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D544u;
    SET_GPR_U32(ctx, 31, 0x32D54Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D544u, 0x32D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D54Cu;
label_32d54c:
    // 0x32d54c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32d550: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d558: 0x0  nop
    ctx->pc = 0x32d558u;
    // NOP
    // 0x32d55c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d560: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d564: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d564u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d568: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D568u;
    SET_GPR_U32(ctx, 31, 0x32D570u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D568u, 0x32D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D570u;
label_32d570:
    // 0x32d570: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d574: 0x0  nop
    ctx->pc = 0x32d574u;
    // NOP
    ctx->pc = 0x32d578u;
}
