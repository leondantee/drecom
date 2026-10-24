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

// Function: entry_0036c560
// Address: 0x36c560 - 0x36c5b8
void entry_0036c560_0x36c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c560_0x36c560");
#endif

    switch (ctx->pc) {
        case 0x36c5a4u: goto label_36c5a4;
        default: break;
    }

    ctx->pc = 0x36c560u;

    // 0x36c560: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x36c560u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c564: 0x0  nop
    ctx->pc = 0x36c564u;
    // NOP
    // 0x36c568: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36c568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36c56c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36c570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c574: 0x0  nop
    ctx->pc = 0x36c574u;
    // NOP
    // 0x36c578: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36c578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36c57c: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x36c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x36c580: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x36c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x36c584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c588: 0x0  nop
    ctx->pc = 0x36c588u;
    // NOP
    // 0x36c58c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36c58cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36c590: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x36c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x36c594: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c598: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c59c: 0xc067844  jal         func_19E110
    ctx->pc = 0x36C59Cu;
    SET_GPR_U32(ctx, 31, 0x36C5A4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36C59Cu, 0x36C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5A4u;
label_36c5a4:
    // 0x36c5a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5a8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x36c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5ac: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c5b0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x36C5B0u;
    SET_GPR_U32(ctx, 31, 0x36C5B8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x36C5B8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C5B8u) { return; }
    ctx->pc = 0x36C5B8u;
}
