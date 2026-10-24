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

// Function: entry_002e0f58
// Address: 0x2e0f58 - 0x2e0fe0
void entry_002e0f58_0x2e0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0f58_0x2e0f58");
#endif

    switch (ctx->pc) {
        case 0x2e0f78u: goto label_2e0f78;
        case 0x2e0fc0u: goto label_2e0fc0;
        default: break;
    }

    ctx->pc = 0x2e0f58u;

    // 0x2e0f58: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f5c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0f64: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x2e0f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x2e0f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0f70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0F70u;
    SET_GPR_U32(ctx, 31, 0x2E0F78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0F70u, 0x2E0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F78u;
label_2e0f78:
    // 0x2e0f78: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2e0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0f7c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f80: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e0f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0f84: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0f88: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2e0f8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0f90: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e0f94: 0xac9311a0  sw          $s3, 0x11A0($a0)
    ctx->pc = 0x2e0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 19));
    // 0x2e0f98: 0xa24000d6  sb          $zero, 0xD6($s2)
    ctx->pc = 0x2e0f98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0f9c: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x2e0f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e0fa0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e0fa4: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x2e0fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e0fa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0fb0: 0x0  nop
    ctx->pc = 0x2e0fb0u;
    // NOP
    // 0x2e0fb4: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e0fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e0fb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E0FB8u;
    SET_GPR_U32(ctx, 31, 0x2E0FC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E0FB8u, 0x2E0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FC0u;
label_2e0fc0:
    // 0x2e0fc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e0fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0fc4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e0fc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0FC8u;
    {
        const bool branch_taken_0x2e0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0fc8) {
            ctx->pc = 0x2E0FE0u;
            return;
        }
    }
    ctx->pc = 0x2E0FD0u;
    // 0x2e0fd0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e0fd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e0fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0fd8: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2E0FD8u;
    SET_GPR_U32(ctx, 31, 0x2E0FE0u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2E0FD8u, 0x2E0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FE0u;
}
