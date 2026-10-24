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

// Function: Get_ceiling
// Address: 0x15ea00 - 0x15ea6c
void Get_ceiling_0x15ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_ceiling_0x15ea00");
#endif

    switch (ctx->pc) {
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea5cu: goto label_15ea5c;
        default: break;
    }

    ctx->pc = 0x15ea00u;

    // 0x15ea00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ea04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15ea08: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x15ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x15ea0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ea10: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x15ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ea14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15EA14u;
    SET_GPR_U32(ctx, 31, 0x15EA1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15EA1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EA1Cu) { return; }
    ctx->pc = 0x15EA1Cu;
label_15ea1c:
    // 0x15ea1c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ea20: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15ea24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ea24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea28: 0x0  nop
    ctx->pc = 0x15ea28u;
    // NOP
    // 0x15ea2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15ea2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ea30: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15ea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15ea34: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15ea38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15ea3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ea3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ea40: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x15ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x15ea44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ea44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ea48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ea4c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15ea50: 0x344501c7  ori         $a1, $v0, 0x1C7
    ctx->pc = 0x15ea50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x15ea54: 0xc05b560  jal         func_16D580
    ctx->pc = 0x15EA54u;
    SET_GPR_U32(ctx, 31, 0x15EA5Cu);
    ctx->pc = 0x16D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D580u, 0x15EA54u, 0x15EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA5Cu;
label_15ea5c:
    // 0x15ea5c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15ea5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ea60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ea64: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA6Cu;
}
