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

// Function: entry_0025c740
// Address: 0x25c740 - 0x25c798
void entry_0025c740_0x25c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c740_0x25c740");
#endif

    switch (ctx->pc) {
        case 0x25c758u: goto label_25c758;
        default: break;
    }

    ctx->pc = 0x25c740u;

    // 0x25c740: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c744: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x25c744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x25c748: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x25c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x25c74c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x25c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x25c750: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x25C750u;
    SET_GPR_U32(ctx, 31, 0x25C758u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25C750u, 0x25C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C758u;
label_25c758:
    // 0x25c758: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c75c: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x25c760: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c764: 0xc46102d8  lwc1        $f1, 0x2D8($v1)
    ctx->pc = 0x25c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c768: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x25c768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x25c76c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x25c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x25c770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c774: 0x0  nop
    ctx->pc = 0x25c774u;
    // NOP
    // 0x25c778: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25c778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c77c: 0x0  nop
    ctx->pc = 0x25c77cu;
    // NOP
    // 0x25c780: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25C780u;
    {
        const bool branch_taken_0x25c780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c780) {
            ctx->pc = 0x25C798u;
            return;
        }
    }
    ctx->pc = 0x25C788u;
    // 0x25c788: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c78c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x25c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c790: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c794: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25c794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    ctx->pc = 0x25c798u;
}
