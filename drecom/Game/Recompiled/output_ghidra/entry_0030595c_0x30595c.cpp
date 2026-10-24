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

// Function: entry_0030595c
// Address: 0x30595c - 0x3059bc
void entry_0030595c_0x30595c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030595c_0x30595c");
#endif

    switch (ctx->pc) {
        case 0x3059a0u: goto label_3059a0;
        case 0x3059b4u: goto label_3059b4;
        default: break;
    }

    ctx->pc = 0x30595cu;

    // 0x30595c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305960: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x305960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x305964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x305964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305968: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x305968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30596c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30596Cu;
    {
        const bool branch_taken_0x30596c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30596c) {
            ctx->pc = 0x3059BCu;
            return;
        }
    }
    ctx->pc = 0x305974u;
    // 0x305974: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x305974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x305978: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x305978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30597c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30597cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305980: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305984: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305988: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30598c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x305990: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x305990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305994: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x305994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x305998: 0xc05c848  jal         func_172120
    ctx->pc = 0x305998u;
    SET_GPR_U32(ctx, 31, 0x3059A0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x305998u, 0x3059A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059A0u;
label_3059a0:
    // 0x3059a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3059a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3059a8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3059a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3059ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3059ACu;
    SET_GPR_U32(ctx, 31, 0x3059B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3059ACu, 0x3059B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3059B4u;
label_3059b4:
    // 0x3059b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3059b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3059b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3059b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x3059bcu;
}
