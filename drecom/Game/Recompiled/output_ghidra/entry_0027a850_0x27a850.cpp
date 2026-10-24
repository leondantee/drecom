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

// Function: entry_0027a850
// Address: 0x27a850 - 0x27a8bc
void entry_0027a850_0x27a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a850_0x27a850");
#endif

    switch (ctx->pc) {
        case 0x27a890u: goto label_27a890;
        default: break;
    }

    ctx->pc = 0x27a850u;

    // 0x27a850: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a854: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x27a854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x27a858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a85c: 0x0  nop
    ctx->pc = 0x27a85cu;
    // NOP
    // 0x27a860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a864: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x27a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x27a868: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a86c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x27a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x27a870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a874: 0x0  nop
    ctx->pc = 0x27a874u;
    // NOP
    // 0x27a878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a87c: 0x0  nop
    ctx->pc = 0x27a87cu;
    // NOP
    // 0x27a880: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x27A880u;
    {
        const bool branch_taken_0x27a880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a880) {
            ctx->pc = 0x27A8BCu;
            return;
        }
    }
    ctx->pc = 0x27A888u;
    // 0x27a888: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27A888u;
    SET_GPR_U32(ctx, 31, 0x27A890u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27A888u, 0x27A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A890u;
label_27a890:
    // 0x27a890: 0x3c03440a  lui         $v1, 0x440A
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17418 << 16));
    // 0x27a894: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x27a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x27a898: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a89c: 0x0  nop
    ctx->pc = 0x27a89cu;
    // NOP
    // 0x27a8a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27a8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27a8a4: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x27a8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a8ac: 0x0  nop
    ctx->pc = 0x27a8acu;
    // NOP
    // 0x27a8b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a8b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27a8b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27a8b8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x27a8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->pc = 0x27a8bcu;
}
