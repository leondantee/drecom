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

// Function: entry_0020222c
// Address: 0x20222c - 0x20228c
void entry_0020222c_0x20222c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020222c_0x20222c");
#endif

    switch (ctx->pc) {
        case 0x20223cu: goto label_20223c;
        case 0x202260u: goto label_202260;
        default: break;
    }

    ctx->pc = 0x20222cu;

    // 0x20222c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x20222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202230: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x202230u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202234: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x202234u;
    SET_GPR_U32(ctx, 31, 0x20223Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x202234u, 0x20223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20223Cu;
label_20223c:
    // 0x20223c: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x20223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
    // 0x202240: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x202240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x202244: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202248: 0x3c035444  lui         $v1, 0x5444
    ctx->pc = 0x202248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21572 << 16));
    // 0x20224c: 0x34632d18  ori         $v1, $v1, 0x2D18
    ctx->pc = 0x20224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11544);
    // 0x202250: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x202250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x202254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x202254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202258: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x202258u;
    SET_GPR_U32(ctx, 31, 0x202260u);
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x202258u, 0x202260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202260u;
label_202260:
    // 0x202260: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x202260u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202264: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x202264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20226c: 0x8c424848  lw          $v0, 0x4848($v0)
    ctx->pc = 0x20226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18504)));
    // 0x202270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202270) {
            ctx->pc = 0x20228Cu;
            return;
        }
    }
    ctx->pc = 0x202278u;
    // 0x202278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20227c: 0x0  nop
    ctx->pc = 0x20227cu;
    // NOP
    // 0x202280: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202284u;
    {
        const bool branch_taken_0x202284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202284) {
            ctx->pc = 0x2022A8u;
            return;
        }
    }
    ctx->pc = 0x20228Cu;
}
