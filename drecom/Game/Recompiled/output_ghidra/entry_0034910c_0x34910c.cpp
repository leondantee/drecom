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

// Function: entry_0034910c
// Address: 0x34910c - 0x34916c
void entry_0034910c_0x34910c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034910c_0x34910c");
#endif

    switch (ctx->pc) {
        case 0x349118u: goto label_349118;
        default: break;
    }

    ctx->pc = 0x34910cu;

    // 0x34910c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349110: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349110u;
    SET_GPR_U32(ctx, 31, 0x349118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349110u, 0x349118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349118u;
label_349118:
    // 0x349118: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34911c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x34911cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x349120: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x349120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x349124: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x349124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x349128: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x349128u;
    {
        const bool branch_taken_0x349128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349128) {
            ctx->pc = 0x34916Cu;
            return;
        }
    }
    ctx->pc = 0x349130u;
    // 0x349130: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349138: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34913c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349140: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349148: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34914c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349154: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349158: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349160: 0x0  nop
    ctx->pc = 0x349160u;
    // NOP
    // 0x349164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349168: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x34916cu;
}
