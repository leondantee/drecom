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

// Function: entry_00359f08
// Address: 0x359f08 - 0x359f84
void entry_00359f08_0x359f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359f08_0x359f08");
#endif

    switch (ctx->pc) {
        case 0x359f5cu: goto label_359f5c;
        case 0x359f7cu: goto label_359f7c;
        default: break;
    }

    ctx->pc = 0x359f08u;

    // 0x359f08: 0x2e030017  sltiu       $v1, $s0, 0x17
    ctx->pc = 0x359f08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x359f0c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x359F0Cu;
    {
        const bool branch_taken_0x359f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359f0c) {
            ctx->pc = 0x359EE0u;
            return;
        }
    }
    ctx->pc = 0x359F14u;
    // 0x359f14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x359f1c: 0x24720cf0  addiu       $s2, $v1, 0xCF0
    ctx->pc = 0x359f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x359f20: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x359f20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x359f24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f28: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x359f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x359f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x359f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359f30: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x359F30u;
    {
        const bool branch_taken_0x359f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359f30) {
            ctx->pc = 0x359F84u;
            return;
        }
    }
    ctx->pc = 0x359F38u;
    // 0x359f38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f3c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x359f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x359f40: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x359f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x359f44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x359f48: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x359f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x359f4c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x359f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x359f50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359f50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359f54: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x359F54u;
    SET_GPR_U32(ctx, 31, 0x359F5Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x359F54u, 0x359F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F5Cu;
label_359f5c:
    // 0x359f5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x359f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x359f68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359f68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359f6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359f70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359f74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x359F74u;
    SET_GPR_U32(ctx, 31, 0x359F7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x359F74u, 0x359F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F7Cu;
label_359f7c:
    // 0x359f7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x359F7Cu;
    {
        const bool branch_taken_0x359f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359f7c) {
            ctx->pc = 0x359FB8u;
            return;
        }
    }
    ctx->pc = 0x359F84u;
}
