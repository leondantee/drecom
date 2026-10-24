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

// Function: entry_002e1f40
// Address: 0x2e1f40 - 0x2e1fd8
void entry_002e1f40_0x2e1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1f40_0x2e1f40");
#endif

    switch (ctx->pc) {
        case 0x2e1f48u: goto label_2e1f48;
        default: break;
    }

    ctx->pc = 0x2e1f40u;

    // 0x2e1f40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E1F40u;
    SET_GPR_U32(ctx, 31, 0x2E1F48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E1F40u, 0x2E1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F48u;
label_2e1f48:
    // 0x2e1f48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1f4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e1f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e1f50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e1f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1f54: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x2e1f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1f58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f60: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f64: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e1f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e1f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f74: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e1f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e1f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1f7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f80: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f84: 0xe46002b4  swc1        $f0, 0x2B4($v1)
    ctx->pc = 0x2e1f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 692), bits); }
    // 0x2e1f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1f8c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1f90: 0x948302d0  lhu         $v1, 0x2D0($a0)
    ctx->pc = 0x2e1f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2e1f94: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e1f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e1f98: 0xa48302d0  sh          $v1, 0x2D0($a0)
    ctx->pc = 0x2e1f98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1f9c: 0x920300d4  lbu         $v1, 0xD4($s0)
    ctx->pc = 0x2e1f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e1fa0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1fa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1fa8: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E1FA8u;
    {
        const bool branch_taken_0x2e1fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fa8) {
            ctx->pc = 0x2E2050u;
            return;
        }
    }
    ctx->pc = 0x2E1FB0u;
    // 0x2e1fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1fb4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1FB4u;
    {
        const bool branch_taken_0x2e1fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fb4) {
            ctx->pc = 0x2E2018u;
            return;
        }
    }
    ctx->pc = 0x2E1FBCu;
    // 0x2e1fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1fc0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1FC0u;
    {
        const bool branch_taken_0x2e1fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1fc0) {
            ctx->pc = 0x2E1FF8u;
            return;
        }
    }
    ctx->pc = 0x2E1FC8u;
    // 0x2e1fc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1FC8u;
    {
        const bool branch_taken_0x2e1fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fc8) {
            ctx->pc = 0x2E1FD8u;
            return;
        }
    }
    ctx->pc = 0x2E1FD0u;
    // 0x2e1fd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E1FD0u;
    {
        const bool branch_taken_0x2e1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1fd0) {
            ctx->pc = 0x2E2080u;
            return;
        }
    }
    ctx->pc = 0x2E1FD8u;
}
