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

// Function: entry_0032ca58
// Address: 0x32ca58 - 0x32ca98
void entry_0032ca58_0x32ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ca58_0x32ca58");
#endif

    switch (ctx->pc) {
        case 0x32ca8cu: goto label_32ca8c;
        default: break;
    }

    ctx->pc = 0x32ca58u;

    // 0x32ca58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ca5c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32ca60: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32ca64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32CA64u;
    {
        const bool branch_taken_0x32ca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca64) {
            ctx->pc = 0x32CA98u;
            return;
        }
    }
    ctx->pc = 0x32CA6Cu;
    // 0x32ca6c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x32ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32ca70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ca70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ca74: 0x0  nop
    ctx->pc = 0x32ca74u;
    // NOP
    // 0x32ca78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32ca78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ca7c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ca80: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ca80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ca84: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32CA84u;
    SET_GPR_U32(ctx, 31, 0x32CA8Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32CA84u, 0x32CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA8Cu;
label_32ca8c:
    // 0x32ca8c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x32ca90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CA90u;
    {
        const bool branch_taken_0x32ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca90) {
            ctx->pc = 0x32CAA8u;
            return;
        }
    }
    ctx->pc = 0x32CA98u;
}
