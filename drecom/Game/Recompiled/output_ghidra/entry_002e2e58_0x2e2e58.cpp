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

// Function: entry_002e2e58
// Address: 0x2e2e58 - 0x2e2ed0
void entry_002e2e58_0x2e2e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2e58_0x2e2e58");
#endif

    switch (ctx->pc) {
        case 0x2e2ec4u: goto label_2e2ec4;
        default: break;
    }

    ctx->pc = 0x2e2e58u;

    // 0x2e2e58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e2e5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2e60: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E2E60u;
    {
        const bool branch_taken_0x2e2e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e60) {
            ctx->pc = 0x2E2F08u;
            return;
        }
    }
    ctx->pc = 0x2E2E68u;
    // 0x2e2e68: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2e6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2e70: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e2e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e2e74: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2E74u;
    {
        const bool branch_taken_0x2e2e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e74) {
            ctx->pc = 0x2E2ED0u;
            return;
        }
    }
    ctx->pc = 0x2E2E7Cu;
    // 0x2e2e7c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e2e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2e84: 0x0  nop
    ctx->pc = 0x2e2e84u;
    // NOP
    // 0x2e2e88: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e2e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e2e8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2e90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2e94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2e98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e2e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2e9c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e2ea0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ea4: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ea8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e2eac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e2eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2eb4: 0x0  nop
    ctx->pc = 0x2e2eb4u;
    // NOP
    // 0x2e2eb8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e2eb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ebc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E2EBCu;
    SET_GPR_U32(ctx, 31, 0x2E2EC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E2EBCu, 0x2E2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EC4u;
label_2e2ec4:
    // 0x2e2ec4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e2ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e2ec8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E2EC8u;
    {
        const bool branch_taken_0x2e2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ec8) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E2ED0u;
}
