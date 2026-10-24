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

// Function: caseD_5
// Address: 0x3311bc - 0x331278
void caseD_5_0x3311bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x3311bc");
#endif

    switch (ctx->pc) {
        case 0x3311e4u: goto label_3311e4;
        case 0x331210u: goto label_331210;
        case 0x33123cu: goto label_33123c;
        case 0x331270u: goto label_331270;
        default: break;
    }

    ctx->pc = 0x3311bcu;

    // 0x3311bc: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x3311bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3311c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3311c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3311c4: 0x0  nop
    ctx->pc = 0x3311c4u;
    // NOP
    // 0x3311c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3311c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3311cc: 0x3c0a40e0  lui         $t2, 0x40E0
    ctx->pc = 0x3311ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16608 << 16));
    // 0x3311d0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3311d0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3311d4: 0x0  nop
    ctx->pc = 0x3311d4u;
    // NOP
    // 0x3311d8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3311d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3311dc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3311DCu;
    SET_GPR_U32(ctx, 31, 0x3311E4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3311DCu, 0x3311E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311E4u;
label_3311e4:
    // 0x3311e4: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x3311e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x3311e8: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x3311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x3311ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3311ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3311f0: 0x0  nop
    ctx->pc = 0x3311f0u;
    // NOP
    // 0x3311f4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3311f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3311f8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x3311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x3311fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3311fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331200: 0x0  nop
    ctx->pc = 0x331200u;
    // NOP
    // 0x331204: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x331204u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x331208: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331208u;
    SET_GPR_U32(ctx, 31, 0x331210u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331208u, 0x331210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331210u;
label_331210:
    // 0x331210: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x331214: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x331214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x331218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x331218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33121c: 0x0  nop
    ctx->pc = 0x33121cu;
    // NOP
    // 0x331220: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331224: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x331224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x331228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33122c: 0x0  nop
    ctx->pc = 0x33122cu;
    // NOP
    // 0x331230: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331230u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331234: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331234u;
    SET_GPR_U32(ctx, 31, 0x33123Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331234u, 0x33123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33123Cu;
label_33123c:
    // 0x33123c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x33123cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x331240: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x331240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x331244: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x331244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x331248: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x331248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331250: 0x0  nop
    ctx->pc = 0x331250u;
    // NOP
    // 0x331254: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331258: 0x3c0b40e0  lui         $t3, 0x40E0
    ctx->pc = 0x331258u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16608 << 16));
    // 0x33125c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x33125cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331260: 0x0  nop
    ctx->pc = 0x331260u;
    // NOP
    // 0x331264: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x331264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x331268: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331268u;
    SET_GPR_U32(ctx, 31, 0x331270u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331268u, 0x331270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331270u;
label_331270:
    // 0x331270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x331270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331274: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x331274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    ctx->pc = 0x331278u;
}
