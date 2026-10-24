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

// Function: entry_001a01dc
// Address: 0x1a01dc - 0x1a0210
void entry_001a01dc_0x1a01dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a01dc_0x1a01dc");
#endif

    switch (ctx->pc) {
        case 0x1a0204u: goto label_1a0204;
        default: break;
    }

    ctx->pc = 0x1a01dcu;

    // 0x1a01dc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1a01e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a01e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a01e4: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x1a01e8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1a01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1a01ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a01ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a01f0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a01f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a01f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a01f8: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x1a01f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1a01fc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A01FCu;
    SET_GPR_U32(ctx, 31, 0x1A0204u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A01FCu, 0x1A0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0204u;
label_1a0204:
    // 0x1a0204: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x1a0204u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0208: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x1a0208u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
    ctx->pc = 0x1a0210u;
}
