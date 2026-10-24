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

// Function: entry_003135c0
// Address: 0x3135c0 - 0x3135f0
void entry_003135c0_0x3135c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003135c0_0x3135c0");
#endif

    switch (ctx->pc) {
        case 0x3135c8u: goto label_3135c8;
        default: break;
    }

    ctx->pc = 0x3135c0u;

    // 0x3135c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x3135C0u;
    SET_GPR_U32(ctx, 31, 0x3135C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3135C0u, 0x3135C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135C8u;
label_3135c8:
    // 0x3135c8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3135c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3135cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135d0: 0x0  nop
    ctx->pc = 0x3135d0u;
    // NOP
    // 0x3135d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3135d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3135d8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x3135d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x3135dc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3135dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3135e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135e4: 0x0  nop
    ctx->pc = 0x3135e4u;
    // NOP
    // 0x3135e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3135e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3135ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3135ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x3135f0u;
}
