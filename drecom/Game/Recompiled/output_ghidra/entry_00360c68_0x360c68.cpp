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

// Function: entry_00360c68
// Address: 0x360c68 - 0x360ce4
void entry_00360c68_0x360c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360c68_0x360c68");
#endif

    switch (ctx->pc) {
        case 0x360cbcu: goto label_360cbc;
        case 0x360cdcu: goto label_360cdc;
        default: break;
    }

    ctx->pc = 0x360c68u;

    // 0x360c68: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x360c68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x360c6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x360C6Cu;
    {
        const bool branch_taken_0x360c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x360c6c) {
            ctx->pc = 0x360C40u;
            return;
        }
    }
    ctx->pc = 0x360C74u;
    // 0x360c74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c78: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x360c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x360c7c: 0x24720630  addiu       $s2, $v1, 0x630
    ctx->pc = 0x360c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1584));
    // 0x360c80: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x360c80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x360c84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c88: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x360c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x360c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x360c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x360c90: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x360C90u;
    {
        const bool branch_taken_0x360c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x360c90) {
            ctx->pc = 0x360CE4u;
            return;
        }
    }
    ctx->pc = 0x360C98u;
    // 0x360c98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x360c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x360ca0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x360ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x360ca4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x360ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360ca8: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x360ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x360cac: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x360cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x360cb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x360cb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360cb4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x360CB4u;
    SET_GPR_U32(ctx, 31, 0x360CBCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x360CB4u, 0x360CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CBCu;
label_360cbc:
    // 0x360cbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cc0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x360cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360cc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x360cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360ccc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360cd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x360cd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x360CD4u;
    SET_GPR_U32(ctx, 31, 0x360CDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x360CD4u, 0x360CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360CDCu;
label_360cdc:
    // 0x360cdc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x360CDCu;
    {
        const bool branch_taken_0x360cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360cdc) {
            ctx->pc = 0x360D18u;
            return;
        }
    }
    ctx->pc = 0x360CE4u;
}
