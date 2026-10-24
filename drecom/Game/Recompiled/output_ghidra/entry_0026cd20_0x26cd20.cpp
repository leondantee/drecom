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

// Function: entry_0026cd20
// Address: 0x26cd20 - 0x26cd64
void entry_0026cd20_0x26cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cd20_0x26cd20");
#endif

    switch (ctx->pc) {
        case 0x26cd5cu: goto label_26cd5c;
        default: break;
    }

    ctx->pc = 0x26cd20u;

    // 0x26cd20: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd24: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x26cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x26cd28: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x26cd28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x26cd2c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26cd2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26cd30: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x26cd34: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x26cd34u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26cd38: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x26cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x26cd3c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x26cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x26cd40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26cd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26cd44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26cd44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26cd48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cd48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26cd4c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x26cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26cd50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26cd50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cd54: 0xc086488  jal         func_219220
    ctx->pc = 0x26CD54u;
    SET_GPR_U32(ctx, 31, 0x26CD5Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26CD54u, 0x26CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD5Cu;
label_26cd5c:
    // 0x26cd5c: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x26CD5Cu;
    {
        const bool branch_taken_0x26cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd5c) {
            ctx->pc = 0x26D65Cu;
            return;
        }
    }
    ctx->pc = 0x26CD64u;
}
