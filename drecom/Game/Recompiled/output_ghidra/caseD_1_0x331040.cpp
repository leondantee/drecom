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

// Function: caseD_1
// Address: 0x331040 - 0x331100
void caseD_1_0x331040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x331040");
#endif

    switch (ctx->pc) {
        case 0x331068u: goto label_331068;
        case 0x331094u: goto label_331094;
        case 0x3310c0u: goto label_3310c0;
        case 0x3310f4u: goto label_3310f4;
        default: break;
    }

    ctx->pc = 0x331040u;

    // 0x331040: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x331040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x331044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331048: 0x0  nop
    ctx->pc = 0x331048u;
    // NOP
    // 0x33104c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x331050: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x331050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x331054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331058: 0x0  nop
    ctx->pc = 0x331058u;
    // NOP
    // 0x33105c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33105cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x331060: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x331060u;
    SET_GPR_U32(ctx, 31, 0x331068u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x331060u, 0x331068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331068u;
label_331068:
    // 0x331068: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x331068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x33106c: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x33106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x331070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331074: 0x0  nop
    ctx->pc = 0x331074u;
    // NOP
    // 0x331078: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x331078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33107c: 0x3c064010  lui         $a2, 0x4010
    ctx->pc = 0x33107cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16400 << 16));
    // 0x331080: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x331080u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331084: 0x0  nop
    ctx->pc = 0x331084u;
    // NOP
    // 0x331088: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x331088u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33108c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33108Cu;
    SET_GPR_U32(ctx, 31, 0x331094u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33108Cu, 0x331094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331094u;
label_331094:
    // 0x331094: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x331094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x331098: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x331098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x33109c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3310a0: 0x0  nop
    ctx->pc = 0x3310a0u;
    // NOP
    // 0x3310a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3310a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3310a8: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x3310a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x3310ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3310acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3310b0: 0x0  nop
    ctx->pc = 0x3310b0u;
    // NOP
    // 0x3310b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3310b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3310b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3310B8u;
    SET_GPR_U32(ctx, 31, 0x3310C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3310B8u, 0x3310C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310C0u;
label_3310c0:
    // 0x3310c0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3310c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3310c4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3310c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3310c8: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x3310c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x3310cc: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x3310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x3310d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3310d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3310d4: 0x0  nop
    ctx->pc = 0x3310d4u;
    // NOP
    // 0x3310d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3310d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3310dc: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x3310dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x3310e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3310e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3310e4: 0x0  nop
    ctx->pc = 0x3310e4u;
    // NOP
    // 0x3310e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3310e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3310ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3310ECu;
    SET_GPR_U32(ctx, 31, 0x3310F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3310ECu, 0x3310F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3310F4u;
label_3310f4:
    // 0x3310f4: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x3310f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x3310f8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3310F8u;
    {
        const bool branch_taken_0x3310f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3310f8) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x331100u;
}
