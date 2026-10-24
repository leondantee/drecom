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

// Function: entry_0019ef94
// Address: 0x19ef94 - 0x19efdc
void entry_0019ef94_0x19ef94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef94_0x19ef94");
#endif

    switch (ctx->pc) {
        case 0x19efccu: goto label_19efcc;
        default: break;
    }

    ctx->pc = 0x19ef94u;

    // 0x19ef94: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x19ef94u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ef98: 0x0  nop
    ctx->pc = 0x19ef98u;
    // NOP
    // 0x19ef9c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x19ef9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19efa0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x19efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19efa4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x19efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19efa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19efac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x19efacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19efb0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x19efb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19efb4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x19efb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19efb8: 0x0  nop
    ctx->pc = 0x19efb8u;
    // NOP
    // 0x19efbc: 0x0  nop
    ctx->pc = 0x19efbcu;
    // NOP
    // 0x19efc0: 0x0  nop
    ctx->pc = 0x19efc0u;
    // NOP
    // 0x19efc4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EFC4u;
    SET_GPR_U32(ctx, 31, 0x19EFCCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EFC4u, 0x19EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFCCu;
label_19efcc:
    // 0x19efcc: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19efd0: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x19efd0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x19efd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19EFD4u;
    {
        const bool branch_taken_0x19efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19efd4) {
            ctx->pc = 0x19EFF0u;
            return;
        }
    }
    ctx->pc = 0x19EFDCu;
}
