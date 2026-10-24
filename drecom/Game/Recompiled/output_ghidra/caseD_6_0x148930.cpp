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

// Function: caseD_6
// Address: 0x148930 - 0x148988
void caseD_6_0x148930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x148930");
#endif

    switch (ctx->pc) {
        case 0x148978u: goto label_148978;
        case 0x148980u: goto label_148980;
        default: break;
    }

    ctx->pc = 0x148930u;

    // 0x148930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148934: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x148934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148938: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x14893c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x148940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148944: 0x0  nop
    ctx->pc = 0x148944u;
    // NOP
    // 0x148948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14894c: 0x0  nop
    ctx->pc = 0x14894cu;
    // NOP
    // 0x148950: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x148950u;
    {
        const bool branch_taken_0x148950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148950) {
            ctx->pc = 0x148988u;
            return;
        }
    }
    ctx->pc = 0x148958u;
    // 0x148958: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14895c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148964: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x148964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14896c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14896cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148970: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148970u;
    SET_GPR_U32(ctx, 31, 0x148978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148970u, 0x148978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148978u;
label_148978:
    // 0x148978: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x148978u;
    SET_GPR_U32(ctx, 31, 0x148980u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x148978u, 0x148980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148980u;
label_148980:
    // 0x148980: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x148980u;
    {
        const bool branch_taken_0x148980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148980) {
            ctx->pc = 0x1489CCu;
            return;
        }
    }
    ctx->pc = 0x148988u;
}
