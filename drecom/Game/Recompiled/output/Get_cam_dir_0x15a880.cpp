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

// Function: Get_cam_dir
// Address: 0x15a880 - 0x15a8d4
void Get_cam_dir_0x15a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_cam_dir_0x15a880");
#endif

    switch (ctx->pc) {
        case 0x15a8acu: goto label_15a8ac;
        case 0x15a8bcu: goto label_15a8bc;
        default: break;
    }

    ctx->pc = 0x15a880u;

    // 0x15a880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a884: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15a888: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a88c: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x15a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15a890: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a894: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x15a894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x15a898: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a89c: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x15a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x15a8a0: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x15a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x15a8a4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15A8A4u;
    SET_GPR_U32(ctx, 31, 0x15A8ACu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15A8A4u, 0x15A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8ACu;
label_15a8ac:
    // 0x15a8ac: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x15a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a8b0: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x15a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15a8b4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A8B4u;
    SET_GPR_U32(ctx, 31, 0x15A8BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A8B4u, 0x15A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8BCu;
label_15a8bc:
    // 0x15a8bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a8c0: 0xe4200afc  swc1        $f0, 0xAFC($at)
    ctx->pc = 0x15a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0AFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AFCu, _value); } while (0); }
    // 0x15a8c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a8c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a8c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A8D4u;
}
