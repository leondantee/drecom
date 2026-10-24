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

// Function: entry_003257e4
// Address: 0x3257e4 - 0x32586c
void entry_003257e4_0x3257e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003257e4_0x3257e4");
#endif

    switch (ctx->pc) {
        case 0x3257ecu: goto label_3257ec;
        case 0x325820u: goto label_325820;
        default: break;
    }

    ctx->pc = 0x3257e4u;

    // 0x3257e4: 0xc067654  jal         func_19D950
    ctx->pc = 0x3257E4u;
    SET_GPR_U32(ctx, 31, 0x3257ECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x3257E4u, 0x3257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257ECu;
label_3257ec:
    // 0x3257ec: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3257ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x3257f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3257f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3257f4: 0x0  nop
    ctx->pc = 0x3257f4u;
    // NOP
    // 0x3257f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3257f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3257fc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3257fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x325800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325804: 0x0  nop
    ctx->pc = 0x325804u;
    // NOP
    // 0x325808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x325808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32580c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32580cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x325810: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x325810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325814: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x325814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x325818: 0xc067648  jal         func_19D920
    ctx->pc = 0x325818u;
    SET_GPR_U32(ctx, 31, 0x325820u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x325818u, 0x325820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325820u;
label_325820:
    // 0x325820: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x325824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325828: 0x0  nop
    ctx->pc = 0x325828u;
    // NOP
    // 0x32582c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32582cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325830: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x325830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x325834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325838: 0x0  nop
    ctx->pc = 0x325838u;
    // NOP
    // 0x32583c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32583cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x325840: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x325840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x325844: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x325844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x325848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32584c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x32584cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x325850: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325850u;
    {
        const bool branch_taken_0x325850 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x325850) {
            ctx->pc = 0x32586Cu;
            return;
        }
    }
    ctx->pc = 0x325858u;
    // 0x325858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32585c: 0x0  nop
    ctx->pc = 0x32585cu;
    // NOP
    // 0x325860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325864u;
    {
        const bool branch_taken_0x325864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325864) {
            ctx->pc = 0x325888u;
            return;
        }
    }
    ctx->pc = 0x32586Cu;
}
