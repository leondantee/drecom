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

// Function: entry_0026d61c
// Address: 0x26d61c - 0x26d65c
void entry_0026d61c_0x26d61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d61c_0x26d61c");
#endif

    ctx->pc = 0x26d61cu;

    // 0x26d61c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26d620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26d620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d624: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26d628: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26d628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26d62c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x26d630: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26d630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26d634: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26d634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26d638: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d63c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x26d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x26d640: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d648: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26d64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d650: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26d650u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26d654: 0xc086488  jal         func_219220
    ctx->pc = 0x26D654u;
    SET_GPR_U32(ctx, 31, 0x26D65Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26D654u, 0x26D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D65Cu;
}
