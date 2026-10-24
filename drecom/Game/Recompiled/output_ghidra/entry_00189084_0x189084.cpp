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

// Function: entry_00189084
// Address: 0x189084 - 0x1890ec
void entry_00189084_0x189084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189084_0x189084");
#endif

    switch (ctx->pc) {
        case 0x1890b8u: goto label_1890b8;
        default: break;
    }

    ctx->pc = 0x189084u;

    // 0x189084: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189088: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18908c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x189090: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x189090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189094: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x189094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189098: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x189098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x18909c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890a0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1890a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1890a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1890a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1890a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890ac: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1890acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1890b0: 0xc0622c0  jal         func_188B00
    ctx->pc = 0x1890B0u;
    SET_GPR_U32(ctx, 31, 0x1890B8u);
    ctx->pc = 0x188B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188B00u, 0x1890B0u, 0x1890B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890B8u;
label_1890b8:
    // 0x1890b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1890b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1890bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1890c0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1890c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1890c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1890c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1890c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1890cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1890CCu;
    {
        const bool branch_taken_0x1890cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890cc) {
            ctx->pc = 0x1890ECu;
            return;
        }
    }
    ctx->pc = 0x1890D4u;
    // 0x1890d4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1890d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1890d8: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1890d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1890dc: 0xa38080b0  sb          $zero, -0x7F50($gp)
    ctx->pc = 0x1890dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934704), (uint8_t)GPR_U32(ctx, 0));
    // 0x1890e0: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x1890e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    // 0x1890e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1890E4u;
    {
        const bool branch_taken_0x1890e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890e4) {
            ctx->pc = 0x1890F8u;
            return;
        }
    }
    ctx->pc = 0x1890ECu;
}
