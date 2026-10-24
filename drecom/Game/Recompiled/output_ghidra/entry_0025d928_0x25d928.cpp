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

// Function: entry_0025d928
// Address: 0x25d928 - 0x25d970
void entry_0025d928_0x25d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d928_0x25d928");
#endif

    switch (ctx->pc) {
        case 0x25d940u: goto label_25d940;
        default: break;
    }

    ctx->pc = 0x25d928u;

    // 0x25d928: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25d92c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25d930: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25d930u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d934: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x25d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x25d938: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x25D938u;
    SET_GPR_U32(ctx, 31, 0x25D940u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25D938u, 0x25D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D940u;
label_25d940:
    // 0x25d940: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x25d944: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d948: 0x3c06c974  lui         $a2, 0xC974
    ctx->pc = 0x25d948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51572 << 16));
    // 0x25d94c: 0x34c52400  ori         $a1, $a2, 0x2400
    ctx->pc = 0x25d94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9216);
    // 0x25d950: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25d950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d954: 0x0  nop
    ctx->pc = 0x25d954u;
    // NOP
    // 0x25d958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25d958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d95c: 0x0  nop
    ctx->pc = 0x25d95cu;
    // NOP
    // 0x25d960: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D960u;
    {
        const bool branch_taken_0x25d960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d960) {
            ctx->pc = 0x25D970u;
            return;
        }
    }
    ctx->pc = 0x25D968u;
    // 0x25d968: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x25d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d96c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    ctx->pc = 0x25d970u;
}
