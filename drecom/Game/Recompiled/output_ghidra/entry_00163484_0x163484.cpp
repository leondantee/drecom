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

// Function: entry_00163484
// Address: 0x163484 - 0x1634bc
void entry_00163484_0x163484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163484_0x163484");
#endif

    switch (ctx->pc) {
        case 0x1634b4u: goto label_1634b4;
        default: break;
    }

    ctx->pc = 0x163484u;

    // 0x163484: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x163488: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x163488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x16348c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163490: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x163490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x163494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x163498: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16349c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1634a0: 0xc4214f28  lwc1        $f1, 0x4F28($at)
    ctx->pc = 0x1634a0u;
    { uint32_t bits = FAST_READ32(0x3F4F28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1634a4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1634a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1634a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1634a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1634ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1634ACu;
    SET_GPR_U32(ctx, 31, 0x1634B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1634ACu, 0x1634B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634B4u;
label_1634b4:
    // 0x1634b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1634b8: 0xe4204f28  swc1        $f0, 0x4F28($at)
    ctx->pc = 0x1634b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F28u, _value); } while (0); }
    ctx->pc = 0x1634bcu;
}
