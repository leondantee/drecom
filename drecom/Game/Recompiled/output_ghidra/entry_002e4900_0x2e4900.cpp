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

// Function: entry_002e4900
// Address: 0x2e4900 - 0x2e4948
void entry_002e4900_0x2e4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4900_0x2e4900");
#endif

    switch (ctx->pc) {
        case 0x2e490cu: goto label_2e490c;
        default: break;
    }

    ctx->pc = 0x2e4900u;

    // 0x2e4900: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x2e4900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x2e4904: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E4904u;
    SET_GPR_U32(ctx, 31, 0x2E490Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E4904u, 0x2E490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E490Cu;
label_2e490c:
    // 0x2e490c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e490cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4910: 0x0  nop
    ctx->pc = 0x2e4910u;
    // NOP
    // 0x2e4914: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4918: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e4918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e491c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e491cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4920: 0x0  nop
    ctx->pc = 0x2e4920u;
    // NOP
    // 0x2e4924: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2e4928: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2e4928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e492c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2e492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e4930: 0xa4600086  sh          $zero, 0x86($v1)
    ctx->pc = 0x2e4930u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e4934: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e4934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e493c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e493cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4940: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2E4940u;
    {
        const bool branch_taken_0x2e4940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4940) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E4948u;
}
