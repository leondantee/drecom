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

// Function: entry_002dd510
// Address: 0x2dd510 - 0x2dd550
void entry_002dd510_0x2dd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd510_0x2dd510");
#endif

    switch (ctx->pc) {
        case 0x2dd540u: goto label_2dd540;
        default: break;
    }

    ctx->pc = 0x2dd510u;

    // 0x2dd510: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd514: 0xc4a11288  lwc1        $f1, 0x1288($a1)
    ctx->pc = 0x2dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd518: 0x3c07443b  lui         $a3, 0x443B
    ctx->pc = 0x2dd518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17467 << 16));
    // 0x2dd51c: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x2dd51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2dd520: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2dd520u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd524: 0x0  nop
    ctx->pc = 0x2dd524u;
    // NOP
    // 0x2dd528: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd52c: 0x0  nop
    ctx->pc = 0x2dd52cu;
    // NOP
    // 0x2dd530: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD530u;
    {
        const bool branch_taken_0x2dd530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd530) {
            ctx->pc = 0x2DD550u;
            return;
        }
    }
    ctx->pc = 0x2DD538u;
    // 0x2dd538: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DD538u;
    SET_GPR_U32(ctx, 31, 0x2DD540u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DD538u, 0x2DD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD540u;
label_2dd540:
    // 0x2dd540: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dd540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dd544: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2dd544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dd548: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD548u;
    {
        const bool branch_taken_0x2dd548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd548) {
            ctx->pc = 0x2DD568u;
            return;
        }
    }
    ctx->pc = 0x2DD550u;
}
