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

// Function: entry_002e2fa4
// Address: 0x2e2fa4 - 0x2e3028
void entry_002e2fa4_0x2e2fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2fa4_0x2e2fa4");
#endif

    switch (ctx->pc) {
        case 0x2e3010u: goto label_2e3010;
        default: break;
    }

    ctx->pc = 0x2e2fa4u;

    // 0x2e2fa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e2fa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2fac: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E2FACu;
    {
        const bool branch_taken_0x2e2fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fac) {
            ctx->pc = 0x2E3064u;
            return;
        }
    }
    ctx->pc = 0x2E2FB4u;
    // 0x2e2fb4: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2fb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2fbc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e2fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e2fc0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E2FC0u;
    {
        const bool branch_taken_0x2e2fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fc0) {
            ctx->pc = 0x2E3028u;
            return;
        }
    }
    ctx->pc = 0x2E2FC8u;
    // 0x2e2fc8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e2fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2fd0: 0x0  nop
    ctx->pc = 0x2e2fd0u;
    // NOP
    // 0x2e2fd4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e2fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e2fd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2fdc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2fe4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e2fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2fe8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e2fec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ff0: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ff4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e2ff8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e2ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e2ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3000: 0x0  nop
    ctx->pc = 0x2e3000u;
    // NOP
    // 0x2e3004: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e3004u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3008: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E3008u;
    SET_GPR_U32(ctx, 31, 0x2E3010u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E3008u, 0x2E3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3010u;
label_2e3010:
    // 0x2e3010: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e3014: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e3014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e3018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e301c: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e301cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3020: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2E3020u;
    {
        const bool branch_taken_0x2e3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3020) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E3028u;
}
