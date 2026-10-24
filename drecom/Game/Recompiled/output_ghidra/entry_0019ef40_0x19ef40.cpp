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

// Function: entry_0019ef40
// Address: 0x19ef40 - 0x19ef70
void entry_0019ef40_0x19ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef40_0x19ef40");
#endif

    switch (ctx->pc) {
        case 0x19ef68u: goto label_19ef68;
        default: break;
    }

    ctx->pc = 0x19ef40u;

    // 0x19ef40: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x19ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x19ef44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ef44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ef48: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x19ef4c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x19ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x19ef50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ef50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ef54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x19ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ef58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ef58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ef5c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x19ef5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19ef60: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x19EF60u;
    SET_GPR_U32(ctx, 31, 0x19EF68u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x19EF60u, 0x19EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF68u;
label_19ef68:
    // 0x19ef68: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x19ef68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ef6c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x19ef6cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    ctx->pc = 0x19ef70u;
}
