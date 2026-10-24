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

// Function: entry_00369e30
// Address: 0x369e30 - 0x369e9c
void entry_00369e30_0x369e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369e30_0x369e30");
#endif

    switch (ctx->pc) {
        case 0x369e40u: goto label_369e40;
        case 0x369e80u: goto label_369e80;
        default: break;
    }

    ctx->pc = 0x369e30u;

    // 0x369e30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369e34: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e38: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369E38u;
    SET_GPR_U32(ctx, 31, 0x369E40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369E40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369E40u) { return; }
    ctx->pc = 0x369E40u;
label_369e40:
    // 0x369e40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e48: 0x0  nop
    ctx->pc = 0x369e48u;
    // NOP
    // 0x369e4c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369e50: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e58: 0x0  nop
    ctx->pc = 0x369e58u;
    // NOP
    // 0x369e5c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369e60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369e64: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e68: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369e6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369e70: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369e74: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369e78: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369E78u;
    SET_GPR_U32(ctx, 31, 0x369E80u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369E78u, 0x369E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E80u;
label_369e80:
    // 0x369e80: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369e80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369e84: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369E84u;
    {
        const bool branch_taken_0x369e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e84) {
            ctx->pc = 0x369E9Cu;
            return;
        }
    }
    ctx->pc = 0x369E8Cu;
    // 0x369e8c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369e94: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369E94u;
    SET_GPR_U32(ctx, 31, 0x369E9Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369E9Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369E9Cu) { return; }
    ctx->pc = 0x369E9Cu;
}
