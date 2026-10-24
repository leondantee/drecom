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

// Function: entry_0035b9b8
// Address: 0x35b9b8 - 0x35ba34
void entry_0035b9b8_0x35b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b9b8_0x35b9b8");
#endif

    switch (ctx->pc) {
        case 0x35ba0cu: goto label_35ba0c;
        case 0x35ba2cu: goto label_35ba2c;
        default: break;
    }

    ctx->pc = 0x35b9b8u;

    // 0x35b9b8: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x35b9b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35b9bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x35B9BCu;
    {
        const bool branch_taken_0x35b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b9bc) {
            ctx->pc = 0x35B990u;
            return;
        }
    }
    ctx->pc = 0x35B9C4u;
    // 0x35b9c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x35b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x35b9cc: 0x24720e10  addiu       $s2, $v1, 0xE10
    ctx->pc = 0x35b9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x35b9d0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x35b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b9d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9d8: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b9dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b9e0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35B9E0u;
    {
        const bool branch_taken_0x35b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b9e0) {
            ctx->pc = 0x35BA34u;
            return;
        }
    }
    ctx->pc = 0x35B9E8u;
    // 0x35b9e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9ec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35b9f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35b9f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35b9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35b9f8: 0x24040427  addiu       $a0, $zero, 0x427
    ctx->pc = 0x35b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
    // 0x35b9fc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x35b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x35ba00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ba00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba04: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35BA04u;
    SET_GPR_U32(ctx, 31, 0x35BA0Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35BA04u, 0x35BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA0Cu;
label_35ba0c:
    // 0x35ba0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ba18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ba18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ba20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ba24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35BA24u;
    SET_GPR_U32(ctx, 31, 0x35BA2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35BA24u, 0x35BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA2Cu;
label_35ba2c:
    // 0x35ba2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35BA2Cu;
    {
        const bool branch_taken_0x35ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba2c) {
            ctx->pc = 0x35BA68u;
            return;
        }
    }
    ctx->pc = 0x35BA34u;
}
